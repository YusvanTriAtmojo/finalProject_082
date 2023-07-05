#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {} 
	virtual float Luas(int a) { return 0; } 
	virtual float Keliling(int a) { return 0; } 
	virtual void cekUkuran() {} 
	void setX(int a) { 
		this->x = a; 
	} 
	int getX() {
		return x;
	}
	void setY(int a) {
		this->y = a;
	}
	int getY() {
		return y;
	}
};

class Lingkaran : public bidangDatar {
	int r;
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
	void cekUkuran() {
		if ((2 * 3.14 * r) > 40) {
			cout << "Ukuran lingkaran adalah besar" << endl;
		}
		else if (10 <= (2 * 3.14 * r) < 20) {
			cout << "Ukuran lingkaran adalah sedang" << endl;
		}
		else {
			cout << "Ukuran lingkaran adalah kecil" << endl;
		}
		cout << endl;
	}
};

class Persegipanjang : public bidangDatar {
	int p, l;
	void input() {
		cout << "Persegipanjang dibuat" << endl;
		cout << "Masukkan panjang : ";
		cin >> p;
		setX(p);
		cout << "Masukkan lebar : ";
		cin >> l;
		setY(l);
	}
	float Luas(int p, int l) {
		return p * l;
	}
	float Keliling(int p, int l) {
		return 2 * (p + l);
	}
	void cekUkuran(int p, int l) {
	
	}
};

int main() {
	bidangDatar* bidang;
	Lingkaran L;
	bidang = &L;

	bidang->input();
	int r = bidang->getX();
	cout << "Luas Lingkaran = " << bidang->Luas(r) << endl;
	cout << "Keliling Lingkaran = " << bidang->Keliling(r) << endl;
	bidang->cekUkuran();
	if ((bidang->Keliling(r)) > 40) {
		cout << "Ukuran lingkaran adalah besar" << endl;
	}
	else if ((bidang->Keliling(r)) < 20) {
		cout << "Ukuran lingkaran adalah sedang" << endl;
	}
	else {
		cout << "Ukuran lingkaran adalah kecil" << endl;
	}
	cout << endl;
}

	Persegipanjang P;
	bidang = &P;
	bidang->input();
	int p = bidang->getX();
	int l = bidang->getY();
	cout << "Luas Persegipanjang = " << bidang->Luas(p) << bidang->Luas(l) << endl;
	cout << "Keliling Persegipanjang = " << bidang->Keliling(p) << bidang->Keliling(l) << endl;
	bidang->cekUkuran();
}