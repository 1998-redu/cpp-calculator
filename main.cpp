#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "=== Simple Calculator ===" << endl;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
    }
    else if (operation == '/') {
        if (num2 == 0) {
            cout << "Error: You cannot divide by zero!" << endl;
        }
        else {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
    }
    else {
        cout << "Error: Invalid operation. Please use +, -, *, or /." << endl;
    }

    return 0;
}
