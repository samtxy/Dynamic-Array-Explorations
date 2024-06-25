#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

const int CAP = 50;

class DArray
{
	friend ostream& operator<<(ostream& out, const DArray& theArray);
	// Overloaded insertion operator to print array

public:
    DArray( );
	DArray(const DArray&);
    DArray(int newCapacity);

    void addElement(int newElement);

	int getNumOfElements() const;

	DArray& operator=(const DArray&);
	
	~DArray();

	// Declaration function emptyArray
	void emptyArray();

	// Declaration function append
	void append(const DArray& a);


	// Declaration move constructor


	// Declaration move assignment operator


private:
    int *a;					//will point to an array of integers
    int capacity;			//capacity of the array
    int numOfElements;		//total number of elements in the array

};

#endif