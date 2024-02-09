
#include <iostream>

using namespace std;

int main() {
    string userString;
    cout << "Enter a string with 5 characters to be reversed (spaces count as characters)" << endl;
    getline(cin, userString);
    while (userString.length() != 5) {
        cout << "Invalid input. Please enter a string with exactly 5 characters" << endl;
        getline(cin, userString);
    }
    cout << "Your reversed string is below" << endl;
    for (int i = 0; i <= 5; i++) {
        cout << userString[5 - i];
    }
    cout << endl;

    string userString2;
    cout << "Now enter a string with 6 characters" << endl;
    getline(cin, userString2);
    while (userString2.length() != 6) {
        cout << "Invalid input. Please enter a string with exactly 6 characters" << endl;
        getline(cin, userString2);
    }
    cout << "Your reversed string is below" << endl;
    for (int i = 0; i <= 6; i++) {
        cout << userString2[6 - i];
    }
    cout << endl;

    string userString3;
    cout << "Finally, enter a string with 3 characters" << endl;
    getline(cin, userString3);
    while (userString3.length() != 3) {
        cout << "Invalid input. Please enter a string with exactly 3 characters" << endl;
        getline(cin, userString3);
    }
    cout << "Your reversed string is below" << endl;
    for (int i = 0; i <= 3; i++) {
        cout << userString3[3 - i];
    }
    cout << endl;

    return 0;
}
