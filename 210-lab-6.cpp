// COMSC-210 | Lab 6 | Dainiz Almazan
// IDE used: CLion
//TODO: Use pointer notation over array notation

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

// enterArrayData() receives a dynamic double array and populates it with values that the user enters via the console.
// arguments: a dynamic array of type double, an int representing the array's size
// returns: nothing
void enterArrayData(double *, const int);
// outputArrayData() receives a dynamic double array and outputs its contents on one line.
// arguments: a dynamic array of type double
// returns: nothing
void outputArrayData(double *);
// sumArray() receives a dynamic double array and both calculates and returns its sum.
// arguments: a dynamic array of type double
// returns: the sum of the values in the array
double sumArray();

int main(){
    double *arrptr = nullptr;
    arrptr = new double[ARRAY_SIZE];

    // Pass the array to the three functions to populate, output, and sum the array.

    delete [] arrptr;

    return 0;
}

void enterArrayData(double *arrptr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter a number to add to the array:" << endl;
        cin >> *(arrptr + i);
    }
}

void outputArrayData(double *arr) {

}

double sumArray() {

}