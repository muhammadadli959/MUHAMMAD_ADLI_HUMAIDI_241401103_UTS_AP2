#include <iostream>
#include <string>
using namespace std;

int main() {
    string judulbuku;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, judulbuku);

    int count = 0;
    int i = 0;


    while (i < input.length()) {

        while (i < input.length() && input[i] == ' ') {
            i++;
        }

        if (i < input.length() && input[i] != ' ') {
            count++;

            while (i < input.length() && input[i] != ' ') {
                i++;
            }
        }
    }

    cout << "Jumlah judul buku: " << count << endl;
    return 0;
}