#include "leap.h"

bool leap::is_leap_year(int year)
{
    if (year % 4 == 0) {
        return year % 100 != 0 & year % 400 == 0;
    }
    return false;
}