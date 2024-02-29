#include "time.h"


Time::Time() {

}

unsigned int Time::getHour() const {
    return hour;
}

unsigned int Time::getMinute() const {
    return minute;
}

unsigned int Time::getSecond() const {
    return second;
}

void Time::Init(unsigned int h, unsigned int m, unsigned int s) {
    hour = h;
    minute = m;
    second = s;
}

void Time::Read() {
    unsigned int h, m, s;
    std::cout << "Enter hour: ";
    std::cin >> h;
    std::cout << "Enter minute: ";
    std::cin >> m;
    std::cout << "Enter second: ";
    std::cin >> s;
    Init(h, m, s);
}

void Time::Display() const {
    std::cout << hour << ":" << minute << ":" << second << std::endl;
}

Time Time::operator+(unsigned int seconds) const {
    Time result = *this;
    result.second += seconds;
    if (result.second >= 60) {
        result.minute += result.second / 60;
        result.second %= 60;
    }
    if (result.minute >= 60) {
        result.hour += result.minute / 60;
        result.minute %= 60;
    }
    return result;
}

Time Time::operator-(unsigned int seconds) const {
    Time result = *this;
    if (result.second < seconds) {
        unsigned int borrowMinutes = (seconds - result.second) / 60 + 1;
        result.minute -= borrowMinutes;
        result.second += borrowMinutes * 60;
    }
    result.second -= seconds;
    return result;
}

unsigned int Time::toSeconds() const {
    return hour * 3600 + minute * 60 + second;
}

unsigned int Time::toMinutes() const {
    return (hour * 60) + minute + (second > 0 ? 1 : 0);
}

// Реалізація зовнішньої функції
Time makeTime(unsigned int h, unsigned int m, unsigned int s) {
    Time time;
    time.Init(h, m, s);
    return time;
}