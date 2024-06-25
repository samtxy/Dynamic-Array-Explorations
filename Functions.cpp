#include "DArray.h"

// Definition function emptyArray
void DArray::emptyArray() {
	numOfElements = 0;
}

// Definition function appendArray
void DArray::append(const DArray& otherArray) {
	if (otherArray.numOfElements != 0) {
		if (capacity < numOfElements+otherArray.numOfElements) {
			delete[] a;
			a = nullptr;

		}
		else {
			/*for (int i = 0; i < otherArray.numOfElements; ++i) {
				a[numOfElements] = otherArray.a[i];
				++numOfElements;
			}*/
		}
	}
}


// Definition move constructor


// Definition move assignment operator



