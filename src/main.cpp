#include <iostream>
#include "calculator.h"

int main() {
    char op;
    double num1, num2;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    Calculator calc;
    double result;
    bool success = true;

    switch (op) {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                result = calc.divide(num1, num2);
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                success = false;
            }
            break;
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            success = false;
    }

    if (success) {
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
