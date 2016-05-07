#include <iostream>
using std:: cout;
using std:: endl;
using std:: cin;

char entrada(char [][4]);
void imprimirMatriz(char[][4],int,int);

int main (int argc, char* argv[]){
	const int FILAS = 4;
	const int COLUMNAS = 4;
	char tablero[FILAS][COLUMNAS] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j','k','l','m','n','o','p' };	
	imprimirMatriz(tablero,FILAS,COLUMNAS);
	while (1){
	    char a;
	    cout << "Ingrese La Letra Del Espacio: ";
	    cin >> a;
	    if (a == 'a')
		tablero[0][0] = entrada(tablero);
	    else if (a == 'b')
		tablero[0][1] = entrada(tablero);
	    else if (a == 'c')
		tablero[0][2] = entrada(tablero);
	    else if (a == 'd')
		tablero[0][3] = entrada(tablero);
	    else if (a == 'e')
		tablero[1][0] = entrada(tablero);
	    else if (a == 'f')
		tablero[1][2] = entrada(tablero);
	    else if (a == 'g')
		tablero[1][3] = entrada(tablero);
	    else if (a == 'h')
		tablero[2][0] = entrada(tablero);
	    else if (a == 'i')
		tablero[2][1] = entrada(tablero);
	    else if (a == 'j')
		tablero[2][2] = entrada(tablero);
	    else if (a == 'k')
		tablero[2][3] = entrada(tablero);
	    else if (a == 'l')
		tablero[3][0] = entrada(tablero);
	    else if (a == 'm')
		tablero[3][1] = entrada(tablero);
	    else if (a == 'n')
		tablero[3][2] = entrada(tablero);
	    else if (a == 'o')
		tablero[3][3] = entrada(tablero);
	    
            imprimirMatriz(tablero,FILAS,COLUMNAS);
	}							 	
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

char entrada(char matrix[][4]){
	int p=0;
        char jugador;
        char pieza1 = '0';
        char pieza2 = '#';
        char pieza3 = 'H';
        char pieza4 = 'L';
        char pieza5 = 'W';
        char pieza6 = 'B';
        char pieza7 = 'o';
        char pieza8 = '*';
        cout << "Eliga una Pieza: " << endl;
        cout << "1. Redonda: " <<  pieza1 << endl;
        cout << "2. Cuadrada: " <<  pieza2 << endl;
        cout << "3. High: " <<  pieza3 << endl;
        cout << "4. Low: " <<  pieza4 << endl;
        cout << "5. White: " <<  pieza5 << endl;
        cout << "6. Black: " <<  pieza6 << endl;
        cout << "7. Hueco: " <<  pieza7 << endl;
        cout << "8. Solido: " <<  pieza8 << endl;
        cin >> p;
        if (p == 1){
                 jugador = pieza1;
        }
        if (p == 2){
                jugador = pieza2;
        }
        if (p == 3){
                jugador = pieza3;
        }
        if (p == 4){
                jugador = pieza4;
        }
        if (p == 5){
                jugador = pieza5;
        }
        if (p == 6){
                jugador = pieza6;
        }
        if (p == 7){
                jugador = pieza7;
        }
        if (p == 8){
                jugador = pieza8;
        }        	
    	return jugador;
}

