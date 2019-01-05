#include <iostream>
using namespace std;
int main (){
    float d,mata_uang;

    cout<<"masukan uang dalam pecahan rupiah : ";
    cin>>d;
    cout<<"           1$ = Rp15000\n";
    mata_uang=d/15000;
    cout<<"hasil konversi ke pecahan dolar: "<<mata_uang;
    return 0;
}
