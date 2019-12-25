#include <iostream>
#include <conio.h>

using namespace std;

void CetakJudul(char, string, char);

int main()
{
	string J, K, L; char GarisMin = '-';
	J = "CONTOH PENGGUNAAN POINTER";
	K = "CONTOH PENGGUNAAN REFERENCE";
	L = "(Tekan 'Enter' Untuk Melihat Contoh Berikutnya (Reference))..";
	
	//Fokus Mulai Dari Sini..
	/* CONTOH 1: POINTER */
	CetakJudul(GarisMin, J, GarisMin);
	int A;

	//pointer
	int* A_Ptr = nullptr;
	
	//Masukkan
	cout << "Masukkan Nilai/Angka                 : "; cin >> A;
	A_Ptr = &A; 

	cout << endl;

	//int A memiliki nilai dan address (alamat memori)
	cout << "Nilai dari A                         = " << A << endl;
	cout << "Alamat dari A                        = " << A_Ptr << endl;

	//deferencing
	A = 10;
	cout << "Mengambil nilai dari pointer A_Ptr   = " << A_Ptr << endl;
	cout << endl << L; _getch(); cout << endl << endl;



	/* CONTOH 2: REFERENCE */
	CetakJudul(GarisMin, K, GarisMin);
	
	//Variabel
	A = 0; 
	cout << "Masukkan Nilai/Angka   : "; cin >> A;
	
	cout << endl;
	cout << "Nilai Dari A           = " << A << endl;
	cout << "Address Dari A         = " << &A << endl << endl;

	//Reference
	int& B = A;
	cout << "Nilai Dari B           = " << B << endl;
	cout << "Address Dari B         = " << &B << endl << endl;

	//Nilai Dirubah
	B = 13;
	cout << "Nilai Dari A           = " << A << endl;
	cout << "Nilai Dari B           = " << B << endl << endl;
	
	B = 17;
	cout << "Nilai Dari A           = " << A << endl;
	cout << "Nilai Dari B           = " << B << endl;

	_getch();
	return 0;
}


//Abaikan Fungsi Ini, Hanya Peleengkap
void CetakJudul(char C, string S, char H)
{
	for (int i = 0; i <= 100; i++)
	{
		cout << C;
	}

	cout << endl << S << endl;

		for (int i = 0; i <= 100; i++)
		{
			cout << H;
		}

		cout << endl;
}

