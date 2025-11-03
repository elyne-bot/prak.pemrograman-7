#include <iostream>
#include <iomanip>
using namespace std;

// Fungsi non-void untuk menghitung rata-rata
double hitungRataRata(int nilai[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }
    return total / n;
}

// Fungsi void untuk menampilkan status kelulusan
void tampilStatus(double rata) {
    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << rata << endl;
    if (rata >= 70)
        cout << "Status    : LULUS" << endl;
    else
        cout << "Status    : TIDAK LULUS" << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    int nilai[n];
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    double rata = hitungRataRata(nilai, n);
    tampilStatus(rata);

    return 0;
}
