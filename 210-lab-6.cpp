// COMSC-210|Lab 6|Noel Mier-Luna
#include <iostream>

using namespace std;
const int SIZE = 5;

void enterArrayData(double*);
void outputArrayData(double*); // Pointer as parameters to pass
double sumArray(double*);      // dynamic arrays via pointers.

int main()
{
    double *array = nullptr;
    array = new double[SIZE];
    enterArrayData(array);
    cout << "Hello world! " << endl;
    return 0;
}

void enterArrayData(double *arr)
{
    for (int i = 0; i < SIZE; i++)
    {   
        cout << "Element #" << i << ": ";
        cin >> *(arr + i);
    }

}