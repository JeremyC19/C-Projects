#include <iostream>
using namespace std;

int main() {
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;
    cout << "What is your first number between 0 & 100?" << endl;
    cin >> *ptr1;
    cout << "What is your second number between 0 & 100?" << endl;
    cin >> *ptr2;
    cout << "What is your third number between 0 & 100?" << endl;
    cin >> *ptr3;
    if (*ptr1 >= 0 && *ptr1 <= 100 && *ptr2 >= 0 && *ptr2 <= 100 && *ptr3 >= 0 && *ptr3 <= 100) {
        cout << "Your first number as a variable is " << *ptr1 << endl;
        cout << "Your first number's pointer is " << ptr1 << endl;
        cout << "Your second number as a variable is " << *ptr2 << endl;
        cout << "Your second number's pointer is " << ptr2 << endl;
        cout << "Your third number as a variable is " << *ptr3 << endl;
        cout << "Your third number's pointer is " << ptr3 << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;
}

