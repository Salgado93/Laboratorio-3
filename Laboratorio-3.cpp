#include <iostream>
using std:: cout;
using std:: endl;
using std:: cin;

void imprimirMatriz(char[][4],int,int);

int main (int argc, char* argv[]){
	const int FILAS = 4;
	const int COLUMNAS = 4;
	char tablero[FILAS][COLUMNAS] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j','k','l','m','n','o','p' };
	imprimirMatriz(tablero,FILAS,COLUMNAS);							 	
	return 0;
}

void imprimirMatriz(char matriz[][4],int filas,int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
}
