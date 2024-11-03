#include <iostream>

void PrintArray (int array[], int n) {

    for (int i = 0; i < n; i++) {
        std::cout << array [i] << " ";
    }
    std::cout << std::endl;
}

/*
Selection Sort Algorithm:
Searchs for the minimum value and swap it for the first unsorted position of the array.
Complexit Time: O(n²)
Space complexity O(1)
*/
void SelectionSort (int array [], int n) {
    int i, minimum;

    for (i = 0; i < n; i++) {
        minimum = i;
        for (int j = i + 1; j < n; j++) {
            if (array [j] < array [minimum]) {
                minimum = j;
            }
        }
        std::swap (array [i], array [minimum]);
    }
}

int BinarySearch (int array[], int value, int n) {

    int i = 0, j = n-1;
    while (i <= j) {
        int mid = (i+j)/2;
        if (array[mid] == value) return mid;
        else if (array[mid] < value) i = mid + 1;
        else j = mid - 1;
    }

    return -1; //No corresponding index
}
int main () {

    int array[] = {10, 17, 48, 33, 99, 999, 1, 3, 25, 1};
    int n = sizeof (array) / sizeof (array [0]);
    
    //std::cout << n << std::endl;

    SelectionSort(array, n);
    PrintArray(array, n);
    std::cout << BinarySearch(array, 9999, n) << std::endl;

    return 0;
}
