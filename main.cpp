#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class Akun{
    private:
        int sandi_masuk(){
            return 4;
        }
    public:
        int conf_sandi(){
            return sandi_masuk();
        }

    const char* user(){
        return (char*) "Hello there User1";
    }
};

    void header(){
        cout<<"==============================================="<<endl;
        cout<<"    Selamat Datang di Toko Online Kelompok 11  "<<endl;
        cout<<"            Toko yang Menjual Laptop           "<<endl;
        cout<<"==============================================="<<endl;
        cout<<"\n";
    }


    void printMenu(){
        cout<<"##########################################################################"<<endl;
        cout<<"|KODE| |   MERK LAPTOP   | |   CORE I3   | |   CORE I5   | |   CORE I7   |"<<endl;
        cout<<"|AS  | |      ASUS       | |  4.000.000  | |  8.000.000  | |  11.000.000 |"<<endl;
        cout<<"|LE  | |      LENOVO     | |  3.900.000  | |  7.900.000  | |  10.999.000 |"<<endl;
        cout<<"|AR  | |      ACER       | |  3.899.000  | |  7.899.000  | |  10.899.000 |"<<endl;
        cout<<"##########################################################################"<<endl;
        cout<<"\n"<<endl;
    }

int main(int argc, char const *argv[])
{
    string option,merk,procs,kode;
    int harga,total,banyake,inputanPass;
    Akun sandi_masuk;

    header();

    cout<<"Untuk Menjaga Keamanan Situs,Mohon isi pertanyaan berikut: ";
    cout<<"Berapakah 2x2?";
    cin>>inputanPass;

    while(inputanPass==sandi_masuk.conf_sandi()){
        cout<<"Berikut Ini Daftar Laptop yang Tersedia"<<endl;
        printMenu();

        cout<<"Pilih Merk Laptop Dengan Memasukkan Kode Laptop: ";
        cin>>kode;
        cout<<"\n";
        cout<<" Spesifikasi processornya apa?"<<endl;
        cout<<" 1.Core I3"<<endl;
        cout<<" 2.Core I5"<<endl;
        cout<<" 3.Core I7"<<endl;
        cin>>procs;
        cout<<"\n";
        cout<<" Berapa banyak laptop yang ingin anda beli? ";
        cin>>banyake;
        cout<<"\n";

        if(kode=="AS" || kode=="As" || kode=="as"){
            merk="ASUS";
            if(procs=="1"){
                procs = "Core I3";
                harga = 4000000;
        }
            else if(procs=="2"){
                procs = "Core I5";
                harga = 8000000;
        }
            else if(procs=="3"){
                procs = "Core I7";
                harga = 11000000;
        }
    }
    else if (kode=="LE" || kode=="Le" || kode=="le"){
                merk="LENOVO";
                if(procs=="1"){
                    procs = "Core I3";
                    harga = 3900000;
                }
                else if(procs=="2"){
                    procs = "Core I5";
                    harga = 7900000;
                }
                else if(procs=="3"){
                    procs = "Core I7";
                    harga = 10999000;
                }
    }
    else if(kode=="AR" || kode=="Ar" || kode=="ar"){
                merk="ACER";
                if(procs=="1"){
                    procs=="Core I3";
                    harga=3899000;
                }
                else if(procs=="2"){
                    procs=="Core I5";
                    harga=7899000;
                }
                else if(procs=="3"){
                    procs=="Core I7";
                    harga=10899000;
                }
    }

    total = banyake*harga;
    cout<<"Berikut Adalah Nota Pembelian Anda"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Merk Laptop yang Dibeli: "<<merk<<endl;
    cout<<"Spek Processornya: "<<procs<<endl;
    cout<<"Banyaknya Laptop yg Dibeli: "<<banyake<<endl;
    cout<<"Harga Per satu Laptop: "<<harga<<endl;
    cout<<"Total Harga yang anda harus bayarkan adalah Rp"<<total<<endl;
    cout<<"\n";
        
    return 0;
    }
    return 0;
}
