#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called." << endl;
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }

    void printHello() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    MyClass myObj;
    myObj.printHello();
    return 0;
}
