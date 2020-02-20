#include <iostream>

using namespace std;

void duzUcgen(int degerrr) {

	for (int i = 1; i <= degerrr; i++) {
		cout << endl;
		for (int j = 1; j <= degerrr - i; j = j++) {
			cout << " ";
		}
		for (int k = 1; k <= i + i - 1; k = k++) {
			cout << "*";

		}

	}
}

void tersUcgen(int degerr, int boslukk, int yildizz) {
	for (int k = 0; k < degerr; k++) {
		for (int s = 0; s < boslukk; s++) {
			cout << " ";
		}
		for (int s = 0; s < yildizz; s++) {
			cout << "*";
		}
		cout << endl;
		boslukk++;
		yildizz -= 2;
	}

}

void elmass(int deger, int bosluk, int yildiz) {
	for (int k = 0; k < deger; k++) {
		for (int s = 0; s < bosluk; s++) {
			cout << " ";
		}
		for (int s = 0; s < yildiz; s++) {
			cout << "*";
		}
		cout << endl;
		bosluk--;
		yildiz += 2;
	}

	yildiz -= 2;


	for (int k = 0; k < deger; k++) {
		for (int s = 0; s < bosluk; s++) {
			cout << " ";
		}
		for (int s = 0; s < yildiz; s++) {
			cout << "*";
		}
		cout << endl;
		bosluk++;
		yildiz -= 2;
	}
}


int main() {

	int secenekler;
	cout << "Seceneklerden istediginizi secin" << endl;
	cout << "1 duz ucgen" << endl;
	cout << "2 ters ucgen" << endl;
	cout << "3 elmas sekli" << endl;
	cin >> secenekler;

	if (secenekler == 1) {
		int n;
		cout << "Bir deger girin" << endl;
		cin >> n;

		if ((n <= 15) && (n >= 3) && (n % 2 != 0)) {

			duzUcgen(n);
		}

		else

			cout << "Tekrar sayi giriniz 3 ile 15 arasinda tek sayi olmali";

	}


	else if (secenekler == 2) {
		int rakam;
		cout << "kaclik bir ters ucgen olsun" << endl;
		cin >> rakam;

		tersUcgen(rakam, rakam - 6, rakam + 5);

	}


	else if (secenekler == 3) {
		int elmas;
		cout << "kaclik elmas sekli cikarmak istiyorsunuz." << endl;
		cin >> elmas;

		if ((elmas <= 15) && (elmas >= 3) && (elmas % 2 != 0)) {

			elmass(elmas, elmas + 6, elmas - 5);
		}
		else
			cout << "Tekrar sayi giriniz 3 ile 15 arasinda tek sayi olmali";

	}

	return 0;
}
