
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	const int NUM_NUMBERS = 5;
	int numbers[NUM_NUMBERS] = { 10, 20, 30, 40, 50 };

	/* 
	TODO: Print each value of the array in order
	Expected:
		10, 20, 30, 40, 50,
	*/
	// Task1: Write your Code here
	// ------------------------------------------------------------------------

	// ZORA: create an object of type 'size_t' which will record the size of the array by calculating how many items are in the array, by: dividing the entire memory allocation of the array by the memory allocation of one element of the array.
	
	// option 1
	size_t arraySize = sizeof(numbers) / sizeof(numbers[0]);
	for (size_t i = 0; i < arraySize; i++) 
	{
		cout << numbers[i] << endl;
	}

	//// option 2
	//for (int val: numbers) 
	//{
	//	cout << val << endl;
	//}

	// ------------------------------------------------------------------------


	/*
	TODO: Print each value of the array in reverse order
	Expected:
		50, 40, 30, 20, 10,
	*/

	// Task 2: Write your Code here
	// ------------------------------------------------------------------------

	for (size_t i = 0; i < arraySize; i++)
	{
		cout << numbers[(arraySize-1-i)] << endl;
	}

	// ------------------------------------------------------------------------

	return 0;
}
