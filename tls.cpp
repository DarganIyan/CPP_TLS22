//Program untuk menghitung harga jual mobil 
#include <iostream>

using namespace std;

int main()
{
	double hargabeli, hargajual_thn1, hargajual_thn2, hargajual_thn3;
	cout << " Harga Beli Mobil = ";
	cin >> hargabeli;
	
	hargajual_thn1 = hargabeli * 0.85;
	
	hargajual_thn2 = hargajual_thn1 * 0.9;
	
	hargajual_thn3 = hargajual_thn2 * 0.92;
	
	cout << " Harga Jual Tahun Ke-1 =  " << hargajual_thn1 << endl;
	
	cout << " Harga Jual Tahun Ke-2 =  " << hargajual_thn2 << endl;
	
	cout << " Harga Jual Tahun Ke-3 =  " << hargajual_thn3 << endl;
	
	return 0;
	
}
