#include <iostream>
#include <Windows.h>

void main() {

    setlocale(LC_ALL, "russian");

    int number1;
    int number2;
    std::cout << "Введите первое число:\n";
    std::cin >> number1;
    std::cout << "Введите второе число: \n";
    std::cin >> number2;
    std::cout << "---проверяем----\n";
    if (number1 > number2) {
        std::cout << "наименьшее чесло: " << number2;
    }
    else if (number1 < number2) {
        std::cout << "наименьшее чесло: " << number1;
    }
    else {
        std::cout << "числа равны: " << number1;
    }
}
