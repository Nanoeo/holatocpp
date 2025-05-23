#include <iostream>
using namespace std;
 int main() {

     /* Variabel Angka*/
     const int Aku=13 ;
     const int Kamu=14 ;
     const int Kita=21 ;
     const int Saya=70 ;

     /* Varibel Desimal*/
     const double Veron=2.99 ;
     const double Ananda=3.88 ;
     const double Syaputra=0.999000 ;

     /* Varibel Huruf*/
     const char myLetter='D' ;

     /* Varibel Kata*/
     const string Tiga="Halo" ;
     const string Dua="Nama" ;
     const string Satu ="Human" ;

     /* Operasi aritmatika*/
     cout << "\t" <<Aku+Kamu+Kita+Saya ;
     cout << "=30" << endl;
     cout << "Apakah benar?" << endl;

     /* Operasi Desimal*/
     cout << Veron+Ananda*Syaputra << endl;

     /* Operasi Char*/
     cout << myLetter << endl;

     /* Operasi String*/
     cout << Tiga+Dua+Satu << endl ;

     return 0;
 }
