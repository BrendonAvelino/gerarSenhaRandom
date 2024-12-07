#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {

	srand(time(0)); // define a semente para gerar números aleatórios diferentes sempre

	const string letrasMinusculas = "abcdefghijklmnopqrstuvwxyz";
	const string letrasMaiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const string numeros = "0123456789";
	const string simbolos = "!@#$%^&*()-_=+[]{}<>?";

	int comprimento;
	cout << "Digite o comprimento da senha: ";
	cin >> comprimento;

	string senha = ""; // inicializa a senha como uma string vazia;
	string caracteresDisponiveis = letrasMinusculas + letrasMaiusculas + numeros + simbolos;

	for (int i = 0; i < comprimento; i++) {
		int indiceAleatorio = rand() % caracteresDisponiveis.length();
		senha += caracteresDisponiveis[indiceAleatorio];
	}

	cout << "Senha gerada: " << senha << endl;
	return 0;	
};

