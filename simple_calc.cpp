#include <iostream>
using namespace std;

double sum(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return x / y;
}

int main() {
    double a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nChoose an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << sum(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << divide(a, b) << endl;
            break;
        default:
            cout << "Invalid,Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
