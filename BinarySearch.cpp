#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
    }

    cout << "\n=======================================\n";
    cout << "          Masukkan Elemen Array          \n";
    cout << "\n=======================================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }

}

void display()
{
    cout << "\n=====================================\n";
    cout << "  Element Array Setelah Diurutkan (Asc)\n";
    cout << "\n=====================================\n";

    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
}

void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n=====================================\n";
        cout << "       Pencarian Binary Search           ";
        cout << "\n=====================================\n";

        cout << "Masukkan elemen yang dicari: ";
        cin >> x;

    }
}