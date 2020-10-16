#include <iostream>
#include <time.h>
using namespace std;

int main () {
    int Ltotal,hasil;
    int admin = 2500;
    time_t my_time = time(NULL);
    cout << "Nama       : Dani Mahardika" << endl;
    cout << "NIM        : 205150301111012" << endl;
    cout << "Kelas      : B" << endl;
    cout << "============================" <<endl;
    cout << "Biaya Listrik Total    : ";
    cin >> Ltotal;
    int voucher = Ltotal * 0.2;
    if (voucher > 10000) {
        voucher = 10000;
    } else {
        voucher = voucher;
    }
    cout << "Total Tagihan Listrik  : " << Ltotal << endl;
    cout << "Voucher Promo          : " << voucher  << endl;
    cout << "Biaya Admin            : " << admin << endl;
    hasil = Ltotal - voucher + admin;
    cout << "Total Terbayarkan      : " << hasil << endl;
    cout << "Terbayar Lunas pada Tanggal " << ("%s", ctime(&my_time));
    return 0;
}
