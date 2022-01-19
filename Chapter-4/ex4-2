#include <iostream>

using namespace std;

int main()
{
    /* Assign values to two integer variables.
     *
     * Swap the values stored by these variables using only pointers to integers.*/

    int a = 5;
    int b = 9;

    int* p_a = &a;
    int* p_b = &b;
    int* temp; 

    *temp = *p_a;

    cout << "Address of temp and a : " << temp << "  " << &a << endl;

    *p_a = *p_b;
    *p_b = *temp;

    cout << "After swapping " << "a: " << a << " b: " << b << endl;

    p_a = nullptr;
    p_b = nullptr;
    temp = nullptr;

    cout << a << " " << b << endl;
    cout << &a << " " << &b << endl;
    cout << p_a << " " << p_b << endl;

    return 0;
}
