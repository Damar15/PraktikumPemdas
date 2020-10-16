#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main () {
    string nama, kelas, hari,nim;
    cout << "Masukkan Nama       : ";
    getline(cin, nama);
    cout << "Masukkan NIM        : ";
    cin >> nim;
    cout << "Masukkan Kelas      : ";
    cin >> kelas;
    cout << "Hari ini            : ";
    cin >> hari;
    if (hari == "Senin" || hari == "senin") {
        cout << "Pada hari " << hari << ",\nMahasiswa bernama " << nama << ",\nNIM " << nim << ",\ndi Kelas " << kelas << ",\nsedang belajar Matematika Komputasi.";
    } else if (hari == "Selasa" || hari == "selasa") {
        cout << "Pada hari" << hari << ",\nMahasiswa bernama " << nama << ",\nNIM " << nim << ",\ndi Kelas " << kelas << ",\n sedang belajar Pemrograman Dasar.";
    } else if (hari == "Rabu" || hari == "rabu") {
        cout << "Pada hari" << hari << ",\nMahasiswa bernama " << nama << ",\nNIM " << nim << ",\ndi Kelas " << kelas << ",\nsedang belajar Pengantar Keilmuan Komputer.";
    } else if (hari == "Kamis" || hari == "kamis") {
        cout << "Pada hari" << hari << ",\nMahasiswa bernama " << nama << ",\nNIM " << nim << ",\ndi Kelas " << kelas << ",\nsedang belajar Fisika Elektronika.";
    } else if (hari == "Jumat" || hari == "jumat" || hari == "Jum'at" || hari == "jum'at") {
        cout << "Pada hari" << hari << ",\nMahasiswa bernama " << nama << ",\nNIM " << nim << ",\ndi Kelas " << kelas << ",\nsedang belajar Sistem Digital.";
    } else {
        cout << "Pada hari" << hari << ",\nMahasiswa bernama " << nama << ",\nNIM " << nim << ",\ndi Rumah " << kelas << ",\nsedang maraton anime.";
    }
    return 0;
}
