#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    float nilai1 = 0, nilai2 = 0, nilai3 = 0;
    string matkul1 = "Algoritma dan Pemrograman";
    string matkul2 = "Probabilitas dan Statistika";
    string matkul3 = "Sistem Operasi";

    cout << "Nama Mahasiswa: ";
        getline(cin, nama);
    cout << "NIM: ";
        cin >> nim;

    cout << "Nilai matakuliah: " << endl;

    cout << "   Nilai " << matkul1 << ": ";
    cin >> nilai1;
    if (nilai1 > 100) {
        cout << "   Jangan ngawur." << endl;
        nilai1 = 0; 
    }

    cout << "   Nilai " << matkul2 << ": ";
    cin >> nilai2;
    if (nilai2 > 100) {
        cout << "   Jangan ngawur." << endl;
        nilai2 = 0; 
    }

    cout << "   Nilai " << matkul3 << ": ";
    cin >> nilai3;
    if (nilai3 > 100) {
        cout << "   Jangan ngawur." << endl;
        nilai3 = 0; 
    }

cout << endl;

    if (nilai1 >= 60 && nilai1 <= 100) {
        cout << matkul1 << ": Lulus." << endl;
    } else if (nilai1 >= 0) {
        cout << matkul1 << ": Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (nilai2 >= 60 && nilai2 <= 100) {
        cout << matkul2 << ": Lulus." << endl;
    } else if (nilai2 >= 0) {
        cout << matkul2 << ": Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (nilai3 >= 60 && nilai3 <= 100) {
        cout << matkul3 << ": Lulus." << endl;
    } else if (nilai3 >= 0) {
        cout << matkul3 << ": Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    int jumlahMatkul = 0;
    if (nilai1 > 0) jumlahMatkul++;
    if (nilai2 > 0) jumlahMatkul++;
    if (nilai3 > 0) jumlahMatkul++;

    float rataRata = jumlahMatkul > 0 ? (nilai1 + nilai2 + nilai3) / jumlahMatkul : 0;
    cout << endl;
    cout << "Nilai rata-rata Semester ini: " << rataRata << endl;

    return 0;
}