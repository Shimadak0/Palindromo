#include<iostream>

using namespace std;

struct palindromo {
	char letras;
	palindromo* siguiente;
};

bool verificar_palindromo(palindromo*&, string);
void insertar_palindromo(palindromo*&, string);
void imprimir(palindromo*&);


int main() {
	string palabra;

	palindromo* palindromo1 = nullptr;
	cout << "Ingrese la palabra que quiera verificar: ";
	cin >> palabra;
	cout << endl;
	imprimir(palindromo1);
	insertar_palindromo(palindromo1, palabra);
	bool verificar = verificar_palindromo(palindromo1, palabra);


	for (int n = 0; n < palabra.length(); n++) {

	}

	if (verificar != true) {
		cout << "La palabra no es palindromo" << endl;
	}
	else {
		cout << "La palabra es palindromo" << endl;
	}


}
void insertar_palindromo(palindromo*& letra1, string letras) {
	for (int n = 0; n < letras.length(); n++) {
		palindromo* nuevo_palindromo = new palindromo;
		nuevo_palindromo->letras = letras[n];
		nuevo_palindromo->siguiente = letra1;
		letra1 = nuevo_palindromo;
	}
}

void imprimir(palindromo*& pila) {
	while (pila != nullptr) {
		cout << pila->letras;
		palindromo* aux = pila;
		pila = pila->siguiente;
		delete aux;
	}
}

bool verificar_palindromo(palindromo*& letra1, string letras) {
	int m = 0;
	while (letra1 != nullptr) {
		char temp = letra1->letras;
		palindromo* aux = letra1;
		letra1 = letra1->siguiente;
		cout << "fuera del for " << temp << endl;
		cout << m;
		for (; m < letras.length(); m++) {
			char temp2 = letras[m];
			cout << "dentro del for " << temp2 << endl;
			if (temp != temp2) {
				return false;

			}
			else {
				break;
			}

		}
		delete aux;
		m++;


	}
	return true;

}
