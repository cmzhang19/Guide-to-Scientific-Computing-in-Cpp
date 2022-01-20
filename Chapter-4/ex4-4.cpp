#include <iostream>

using namespace std;

int main()
{
    /* Write code that dynamically allocates memory for three 2 × 2 matrices of
     * double precision floating point numbers, A, B, C, and assigns values to
     * the entries of A and B.
     *
     * Let C = A + B.
     * Extend your code so that it calculates the entries of C, and then prints
     * the entries of C to screen.
     * Finally, de-allocate memory.
     *
     * Again, check you have de-allocated memory correctly by using a for loop as
     * in the previous exercise.*/

    for(int i=0; i<1e+9; i++)
    {
        int rows = 2;
        int cols = 2;

        double** A;
        A = new double* [rows];
        double** B;
        B = new double* [rows];
        double** C;
        C = new double* [rows];

        for (int i=0; i<rows; i++)
        {
            A[i] = new double [cols];
            B[i] = new double [cols];
            C[i] = new double [cols];
        }

        for (int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                A[i][j] = (i+1)*j;
                B[i][j] = A[i][j] + 1;
                C[i][j] = B[i][j]+ A[i][j];
                //cout << C[i][j] << endl;
            }
        }

        for (int i=0; i<rows; i++)
        {
            delete[] A[i];
            delete[] B[i];
            delete[] C[i];
        }
        delete[] A;
        delete[] B;
        delete[] C;

    }

    return 0;
}
