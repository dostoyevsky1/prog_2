#include <iostream>
#include <vector>
#include "squares.h"

int main()
{
    int x, y, lower, upper;

    do
    {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> x;

        std::cout << "Enter another number: " << std::endl;
        std::cin >> y;

        if(x < y)
        {
            lower = x;
            upper = y;
        } else
        {
            lower = y;
            upper = x;
        }

        std::cout << std::endl << "N" << "\t" << "N Squared" << "\t" << "Square Root (N)" << std:: endl;
        
        for(int i = lower; i <= upper; i++)
        {  
                std::cout.precision(3);
                std::cout << i << "\t" << Power(i,2) << "\t\t" << Sqrt(i) << std::endl;
        }
        
    } while (MoreData() == true);
       
    return 0;
}