#include <bits/stdc++.h>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    double a, b;
    string operation;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> operation;

    if (operation == "add") {
        cout << "Result: " << add(a, b) << endl;
    } else if (operation == "subtract") {
        cout << "Result: " << subtract(a, b) << endl;
    } else if (operation == "multiply") {
        cout << "Result: " << multiply(a, b) << endl;
    } else if (operation == "divide") {
        cout << "Result: " << divide(a, b) << endl;
    } else {
        cout << "Invalid operation. Use add, subtract, multiply or divide." << endl;
    }

    return 0;
}
