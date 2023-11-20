#include <iostream>

using namespace std;

// Deklarasi fungsi untuk menghasilkan deret Fibonacci
void generateFibonacci(int n);

int main() {
    int a;
    cout << "Jumlah deret Fibonacci yang dimasukkan: ";
    cin >> a;

    // Panggil fungsi generateFibonacci dengan parameter a
    generateFibonacci(a);

    return 0;
}

// Definisi fungsi untuk menghasilkan deret Fibonacci
void generateFibonacci(int n) {
    int a1 = 0, a2 = 1, angka_selanjutnya = 0;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a1 << " ";
            continue;
        }
        if (i == 2) {
            cout << a2 << " ";
            continue;
        }
        angka_selanjutnya = a1 + a2;
        a1 = a2;
        a2 = angka_selanjutnya;

        cout << angka_selanjutnya << " ";
    }

    cout << endl;
}
