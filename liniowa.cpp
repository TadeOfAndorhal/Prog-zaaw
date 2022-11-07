#include "prehead.h"

float zero_func_lin(float a, float b)
{
    if (a == 0.0 && b == 0.0)
    {
        return b;
    }
    else if(a == 0.0 && b != 0.0)
    {
        std::cout<<"ERROR ~ brak miejsc zerowych";
        return -1.0;
    }
    else 
        return ((-b)/a);
}