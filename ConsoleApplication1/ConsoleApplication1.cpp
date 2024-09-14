// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(0, "rus");
    
    /* int a, int b;
    std::cout << "Введите число А:\n";
    std::cin >> a;
    std::cout << "Введите число B:\n";
    std::cin >> b;
    int result = a * b;
    std::cout << "Результат умножения двух чисел A и B: " << a << std::endl; */

    int a;
    bool res = false;
    std::cout << "Введите число А:\n";
    std::cin >> a;
    
    if (a >= 1) {

        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                res = true;
                break;
            }
        }

        if (res)
        {
            std::cout << "Число не является простым" << std::endl;
        }
        else
        {
            std::cout << "Число простое" << std::endl;
        }
    }
    else
    {
        std::cout << "Число не является простым" << std::endl; 
    }
}
