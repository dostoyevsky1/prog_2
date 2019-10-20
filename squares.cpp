#include <iostream>
#include <vector>


double Power(double b, int e)
{
    double final;
    
    final = b;

    if(e == 0)
    {
        return 1;

    } else if(e > 0)
    {
        for (int i = 0; i < (e-1); i++)
        {
            final *= b;
        }

    } else if(e < 0)
    {
        for (int i = 0; i < ((-1*e)-1); i++)
        {
            final *= b;
        }
        final = 1/final;
    }

    return final; 

}




int main()
{
    
    std::cout << Power(2,-5) << std::endl;

    
    
    
    
    return 0;

}