#include <iostream>

using namespace std;

int integerValue(int* value);

int main()
{
   /*Write code that sends the address of an integer to a function that
    * prints out the value of the integer.*/

    int* p_x = new int(5);

    cout << *p_x << endl;

    cout << integerValue(p_x) << endl;

    return 0;
}

int integerValue(int* value)
{
    return *value;
}
