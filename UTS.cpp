#include <iostream>
using namespace std;

int main() {
    string nama;
    int golongan, jamkerja, upah, lembur, gaji;
    cout << "Masukkan nama karyawan: ";
    cin >> nama;
    cout << "Masukkan golongan kerja (1, 2, atau 3): ";
    cin >> golongan;
    cout << "Masukkan jam kerja per minggu: ";
    cin >> jamkerja;
    // Validasi input
    if (golongan < 1 || golongan > 3) {
        cout << "Golongan kerja tidak valid" << endl;
        return 0;
    }
    if (jamkerja < 0) {
        cout << "Jam kerja tidak valid" << endl;
        return 0;
    }
    // Hitung upah per jam berdasarkan golongan
    switch (golongan) {
    case 1:
        upah = 25000;
        break;
    case 2:
        upah = 35000;
        break;
    case 3:
        upah = 50000;
        break;
    }
    // Hitung uang lembur jika jam kerja lebih dari 48 jam
    if (jamkerja > 48) {
        lembur = (jamkerja - 48) * 10000;
    }
    else {
        lembur = 0;
    }
    // Hitung gaji per minggu
    gaji = (upah * jamkerja) + lembur;
    // Cetak gaji karyawan
    cout << "Nama karyawan: " << nama << endl;
    cout << "Golongan kerja: " << golongan << endl;
    cout << "Jam kerja per minggu: " << jamkerja << endl;
    cout << "Gaji per minggu: Rp " << gaji << endl;
    return 0;
}