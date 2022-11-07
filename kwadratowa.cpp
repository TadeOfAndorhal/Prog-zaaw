#include "prehead.h"

float * zero_func_kwad(float a, float b, float c, float *tab)
{
    float *err = 0;
    float delta = 0;
    delta = b * b;
    delta -= 4 * a * c;
    if(delta<0.0)
    {
        std::cout<<"ERROR ~ delta < 0, ";
        *err = -2;
        return err;
    }
    else
    {
        float pierw_delta = sqrt(delta);
        float x1 = 0.0, x2 = 0.0;
        x1 -= b+pierw_delta;
        x1 /= 2 * a;
        x2 -= b-pierw_delta;
        x2 /= 2 * a;
        tab[0] = x1;
        tab[1] = x2;
        return tab;
    }
    
}