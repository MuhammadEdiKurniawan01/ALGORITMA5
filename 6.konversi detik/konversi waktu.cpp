#include <iostream>
using namespace std;
int main (){
    float d,waktu;

    cout<<"masukan waktu dalam satuan detik : ";
    cin>>d;

    waktu=d/86400;
    cout<<"hasil konversi ke satuan hari :"<<waktu;
    cout<<"\n";
    waktu=d/3600;
    cout<<"hasil konversi ke satuan jam :"<<waktu;
    cout<<"\n";
    waktu=d/60;
    cout<<"hasil konversi ke satuan menit :"<<waktu;
    cout<<"\n";
    waktu=d/1;
    cout<<"hasil konversi ke satuan detik :"<<waktu;
    return 0;
}
