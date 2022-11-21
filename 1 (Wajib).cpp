/*soal 1 pt.XYZ (Soal wajib sesuai bagian)
Dzikri Maulana, 1D, 2210631170117*/
#include <iostream>
using namespace std;

int gajipokok = 7500, jampokok;

int pokok (int, int = gajipokok);
int lembur (int, int = (gajipokok * 1.5));
int makan (int);
int transport (int);

int main ()
{
int jam;
string NIP, nama;
cout << "Masukkan NIP              : ";
cin >> NIP;
cout << "Masukkan nama             : ";
cin >> nama;
cout << "Masukkan jumlah jam kerja : ";
cin >> jam;
cout << endl;

if (jam > 8)
    {
jampokok = 8;
}
  else
    {
      jampokok = jam;
    }

cout <<
    "======================= GAJI HARIAN KARYAWAN =======================" <<
    endl << endl;
cout << "NIP        = " << NIP << endl;
cout << "Nama       = " << nama << endl;
cout << "Gaji pokok = Rp." << pokok (jampokok) << endl;
cout << "Lembur     = Rp." << lembur (jam) << endl;
cout << "Uang makan = Rp." << makan (jam) << endl;
cout << "Transport  = Rp." << transport (jam) << endl;
return 0;
}


int pokok (int x, int y)
{
return x * y;
}

int lembur (int x, int y)
{
int jamlembur;
jamlembur = x - jampokok;
return jamlembur * y;
}

int makan (int x)
{
if (x >= 9)
    {
      return 10000;
    }
  else
    {
      return 0;
    }

}


int transport (int x)
{

if (x >= 10)
    {
      return 13000;
    }
  else
    {
      return 0;
    }

}
