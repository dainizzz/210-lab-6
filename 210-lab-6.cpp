// COMSC-210 | Lab 6 | Dainiz Almazan
// IDE used: CLion

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

// enterArrayData() receives a dynamic double array and populates it with values that the user enters via the console.
// arguments: a dynamic array of type double, an int representing the array's size
// returns: nothing
void enterArrayData(double *, int);

// outputArrayData() receives a dynamic double array and outputs its contents on one line.
// arguments: a dynamic array of type double, an int representing the array's size
// returns: nothing
void outputArrayData(double *, int);

// sumArray() receives a dynamic double array and both calculates and returns its sum.
// arguments: a dynamic array of type double, an int representing the array's size
// returns: the sum of the values in the array
double sumArray(double *, int);

int main() {
	// Declaring a pointer variable of the same type as the array
	double *arrptr = nullptr;
	// Using new operator to create a dynamic array of the desired size
	arrptr = new double[ARRAY_SIZE];

	enterArrayData(arrptr, ARRAY_SIZE);
	outputArrayData(arrptr, ARRAY_SIZE);
	cout << "\nSum of values: " << sumArray(arrptr, ARRAY_SIZE) << endl;

	// Using delete operator to delete the dynamic array
	delete [] arrptr;

	return 0;
}

void enterArrayData(double *arrptr, const int size) {
	cout << "Data entry for the array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << "\t> Element #" << i << ": ";
		// Using pointer notation to store value in array
		cin >> *(arrptr + i);
	}
	cout << "Data entry complete." << endl;
}

void outputArrayData(double *arrptr, const int size) {
	cout << "Outputting array elements: ";
	for (int i = 0; i < size; i++) {
		// Using pointer notation to access value in array
		cout << *(arrptr + i) << " ";
	}
}

double sumArray(double *arrptr, const int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		// Using pointer notation to access value in array
		sum += *(arrptr + i);
	}
	return sum;
}
