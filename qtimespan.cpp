#include "qtimespan.h"

QT_BEGIN_NAMESPACE

QTimeSpan::QTimeSpan()
    : ms(0)
{

}

QTimeSpan::~QTimeSpan()
{

}

QTimeSpan QTimeSpan::fromMilliseconds( qint64 milliseconds )
{
    QTimeSpan ts;
    ts.ms = milliseconds;
    return ts;
}

QTimeSpan QTimeSpan::fromSeconds( double seconds )
{
    QTimeSpan ts;
    ts.ms = seconds * 1000.0;
    return ts;
}

QTimeSpan QTimeSpan::fromMinutes( double minutes )
{
    QTimeSpan ts;
    ts.ms = minutes * 60000.0;
    return ts;
}

QTimeSpan QTimeSpan::fromHours( double hours )
{
    QTimeSpan ts;
    ts.ms = hours * 3600000.0;
    return ts;
}

QTimeSpan QTimeSpan::fromDays( double days )
{
    QTimeSpan ts;
    ts.ms = days * 86400000.0;
    return ts;
}

qint32 QTimeSpan::milliseconds() const
{
    return ms;
}

qint32 QTimeSpan::seconds() const
{
    return ( ms % 60000 ) / 1000.0;
}

qint32 QTimeSpan::minutes() const
{
    return ( ms % 3600000 ) / 60000.0;
}

qint32 QTimeSpan::hours() const
{
    return ( ms % 86400000 ) / 3600000.0;
}

qint32 QTimeSpan::days() const
{
    return ms / 86400000.0;
}

/* qint32 months();
qint32 years();*/

double QTimeSpan::totalMilliseconds() const
{
    return ms;
}

double QTimeSpan::totalSeconds() const
{
    return ms / 1000.0;
}

double QTimeSpan::totalMinutes() const
{
    return ms / 60000.0;
}

double QTimeSpan::totalHours() const
{
    return ms / 3600000.0;
}

double QTimeSpan::totalDays() const
{
    return ms / 86400000.0;
}

bool QTimeSpan::operator==( const QTimeSpan& rhs) const
{
    return rhs.ms == ms;
}

bool QTimeSpan::operator!=( const QTimeSpan& rhs) const
{
    return rhs.ms != ms;
}

bool QTimeSpan::operator>=( const QTimeSpan& rhs) const
{
    return rhs.ms >= ms;
}

bool QTimeSpan::operator>( const QTimeSpan& rhs) const
{
    return rhs.ms > ms;
}

bool QTimeSpan::operator<=( const QTimeSpan& rhs) const
{QT_BEGIN_NAMESPACE
    return rhs.ms <= ms;
}

bool QTimeSpan::operator<( const QTimeSpan& rhs) const
{
    return rhs.ms < ms;
}

QTimeSpan& QTimeSpan::operator=( const QTimeSpan& rhs )
{
    this->ms = rhs.ms;
    return *this;
}

QTimeSpan& QTimeSpan::operator+=( const QTimeSpan rhs )
{
    this->ms += rhs.ms;
    return *this;
}

QTimeSpan& QTimeSpan::operator-=( const QTimeSpan rhs )
{
    this->ms -= rhs.ms;
    return *this;
}

const QTimeSpan QTimeSpan::operator+( const QTimeSpan rhs ) const
{
    return QTimeSpan::fromMilliseconds(this->ms + rhs.ms);
}

const QTimeSpan QTimeSpan::operator-( const QTimeSpan rhs ) const
{
    return QTimeSpan::fromMilliseconds(this->ms - rhs.ms);
}

QT_END_NAMESPACE
