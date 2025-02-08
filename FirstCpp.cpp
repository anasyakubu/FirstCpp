#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int rows = 16;
    const int cols = 1;
    float array1[rows][cols];
    float array2[rows][cols];

    // Initializing the arrays based on the given conditions
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array1[i][j] = pow((i + j), 2); // Square of sum of indices
            array2[i][j] = 3 + abs(i - j);  // Three more than positive difference of indices
        }
    }

    // Printing the arrays
    cout << "Array 1 (Square of sum of indices):" << endl;
    for (int i = 0; i < rows; i++) {
        cout << array1[i][0] << endl;
    }

    cout << "\nArray 2 (Three more than positive difference of indices):" << endl;
    for (int i = 0; i < rows; i++) {
        cout << array2[i][0] << endl;
    }

    return 0;
}
