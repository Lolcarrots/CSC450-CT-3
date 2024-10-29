#include <iostream>
using namespace std;

int main() 
{
    int number1, number2, number3;
    // Input with validation
    while (true) {
        cout << "Enter first integer value: ";
        if (cin >> number1) {
            char nextChar;
            if (cin.get(nextChar) && nextChar != '\n') {
                cout << "Enter an integer!\n";
                cin.clear();
                while (cin.get() != '\n');
                continue;
            }
            break;
        }
        cout << "Enter an integer!\n";
        cin.clear();
        while (cin.get() != '\n');
    }
    while (true) {
        cout << "Enter second integer: ";
        if (cin >> number2) {
            char nextChar;
            if (cin.get(nextChar) && nextChar != '\n') {
                cout << "Enter an integer!\n";
                cin.clear();
                while (cin.get() != '\n');
                continue;
            }
            break;
        }
        cout << "Enter an integer!\n";
        cin.clear();
        while (cin.get() != '\n');
    }
    while (true) {
        cout << "Enter third integer: ";
        if (cin >> number3) {
            char nextChar;
            if (cin.get(nextChar) && nextChar != '\n') {
                cout << "Enter an integer!\n";
                cin.clear();
                while (cin.get() != '\n');
                continue;
            }
            break;
        }
        cout << "Enter an integer!\n";
        cin.clear();
        while (cin.get() != '\n');
    }
    // New pointers
    int* pointer1 = new int;
    int* pointer2 = new int;
    int* pointer3 = new int;
    *pointer1 = number1;
    *pointer2 = number2;
    *pointer3 = number3;
    // Displaying contents
    cout << "Integer contents: ";
    cout << number1 << " " << number2 << " " << number3 << endl;
    cout << "Pointer contents: ";
    cout << *pointer1 << " " << *pointer2 << " " << *pointer3 << endl;
    // Deleting pointers
    delete pointer1;
    delete pointer2;
    delete pointer3;
    return 0;
}