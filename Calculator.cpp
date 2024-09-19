#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exponentiation (^)\n";
    cout << "6. Square root (sqrt)\n";
    cout << "Enter your choice: ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit with an error code
            }
            result = num1 / num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 's': // For square root, use 's' as a shortcut
            result = sqrt(num1);
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; // Exit with an error code
    }

    cout << "Result: " << result << endl;

    return 0;
}
