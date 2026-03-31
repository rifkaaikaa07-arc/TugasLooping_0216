#include <iostream>
using namespace std;

// variabel global
int angka;
int pilihan;

// cek bilangan prima
bool cekPrima() {
    if (angka < 2) return false;
    int i = 2;
    while (i * i <= angka) {
        if (angka % i == 0) return false;
        i++;
    }
    return true;
}

// cek bilangan fibonacci
bool cekFibonacci() {
    int a = 0, b = 1;
    while (b < angka) {
        int temp = b;
        b = a + b;
        a = temp;
    }

}