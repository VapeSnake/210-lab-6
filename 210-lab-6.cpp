// COMSC-210|Lab 6|Noel Mier-Luna
#include <iostream>

using namespace std;
const int SIZE = 5;

void enterArrayData(double *, int SIZE);
void outputArrayData(double *, int SIZE); // Pointer as parameters to pass
double sumArray(double *, int SIZE);      // dynamic arrays via pointers.

int main()
{
    double *array = nullptr;
    array = new double[SIZE];
    enterArrayData(array, SIZE);
    outputArrayData(array, SIZE);
    double sum = sumArray(array, SIZE);
    cout << "\nSum of values: " << sum << endl;
    delete [] array; // Deleting dynamic array to be a good citizen
    return 0;
}

void enterArrayData(double *arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element #" << i << ": "; // Loop for inputting elements
        while (true)
        {
            if (!(cin >> *(arr + i)) || *(arr + i) < 0)
            { // Cin above if statement was redundant, so it was removed.
                cout << "Error: Not a valid number. Enter a non-negative number.\n";
                cin.clear();           // Clears error state to allow re-entry of number
                cin.ignore(100, '\n'); // Cleans buffer of any illegal characters
                continue;              // to prevent infinite loop.
            }
            else
            {
                break; // If entry is valid, break from while loop and
            } // continue to next entry.
        }
    }
    cout << "Data entry complete. " << endl;
}

void outputArrayData(double *arr, int SIZE)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
}

double sumArray(double *arr, int SIZE)
{
    double sum = 0; // Initializes sum tracker to zero to begin summing array.
    for (int i = 0; i < SIZE; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}