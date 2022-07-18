#include <iostream>
#include "PositiveNumber.h"

int main()
{
    PositiveNumber num1(100);
    double num = 10;
    PositiveNumber num2 = num1 - num;

    PositiveNumber num3 = num - num1;

    std::cout << num1 << ", " << num2 << ", " << num3 << std::endl;
}
