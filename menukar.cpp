#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Sebelum ditukar: a = " << a << ", b = " << b << "\n";

    swapByValue(a, b);
    cout << "Setelah tukarByValue : a = " << a << ", b = " << b << "\n";

    swapByReference(a, b);
    cout << "Setelah tukarByReference : a = " << a << ", b = " << b << "\n";

    return 0;
}
