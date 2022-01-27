#include <iostream>
#include <string>
using namespace std;

string yourName();
string scandinavianChars();

int main() {
    string fullName = yourName();
    string fName = scandinavianChars();
    cout << "Hello " << fullName << endl << endl;
    cout << fName << endl;
    return 0;
}

string yourName() {
    cout << "Enter your name: ";
    string fullName;
    getline(cin, fullName);
    return fullName;
}

string scandinavianChars() {
    char fName[20] = "Äiti Rösberg";
    return fName;
}
