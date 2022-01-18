#include <iostream>
#include <string>
using namespace std;

string yourName();

int main() {
    string fullName = yourName();
    cout << "Hello " << fullName << endl;
    return 0;
}

string yourName() {
    cout << "Enter your name: ";
    string fullName;
    getline(cin, fullName);
    return fullName;
}
