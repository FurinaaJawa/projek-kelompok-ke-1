#include <iostream>
using namespace std;

int main() {
    string nama, tempat, jk, alamat, kel, kec, agama, status, pekerjaan, kewarganegaraan;
    long long int nik;
    int ttl, rt, rw, berlaku;
    char pil;

    do {
        cout << "masukkan nik : ";
        cin >> nik;
        cin.ignore(); // Membersihkan newline

        cout << "masukkan nama : ";
        getline(cin, nama);

        cout << "masukkan tempat lahir : ";
        getline(cin, tempat);

        cout << "masukkan tanggal lahir (format: dd-mm-yy : ";
        cin >> ttl;
        cin.ignore();
		
        cout << "masukkan jenis kelamin : ";
        getline(cin, jk);

        cout << "masukkan alamat : ";
        getline(cin, alamat);

        cout << "masukkan rt : ";
        cin >> rt;
        cout << "masukkan rw : ";
        cin >> rw;
        cin.ignore();

        cout << "masukkan kelurahan : ";
        getline(cin, kel);

        cout << "masukkan kecamatan : ";
        getline(cin, kec);

        cout << "masukkan agama : ";
        getline(cin, agama);

        cout << "masukkan status nikah : ";
        getline(cin, status);

        cout << "masukkan pekerjaan : ";
        getline(cin, pekerjaan);

        cout << "masukkan kewarganegaraan : ";
        getline(cin, kewarganegaraan);

        cout << "masukkan masa berlaku : ";
        cin >> berlaku;
        cin.ignore();

        system("cls");

        cout << "----------------ktp-------------------" << endl;
        cout << " nik : " << nik << endl;
        cout << " nama : " << nama << endl;
        cout << " tempat/tgl lahir : " << tempat << ", " << ttl << endl;
        cout << " jenis kelamin : " << jk << endl;
        cout << " alamat : " << alamat << endl;
        cout << " rt/rw : " << rt << "/" << rw << endl;
        cout << " kel/desa : " << kel << endl;
        cout << " kecamatan : " << kec << endl;
        cout << " agama : " << agama << endl;
        cout << " status pernikahan : " << status << endl;
        cout << " pekerjaan : " << pekerjaan << endl;
        cout << " kewarganegaraan : " << kewarganegaraan << endl;
        cout << " masa berlaku : " << berlaku << endl;
        cout << "--------------------------------------" << endl;
        cout << "mau memasukkan data lagi? (y/n): ";
        cin >> pil;
        cin.ignore();
    } while (pil == 'y' || pil == 'Y');

    return 0;
}

