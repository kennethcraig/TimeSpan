#ifndef QTIMESPAN_H
#define QTIMESPAN_H

#include <QtCore/qstring.h>
#include <QtCore/qnamespace.h>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Core)

class Q_CORE_EXPORT QTimeSpan
{
public:
    QTimeSpan();
    ~QTimeSpan();

    static QTimeSpan fromMilliseconds( qint64 milliseconds );
    static QTimeSpan fromSeconds( double seconds );
    static QTimeSpan fromMinutes( double minutes );
    static QTimeSpan fromHours( double hours );
    static QTimeSpan fromDays( double days );

    qint32 milliseconds() const;
    qint32 seconds() const;
    qint32 minutes() const;
    qint32 hours() const;
    qint32 days() const;
   /* qint32 months();
    qint32 years();*/

    double totalMilliseconds() const;
    double totalSeconds() const;
    double totalMinutes() const;
    double totalHours() const;
    double totalDays() const;
   /* double totalWeeks();
    double totalMonths();
    double totalYears();*/

    bool operator==( const QTimeSpan& rhs) const;
    bool operator!=( const QTimeSpan& rhs) const;

    bool operator>=( const QTimeSpan& rhs) const;
    bool operator>( const QTimeSpan& rhs) const;

    bool operator<=( const QTimeSpan& rhs) const;
    bool operator<( const QTimeSpan& rhs) const;

    QTimeSpan& operator=( const QTimeSpan& rhs );

    QTimeSpan& operator+=( const QTimeSpan rhs );
    QTimeSpan& operator-=( const QTimeSpan rhs );

    const QTimeSpan operator+( const QTimeSpan rhs ) const;
    const QTimeSpan operator-( const QTimeSpan rhs ) const;

private:
    qint64 ms;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTIMESPAN_H
