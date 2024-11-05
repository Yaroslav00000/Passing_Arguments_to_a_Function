#include <iostream>
#include <windows.h>

using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return 0;
};
int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[] = {10,20,40,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = binarySearch(arr, size, key);

    if (result != 0) {
        cout << "Елемент знайдено на індексі: " << result << endl;
    }
    else {
        cout << "Елемент не знайдено" << endl;
    }

    return 0;

}
