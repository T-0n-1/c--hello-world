#include <iostream> // C++ i/o stream header
#include <string>
using namespace std;

void yourName();

int main() {    // C/C++ project can have only one main function
    yourName();
    return 0;
}

void yourName() {
    cout << "Enter your name: ";
    string fullName;
    getline(cin, fullName);
    cout << "Hello " << fullName << endl;
}