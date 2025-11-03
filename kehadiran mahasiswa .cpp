#include <iostream>
#include <iomanip>
using namespace std;

int totalHadir = 0; // ← tambahkan titik koma

void resetTotal() {
    totalHadir = 0;
}

void addHadir(int hadir) {
    totalHadir += hadir;
}

void report(int jumlahMahasiswa, int totalPertemuan) {
    int totalPossible = jumlahMahasiswa * totalPertemuan;
    double persen = 0.0;

    if (totalPossible > 0)
        persen = (double)totalHadir / totalPossible * 100.0;

    cout << "Total kehadiran kelas : " << totalHadir
         << " dari " << totalPossible << endl;

    cout << fixed << setprecision(2);
    cout << "Persentase kehadiran  : " << persen << "%" << endl;
}

int main() {
    int jumlahMahasiswa, totalPertemuan;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlahMahasiswa;

    cout << "Masukkan total pertemuan  : ";
    cin >> totalPertemuan;

    resetTotal();

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        int hadir;
        cout << "Kehadiran mahasiswa ke-" << i << " : ";
        cin >> hadir; // input jumlah hadir tiap mahasiswa
        addHadir(hadir);
    }

    report(jumlahMahasiswa, totalPertemuan);
    return 0;
}
