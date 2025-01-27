#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

class A {
    int numA;

public:
    // Constructor to initialize numA
    A(int val) : numA(val) {}

    // Declare friend function
    friend void findGreater(A, B);
};

class B {
    int numB;

public:
    // Constructor to initialize numB
    B(int val) : numB(val) {}

    // Declare friend function
    friend void findGreater(A, B);
};

// Friend function to find and print the greater number
void findGreater(A objA, B objB) {
    if (objA.numA > objB.numB) {
        cout << "The greater number is: " << objA.numA << endl;
    } else if (objA.numA < objB.numB) {
        cout << "The greater number is: " << objB.numB << endl;
    } else {
        cout << "Both numbers are equal: " << objA.numA << endl;
    }
}

int main() {
    A objA(25); // Create an object of class A
    B objB(30); // Create an object of class B

    findGreater(objA, objB); // Call the friend function

    return 0;
}
