#include <iostream>

using namespace std;

int main()
{
    /* Write code that declares an integer i to take the value 5.
     * Declare a pointer to an integer p_j, and store the address of i in this pointer.
     * Multiply the value of the variable i by 5 by using a line of code that only uses the pointer variable.
     * Declare another pointer to an integer p_k and use the new keyword to allocate a location in memory that this pointer stores.
     * Then store the contents of the variable i in this location. */

    int i = 5;
    int* p_j = &i;

    cout << "address of i: " << &i << endl;
    cout << "address of pointer p_j:  " << p_j << endl;

    i = 5 * (*p_j);

    int* p_k = new int ;
    cout << "address of p_k: " << p_k << endl;

    *p_k = i ;

    cout << "address of i: " << p_k << endl;

    cout << "value of p_k: " << *p_k << endl;

    delete p_k;

    cout << "value of p_k after delete operation: " << *p_k << endl;
    cout << "address of p_k after delete operation: " << p_k << endl;

    //the program only released the memory of the integer
    //but the pointer created for the integer is still there

    p_k = nullptr;

    return 0;
}
