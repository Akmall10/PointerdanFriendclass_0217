#include <iostream>
using namespace std;

class mahasiswa
{
public:
     int nim;
     void showNim()
     {
        cout << "No Induk = : " << nim << endl;
     }

};

 int main()
 {
    mahasiswa mhs; //Object mhs
    mhs.nim = 2024;
    mhs.showNim(); //Number acces operator

    mahasiswa &refMhs = mhs; // Pointer Reference refMhs
    refMhs.nim = 2; //Number acces operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer reference pMhs
    pMhs->nim = 3;         //Arrow Operator
    pMhs->showNim();
    return 0;

 }