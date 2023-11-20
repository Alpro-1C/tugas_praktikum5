#include <iostream>
using namespace std;

// Function berfungsi untuk menghitung faktor bilangan ganjil

void bilanganGanjil (int limit, int & sumGanjil) {
    cout << "Bilangan Ganjil: ";
    for (int a = 0; a <= limit; a++) {
        if (a % 2 != 0) {
            cout << a << " ";
            sumGanjil += a;
        }
    }
    cout << endl;
}

// Function untuk menghitung faktor bilangan genap

void bilanganGenap (int limit, int & sumGenap) {
    cout << "Bilangan Genap: ";
    for (int a = 0; a <= limit; a += 2) {
        cout << a << " ";
        sumGenap += a;
    }
    cout << endl;
}

// Function ngitung dan menampilkan jumlah bilangan prima sampe limit tertentu.

void bilanganPrima (int limit, int & sumPrima) {
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= limit; i++) {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++) {
        }

        if (j * j > i) {
            cout << i << " ";
            sumPrima += i;
        }
    }
    cout << endl;
}

// Function untuk menampilkan faktor bilangan ganjil

void faktorbilanganGanjil (int sumGanjil) {
    cout << "Faktor-faktor penjumlahan bilangan ganjil: ";
    for (int i = 1; i <= sumGanjil; i++) {
        if (sumGanjil % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function untuk menampilkan faktor bilangan genap

void faktorbilanganGenap (int sumGenap) {
    cout << "Faktor-faktor penjumlahan bilangan genap: ";
    for (int i = 1; i <= sumGenap; i++) {
        if (sumGenap % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function untuk menampilkan faktor bilangan prima

void faktorbilanganPrima (int sumPrima) {
    cout << "Faktor-faktor penjumlahan bilangan prima: ";
    for (int i = 1; i <= sumPrima; i++) {
        if (sumPrima % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Output

int main() {
    int limit;
    int sumGanjil = 0, sumGenap = 0, sumPrima = 0;

    cout << "[ Program Bilangan Ganjil, Genap, dan Prima ]" << endl;
    cout << "Masukkan limit akhir: ";
    cin >> limit;

    // Memanggil function untuk menghasilkan faktor bilangan

    bilanganGanjil(limit, sumGanjil);
    bilanganGenap(limit, sumGenap);
    bilanganPrima(limit, sumPrima);

    cout << "Jumlah bilangan ganjil: " << sumGanjil << endl;
    cout << "Jumlah bilangan genap: " << sumGenap << endl;
    cout << "Jumlah bilangan Prima: " << sumPrima << endl;

    // Memanggil function untuk menghasilkan faktor bilangan

    faktorbilanganGanjil(sumGanjil);
    faktorbilanganGenap(sumGenap);
    faktorbilanganPrima(sumPrima);

    return 0;
}
