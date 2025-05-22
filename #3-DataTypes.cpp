#include<iostream>
using namespace std;
int main() {


    /*Nama*/
    string name ;
    cout << "Nama (nama depan):" ;
    cin >> name ;

    /*Gender*/
    char gender ;
    cout << "Gender dengan menggunakan variable L dan P (L=Laki-Laki dan P=Perempuan):" ;
    cin >> gender ;

    /*Usia*/
    int usia ;
    cout << "Usia anda:" ;
    cin >> usia ;

    /*Berat badan*/
    int berat ;
    cout << "berat badan anda (dalam satuan kilogram):" ;
    cin >> berat ;

    /*IPK*/
    double IPK ;
    cout << "Masukkan IPK semester terakhir (contoh 3.1 / 3.25):" ;
    cin >> IPK ;

    /*Status mahasiswa*/
    string status ;
    cout << "Status anda dalam institusi akademik (masih aktif=true , tidak aktif=false): " ;
    cin >> status ;
    bool Aktif=status == "true" ;
    bool Tidak=status == "false" ;

    /*Jumlah lomba*/
    unsigned int lomba ;
    cout << "Jumlah lomba yang pernah diikuti selama berada di institusi akademik:" ;
    cin >> lomba ;

    /*Golongan darah*/
    string darah ;
    cout << "Golongan darah Anda:" ;
    cin >> darah ;

    /*SECTION HASIL*/

    cout << "=========================\n" ;
    cout << "      DATA PENDAFTAR     \n" ;
    cout << "=========================\n" ;

    cout << "Nama                   : " << name << endl ;
    cout << "Gender                 : " << gender << endl ;
    cout << "Usia                   : " << usia << " tahun" << endl;
    cout << "Berat badan            : " << berat << " KG" << endl ;
    cout << "IPK                    : " << IPK << endl ;
    cout << "Status kemahasiswaan   : " << status << endl ;
    cout << "Jumlah lomba           : " << lomba << " Lomba" << endl ;
    cout << "Golongan darah         : " << darah << endl ;

    cout << "=========================\n" ;

    return 0;
}