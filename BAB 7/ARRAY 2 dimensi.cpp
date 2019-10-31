#include <iostream>
using namespace std;

int main()
{
    typedef int Matriks [3] [2];
    Matriks A, B, C;
    int J, K;

    //Nilai pada elemen A
    cout << "Matriks A : " << endl;
    for (J=0; J<3; J++)
    {
        for (K=0; K<2; K++)
    {
        cout << "A [" << J << "] [" << K << "] = "; // menampilkan hasil input matriks
            cin >> A [J] [K]; // inputan dari matriks A
    }
    }
    cout << endl;

    // Nilai pada elemen B
    cout << "Matriks B : " << endl;
    for (J=0; J<3; J++)
    {
        for (K=0; K<3; K++)
        {
         cout << "B [" << J << "] [" << K << "] = ";
            cin >> B [J] [K];
        }
    }
    cout << endl;

    cout << endl;

    //proses penjumlahan A dan B
    for (J=0; K<3; J++)
    {
        for (K=0; K<2; K++)
        {
           C [J] [K] = A[J] [K] + B[J] [K];
        }
    }

    //Menampilkan hasil penjumlahan
    cout << "Hasil penjumlahan Matriks :" << endl;
    for (J=0; J<3; J++)
    {
        for (K=0; K<2; K++)
        {
            cout << " C [" << J << "] [" << K << "] = " << C [J] [K] << endl;
        }
    }
    cout << endl;

    return 0;
}
