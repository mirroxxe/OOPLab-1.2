#pragma once
#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <sstream>
#include <string>

class Time {
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

public:
    
    Time();

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    void Init(unsigned int h, unsigned int m, unsigned int s);

    void Read();

    void Display() const;

    Time operator+(unsigned int seconds) const;
    Time operator-(unsigned int seconds) const;
    unsigned int toSeconds() const;
    unsigned int toMinutes() const;
};

// Зовнішня функція для створення об'єкта класу Time
Time makeTime(unsigned int h, unsigned int m, unsigned int s);

#endif 