#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double toFahrenheit(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

double toKelvin(double c) {
    return c + 273.15;
}

int main() {
    int N;
    cout << "Masukkan jumlah data suhu: ";
    if (!(cin >> N) || N <= 0) return 0;

    vector<double> temps;
    temps.reserve(N);
    for (int i = 0; i < N; ++i) {
        double t;
        cout << "Masukkan suhu ke-" << i+1 << " (Celcius): ";
        cin >> t;
        temps.push_back(t);
    }

    cout << fixed << setprecision(2);
    cout << setw(8) << "Celsius" << setw(12) << "Fahrenheit" << setw(10) << "Kelvin" << "\n";
    for (int i=0; i < temps.size(); i++) {
    	double c = temps[i];
	
        cout << setw(8) << c
             << setw(12) << toFahrenheit(c)
             << setw(10) << toKelvin(c) << "\n";
    }
    return 0;
}
