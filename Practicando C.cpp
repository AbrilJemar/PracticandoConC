#include<iostream>
using namespace std;

// a) Finalizada una votacion se desean contar los votos obtenidos por cada uno de 10 candidatos existentes. 
// Por cada uno de los N sobres con que se cuenta, se ingresa el numero de candidato elegido (1 a 10).
// Informar los votos obtenidos por cada candidato y el ganador de la eleccion (es unico).
// b) Resuelva luego la variante de este ej. en la cual no se conoce la cantidad de sobres sino que se termina el ingreso con candidato igual a 0.

void imprimirporpantalla(int &i, int candidatos[], int ganador) {
	cout << "RESULTADOS VOTACI�N:" << endl;
	for (i=0;i<=9;i++) {
		cout << "Candidato N �" << i+1 << ":    " << 	candidatos[i-1] << " votos. " << endl;
	}
	cout << "" << endl;
	cout << "EL GANADOR es el candidato N �" << ganador << endl;
}

int main() {
	int c;
	int candi;
	int candidatos[10];
	int ganador;
	int i;
	int n;
	int votosganador;
	votosganador = 0;
	for (c=0;c<=9;c++) {
		candidatos[c-1] = 0;
	}
	cout << " ¿Que cantidad de sobre se va a ingresar?" << endl;
	cin >> n;
	for (i=0;i<=n-1;i++) {
		cout << " ¿A que cantidato se le suma el voto? (Del 1 al 10)" << endl;
		cin >> candi;
		candi = candi-1;
		candidatos[candi-1] = candidatos[candi-1]+1;
		if ((candidatos[candi-1]>votosganador)) {
			votosganador = candidatos[candi-1];
			ganador = candi+1;
		}
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	}
	imprimirporpantalla(i,candidatos,ganador);
	return 0;
}

