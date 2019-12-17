#include <iostream>
#include <conio.h>

using namespace std;

int Kuadrat(int X)
{
	int Y;
	Y = X * X;
	return Y;
}

int Tambah(int X, int Y)
{
	int Z;
	Z = X + Y;
	return Z;
}

int main()
{
	int InputX, InputY, Keluaran;

	cout << "Masukkan Nilai X : "; cin >> InputX;
	cout << "Masukkan Nilai Y : "; cin >> InputY;

	cout << endl;

	Keluaran = Kuadrat(InputX);
	cout << "Nilai Kuadrat Dari X adalah      = " << Keluaran << endl;

	Keluaran = Tambah(InputX, InputY);
	cout << "Penambahan Nilai X dan Y adalah  = " << Keluaran << endl;

	_getch();
	return 0;
}