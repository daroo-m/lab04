#include <iostream>
using namespace std;

const int NUM_COLS = 2;

bool isFound(int arr[][NUM_COLS], const int NUM_ROWS, const int NUM_COLS, int numToFind) {

	bool wasFound = false;

	for(int r = 0; r < NUM_ROWS; r++) {
		for(int c = 0; c < NUM_COLS; ++c) {
			if(arr[r][c] == numToFind) {
				wasFound = true;
			}
		}
	}
	return wasFound;
}

int main() {

	const int NUM_ROWS = 3;

	int arr[NUM_ROWS][NUM_COLS] = {{4, 6}, {3, 0}, {-1, 7}};

	cout << isFound(arr, NUM_ROWS, NUM_COLS, 6) << endl; // should be false
	cout << isFound(arr, NUM_ROWS, NUM_COLS, 2) << endl; // should be true

	return 0;

}