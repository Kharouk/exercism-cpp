#include "leap.h"

bool leap::is_leap_year(int year)
{
   return year % 4 == 0;
}