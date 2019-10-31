#include <iostream>
using namespace std;

int main()
{
    int A [7];
    int J, K, C, temp;

    cout << "Masukan nilai pada elemen array : " << endl;
    for (C=0; C<7; C++)
    {
        //menginput elemen array
        cout <<"A[" << C << "] = ";
        cin >> A[C];
    }
    cout << "\nNilai element array sebelum diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    // pengurutan metode maksimum-minimun
    int jmaks, U=6;
    for (J=0; J<6; J++)
    {
        jmaks = 0;
        for (K=1; K<U; K++)
        {
            if (A[K] > A[jmaks])
            {
                jmaks = K;
            }
        }
        // penukaran Nilai Elemen Array
        temp = A[U];
        A[U] = A[jmaks];
        A[jmaks] = temp;
        U--;
    }

    cout << "\nNilai Elemen setelah diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }
    return 0;
}
