#include <iostream>

using namespace std;

void showMenu() {
    cout << "\n=================================" << endl;
    cout << "     SIMPLE C++ CALCULATOR       " << endl;
    cout << "=================================" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "=================================" << endl;
    cout << "Enter your choice (1-5): ";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 5) {
            cout << "\nThank you for using the calculator! Goodbye.\n" << endl;
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "\nInvalid selection! Please enter a number between 1 and 5." << endl;
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "\nResult: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "\nResult: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "\nResult: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "\nError: Division by zero is undefined!" << endl;
                } else {
                    result = num1 / num2;
                    cout << "\nResult: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
        }
    }

    return 0;
}
