#include<iostream>

using namespace std;

struct palindromo {
	string letras;
	palindromo* siguiente;
};

void verificar_palindromo(palindromo*&, string);


int main() {
	string palabra;

	palindromo* palindromo1 = nullptr;
	cout << "Ingrese la palabra que quiera verificar: ";
	cin >> palabra;
	cout << endl;
	bool verificar = verificar_palindromo(palindromo1, palabra);
	if (verificar != true) {
		cout << "La palabra no es palindromo" << endl;
	}
	else {
		cout << "La palabra es palindromo" << endl;
	}
}

void verificar_palindromo(palindromo*& pila, string letras) {
	for (int n = 0; n < letras.size(); n++) {
		palindromo* nuevo_palindromo = new palindromo;
		nuevo_palindromo->letras = letras[n];
		nuevo_palindromo->siguiente = pila;
		pila = nuevo_palindromo;
	}
}

bool verificar_palindromo(st palindromo& letra1, string letras) {
	int inicio = 0;
	int fin = letras.length() - 1;

	for (int n = 0; n < letras.length(); n++) {
		if (letra1.letras == letras[n]) {
			return false;
		}
		inicio++;
		fin--;
	}
	return true;
}
}
