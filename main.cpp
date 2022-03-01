#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    float a;
    float b;
    char operation;

    cout << "Enter first number a =" << endl;
    cin >> a;
    cout << "Enter second number b =" << endl;
    cin >> b;
    cout << "Enter operation: " << endl;
    cin >> operation;

    if ((operation == '/') && (b == 0)) {

        cout << "Error: Can't divide by zero, try again." << endl;
        exit(0);

    }

    switch (operation) {

        case '-':
            cout << "a - b = " << a - b << endl;
            break;
        case '+':
            cout << "a + b = " << a + b << endl;
            break;
        case '*':
            cout << "a * b = " << a * b << endl;
            break;
        case '/':
            cout << "a / b = " << a / b << endl;
            break;
        default:
            cout << "There is no operation, Please Enter '+' or '-' or '/' or '*', try again." << endl;
            return 0;

    }

}