#include <iostream>
using namespace std;
int main()
{
cout << " ===========================================\n";
cout << " Nama      : Cahya Satria Gumelar         | \n";
cout << " Nim       : A2.1900123                   | \n";
cout << " Jurusan   : Teknik Informatika           | \n";
cout << " blog      :                              | \n";
cout << " ===========================================\n";
cout << "       LATIHAN INPUT OUTPUT                 \n";
cout << " *******************************************\n\n";
char tampilkan[1];
char nama[50], alamat[50], tl[50], jk[50], pekerjaan[50], email[50], website[50];
cout << " ===========================================\n";
cout << "       DAFTAR RIWAYAT HIDUP                 \n";
cout << " ===========================================\n";
cout << " Nama          :";
cin.getline(nama,50);
cout << " Alamat        :";
cin.getline(alamat,50);
cout << " Tanggal Lahir :";
cin.getline(tl,50);
cout << " Jenis Kelamin :";
cin.getline(jk,50);
cout << " Pekerjaan     :";
cin.getline(pekerjaan,50);
cout << " Email         :";
cin.getline(email,50);
cout << " Website       :";
cin.getline(website,50);
cout << " Jurusan Teknik Informatika STMIK Sumedang ";
cin.getline(tampilkan,1);
return 0;
}
