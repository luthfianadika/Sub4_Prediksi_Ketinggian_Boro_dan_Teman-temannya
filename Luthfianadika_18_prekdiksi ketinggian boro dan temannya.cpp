#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int t;
    int s;
    double v;
    double sinA;

	cout << "Masukkan Nilai Waktu Adalah: ";
    cin >> t;
    cout << "Masukkan Nilai sudut peluncuran adalah: ";
    cin >> s;
    cout << "Masukkan Nilai Kecepatan adalah: ";
    cin >> v;
    sinA = sin((double) (s * 22) / 7 / 180);
    t = (int) (pow(v, 2) * pow(sinA, 2) / 20);
    cout << t << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

