#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input() {

	}
	virtual float Luas(int a) {
		return 0;
	}
	virtual float Keliling(int a) {
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};

class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		int r;
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};

class Bujursangkar :public bidangDatar {
public:
	void input() {
		cout << "\nBujursangkar dibuat" << endl;
		cout << "Masukkan sisi : ";
		int s;
		cin >> s;
		setX(s);
	}
	float Luas(int s) {
		return s * s;
	}
	float Keliling(int s) {
		return 4 * s;
	}
};

int main() {
	bidangDatar* objek;
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	objek = &lingkaran;
	objek->input();
	cout << "Luas Lingkaran = " << lingkaran.Luas(lingkaran.getX()) << endl;
	cout << "Keliling Lingkaran = " << lingkaran.Keliling(lingkaran.getX()) << endl;

	objek = &bujursangkar;
	objek->input();
	cout << "Luas Bujursangkar = " << bujursangkar.Luas(bujursangkar.getX()) << endl;
	cout << "Keliling Bujursangkar = " << bujursangkar.Keliling(bujursangkar.getX()) << endl;

	return 0;
}