/*soal 2 fungsi overloading (Soal optional (tidak wajib))
Dzikri Maulana, 1D, 2210631170117*/
#include <iostream>
using namespace std;

float j;

float suhu (int);
float suhu (float);
double suhu (double);

int main ()
{
cout << "Masukkan suhu dalam Fahrenheit      : ";
double a;
cin >> a;
float b=a;
int c=b;
cout<<endl;
cout << "Hasil dari konfersi suhu "<<a<<" derajat fahrenheit dengan parameter double adalah : " << suhu (a)<<" derajat celcius"<<endl;
cout << "Hasil dari konfersi suhu "<<b<<" derajat fahrenheit dengan parameter float adalah : " << suhu (b)<<" derajat celcius"<<endl;
cout << "Hasil dari konfersi suhu "<<c<<" derajat fahrenheit dengan parameter integer adalah : " << suhu (c)<<" derajat celcius"<<endl;
return 0;
}
float suhu (int x)
{
j = ((x - 32.0) * 5/9);
return j;
}

float suhu (float x)
{
j = ((x - 32.0) * 5/9);
return j;
}

double suhu (double x)
{
j = ((x - 32.0) * (5.0 / 9.0));
return j;
}
