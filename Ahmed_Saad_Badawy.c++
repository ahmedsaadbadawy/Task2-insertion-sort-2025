
// Arranging Books by Height

/* 
Imagine you have a few books with different heights, and you want to arrange them from shortest to tallest.
Let's assume the books' heights are: [60, 40, 50, 30, 70].

Sorting Process:
Start with the second book (40):
Compare 40 with 60 → 40 is smaller → Insert 40 before 60.
Result: [40, 60, 50, 30, 70]

Take 50:
Compare 40 with 50 → 40 is smaller → Insert 40 before 50.
Result: [40, 50, 60, 30, 70]

Take 30:
Compare 30 with 60 → 30 is smaller
Compare 30 with 50 → 30 is smaller
Compare 30 with 40 → 30 is smaller → Insert 30 at the beginning.
Result: [30, 40, 50, 60, 70]

Take 70:
Compare 70 with 60 → 70 is larger → No changes needed.

Output:
Before Sorting: 60 40 50 30 70
After Sorting: 30 40 50 60 70
*/

//Code Implementation in C++ :
#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
}

int main() {
    int books[] = {60, 40, 50, 30, 70};
    int size = sizeof(books) / sizeof(books[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++) {
        cout << books[i] << " ";
    }
    cout << endl;

    insertionSort(books, size);

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++) {
        cout << books[i] << " ";
    }
    cout << endl;

    return 0;
}


