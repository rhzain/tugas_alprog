/*
Nama program    : task_2.cpp
Nama            : Muhammad Raihan Rizky Zain
NPM             : 140810230049
Tanggal buat    : 18-24 September 2023
Deskripsi       : Waktu dalam format 12-jam AM/PM, ubah ke dalam format 24 jam
*/

#include <iostream>
using namespace std;

int main(){
    int jj, mm, dd;
    string fm;
    char titikDua;
    bool timeInputFormat = true;
    do
    {
        cout << "Input waktu dalam format 12-jam AM/PM (jj:mm:dd AM/PM)\n> ";
        cin >> jj >> titikDua >> mm >> titikDua >> dd >> fm;

         if (jj > 12 || dd >= 60 || mm >= 60){
            cout << "Invalid Input\n";
            timeInputFormat = false;
         } else {
            timeInputFormat = true;
            break;
         }
    } while (timeInputFormat == false);
    // membuat loop dengan conditional untuk mengulang penginputan jika input yang diberikan invalid.

    if (timeInputFormat = true)
    {
        if (fm == "AM" && jj == 12) //saat AM, format sama hingga jam 12 menjadi jam 00.
        {
            jj = 0;
        }

        if (fm == "PM" && jj != 12)
        {
            jj += 12; //saat PM, format ditambah 12 hingga jam 12 tetap jam 12.
        }
    }
    //membuat formatting dari data waktu yang diinput ke format waktu 24-jam

    cout << "Waktu dalam format 24-jam: " << jj << ":" << mm << ":" << dd;
    
}