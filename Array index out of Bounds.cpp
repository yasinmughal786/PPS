#include <iostream>
#include <stdexcept>
using namespace std;


int getElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of bounds");
    }
    return arr[index];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int index;

    cout << "Enter index to access: ";
    cin >> index;

    try {
        int value = getElement(arr, size, index);
        cout << "Value at index " << index << ": " << value << endl;
    } catch (const exception &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
