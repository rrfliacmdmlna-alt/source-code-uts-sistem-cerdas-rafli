#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    if (nilai >= 75) {
        cout << "Status: LULUS (1)" << endl;
    } else {
        cout << "Status: TIDAK LULUS (0)" << endl;
    }

    return 0;
}