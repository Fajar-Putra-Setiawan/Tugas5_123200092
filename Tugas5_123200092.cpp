#include <iostream>

using namespace std;

int main()
{
    int pilih, p, l, tinggi, x;

    cout << "Gambar Bangun Datar"<<endl;
    cout << "1. Kotak Bolong"<<endl;
    cout << "2. Segitiga"<<endl;
    cout << "Pilih (1/2) : ";
    cin >> pilih;

    switch (pilih) {
        case 1:
            cout << "Masukan Panjang : " ;
            cin >> p;
            cout << "Masukan Lebar   : " ;
            cin >> l;

            for (int i=0;i<l;i++){
                for (int j=0;j<p;j++){
                    if (i==0 || i==l-1 || j==0 || j==p-1){
                        cout << "*";
                    } else { cout<<" "; }
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Masukan Tinggi : ";
            cin >> tinggi;

            for (int i=1 ; i<=tinggi ; i++){
                for (int j=1 ; j<=i ; j++){
                    if(j==1){
                        cout<< i << " ";
                    } else if(j==2){
                        x = i + (tinggi-1);
                        cout << x << " ";
                    } else if (j >= 3){
                        x = x + (tinggi-j+1);
                        cout << x << " ";
                    }
                }
            cout << endl;
            }
            break;
    }

    return 0;
}
