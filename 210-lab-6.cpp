// COMSC-210|Lab 6|Noel Mier-Luna
#include <iostream>

using namespace std;
const int SIZE = 5;

void enterArrayData(double *);
void outputArrayData(double *); // Pointer as parameters to pass
double sumArray(double *);      // dynamic arrays via pointers.

int main()
{
    double *array = nullptr;
    array = new double[SIZE];
    enterArrayData(array);
    cout << "Hello world! " << endl;
    outputArrayData(array);
    double sum = sumArray(array);
    
    return 0;
}

void enterArrayData(double *arr)
{
    for (int i = 0; i < SIZE; i++)        // NOTE: Include input val. for
    {                                     // + values only
        cout << "Element #" << i << ": "; // Loop for inputting elements
        cin >> *(arr + i);                // using pointer notation
    }
    cout << "Data entry complete. " << endl;
}

void outputArrayData(double *arr)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
}

double sumArray(double *arr)
{
    double sum = 0; // Initializes sum tracker to zero to begin summing array.
    for (int i = 0; i < SIZE; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}