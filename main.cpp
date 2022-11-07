#include "prehead.h"
#include "liniowa.cpp"
#include "kwadratowa.cpp"

int main()
{
    std::cout<<"Miejsce zerowe 3x + 6 -> "<<zero_func_lin(3.0, 6.0)<<"\n";
    std::cout<<"Miejsca zerowe x^2 + 5x + 1 -> \n";
    float * mz = new float[2]{0.0,0.0};
    mz = zero_func_kwad(1.0,5.0,1.0, mz);
    for(int i =0;i<2;i++)
    {
        std::cout<<mz[i]<<"\n";
    }
    
    delete[] mz;
    return 0;
}