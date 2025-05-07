#include <iostream>

const int NUM_COLS = 5;  // Example column size, can be any value

bool isFound(int arr[][NUM_COLS], const int numRows, const int val) {
    // Iterate over each row
    for (int i = 0; i < numRows; ++i) {
        // Iterate over each column in the current row
        for (int j = 0; j < NUM_COLS; ++j) {
            if (arr[i][j] == val) {
                return true;  // If value is found, return true
            }
        }
    }
    return false;  // If value is not found in any row/column, return false
}

int main() {
    // Example 2D array
    int arr[3][NUM_COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    
    int val = 8;
    
    if (isFound(arr, 3, val)) {
        std::cout << "Value " << val << " found in the array!" << std::endl;
    } else {
        std::cout << "Value " << val << " not found in the array!" << std::endl;
    }

    return 0;
}