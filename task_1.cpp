/*
Nama program    : task_1.cpp
Nama            : Muhammad Raihan Rizky Zain
NPM             : 140810230049
Tanggal buat    : 18 September 2023
Deskripsi       : Program untuk penilaian dengan syarat (100>= A >80; >70 = B, >65 = C, >50 = D, sisanya = E)
*/

#include <iostream>
using namespace std;

int main() {
    double nilai;
    cout << "Input Nilai\n> ";
    cin >> nilai;
    cout << "Nilai huruf: ";
    
      if (nilai > 80 && nilai <= 100) 
    {
        cout << "A";
        return 0;
    }

    if (nilai >70)
    {
        cout << "B";
        return 0;
    }

    if (nilai >65)
    {
        cout << "C";
        return 0;
    }

    if (nilai >50)
    {
        cout << "D";
        return 0;
    } else {
        cout << "E";
        return 0;
    }
    /*conditional dilakukan dengan memberi bats-batas nilai hingga bisa mengahsilkan 
    output sesuai dari kondisi yang terpenuhi atau tidak terpenuhi*/
}