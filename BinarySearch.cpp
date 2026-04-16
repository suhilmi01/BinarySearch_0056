#include <iostream>
using namespace std;

//deklarasi variabel global
int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "masukkan banyaknya element pada array (maksimal 10): ";
        cin >> nPanjang;


        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] jumlah element tidak boleh lebih dari 10. silahkan coba lagi.\n";
        }
    }

    cout << "\n=============================\n";
    cout << "      masukkan elemen array    \n";
    cout << "===============================\n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}
void bubblesortArray()
    