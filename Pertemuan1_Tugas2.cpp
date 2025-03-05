#include <iostream>
using namespace std;

int main() {
    int array[5];
    int *alamat = array;

    cout << "Masukkan 5 angka:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i+1 << ": ";
        cin >> array[i];
    }

    cout << "\nAlamat dan Nilai dari Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Alamat elemen ke-" << i+1 << " : " << (alamat + i)
             << " \Nilai : " << *(alamat + i) << endl;
    }

    return 0;
}
