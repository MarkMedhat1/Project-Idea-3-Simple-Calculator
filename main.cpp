#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b;
    } else {
        std::cerr << "Error: Cannot divide by zero.\n";
        return 0;
    }
}

int main() {
    int num1 = 10, num2 = 5;

    std::cout << "Addition: " << add(num1, num2) << "\n";
    std::cout << "Subtraction: " << subtract(num1, num2) << "\n";
    std::cout << "Multiplication: " << multiply(num1, num2) << "\n";
    std::cout << "Division: " << divide(num1, num2) << "\n";

    return 0;
}
