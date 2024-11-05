#include <iostream>
#include <windows.h>

using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return 0; 
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[] = { 10, 20, 40, 30, 50 };
    int size = 5; 
    int key = 30;

    int result = linearSearch(arr, size, key);

    if (result != 0) {
        cout << "Елемент знайдено на індексі: " << result << endl;
    }
    else {
        cout << "Елемент не знайдено" << endl;
    }

    return 0;
}