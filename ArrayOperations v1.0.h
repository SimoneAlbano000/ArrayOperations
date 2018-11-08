// ArrayOperations.h

using namespace std;

int LunghezzaArrayMaggiore(int a[], int b[]) {
	int A = 0;
	int B = 0;
	while (a[A]) {
	A++;
	}
	while (b[B]) {
	B++;
	}
	if (A > B) {
		return A;
	} else {
		return B;
	}
}

int LunghezzaArray(int a[]) {
	int A = 0;
	while (a[A]) {
		A++;
	}
	return A;
}

int Conversione(int a[]) {
	int i = 0;
	for (i=0; i<LunghezzaArray(a); i++) {
		int A = a[i] % 10;
		int B = (a[i] - A)/10;
		int C = a[i+1];
		a[i+1] = C + B;
		a[i] = A;
	}
	return 0;
}

int Somma(int a[], int b[], int s[]) {
	int i = 0;
	for (i=0; i<LunghezzaArrayMaggiore(a, b); i++) {
		s[i] = a[i] + b[i];
	}
	Conversione(s);
	return 0;
}


int Differenza(int a[], int b[], int d[]) {
	int i = 0;
	for (i=0; i<LunghezzaArrayMaggiore(a, b); i++) {
		if (b[i]>a[i]) {
			d[i] = a[i] + 10 - b[i];
			if (a[i+1]<1) {
				int k = i+1;
				while (1) {
					if (a[k]<1) {
						a[k] = 9;
						k++;
					} else {
						a[k] = a[k]-1;
						break;
					}
				}
			} else {
				a[i+1]--;
			}
		} else {
			d[i] = a[i] - b[i];
		}
	}
	return 0;
}
