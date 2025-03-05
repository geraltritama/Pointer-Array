#include <iostream>
using namespace std;

int main() {
    char array[10] = {'a', 'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c', 'd'};
    int n = 10;
    int count = 1;
    int compressedLength = 0;

    for (int i = 1; i <= n; i++) {
        if (i < n && array[i] == array[i - 1]) {
            count++;
        } else {
            compressedLength++;
            if (count > 1) compressedLength++;
            count = 1;
        }
    }

    cout << compressedLength << " ";

    count = 1;
    cout << "[";
    for (int i = 1; i <= n; i++) {
        if (i < n && array[i] == array[i - 1]) {
            count++;
        } else {
            cout << "\"" << array[i - 1] << "\"";

            if (count > 1) {
                cout << ", \"" << count << "\"";
            }

            if (i < n) cout << ", ";
            count = 1;
        }
    }
    cout << "]" << endl;

    cout << "Panjang array setelah di kompresi: " << compressedLength;
    return 0;
}
