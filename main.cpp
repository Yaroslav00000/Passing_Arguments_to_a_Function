#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1; 
    while (binary > 0) {
        int lastDigit = binary % 10;
        binary = binary / 10;
        decimal += lastDigit * base;
        base = base * 2;
    }

    return decimal;
}
int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int binary;
    cout << "Введіть двійкове число: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "Десяткове подання: " << decimal << endl;

    return 0;
}