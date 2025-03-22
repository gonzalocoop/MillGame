#include "pch.h"
#include "iostream"
#define FILAS 31
#define COLUMNAS 31
#include "conio.h"
using namespace System;
using namespace std;
void Presentacion()
{
    int x = 1, y = 1;
    Console::ForegroundColor = ConsoleColor::DarkYellow;
    Console::SetCursorPosition(x, y + 1); cout << "                                  __                      _     _    _____     _ _          ";
    Console::SetCursorPosition(x, y + 2); cout << "                               __|  |_ _ ___ ___ ___    _| |___| |  |     |___| |_|___ ___  ";
    Console::SetCursorPosition(x, y + 3); cout << "                              |  |  | | | -_| . | . |  | . | -_| |  | | | | . | | |   | . | ";
    Console::SetCursorPosition(x, y + 4); cout << "                              |_____|___|___|_  |___|  |___|___|_|  |_|_|_|___|_|_|_|_|___| ";
    Console::SetCursorPosition(x, y + 5); cout << "                                            |___|                                           ";
    cout << endl << endl;
    Console::ForegroundColor = ConsoleColor::Yellow;
    cout << "           Creditos";
    cout << endl;
    cout << "       ===================";
    cout << endl;
    cout << "        Diego Uribe Osores";
    cout << endl;
    cout << "        Gonzalo Cordova Gonzales";
    cout << endl;
    cout << "        Fiorella Ccaccya Tito";
    cout << endl << endl << endl;
    Console::ForegroundColor = ConsoleColor::White;
}
struct JUGADORES {
    int orden_jugador;
    char nombre[25];
    int codigo_color;
};
void Tablero()
{
    Console::SetWindowSize(80, 44);
    //definir matriz
    int tablero[FILAS][COLUMNAS] = {

            {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
            {3,1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,2,0,0,0,0,1,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,1,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,1,2,2,2,1,2,2,2,1,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,2,3},
            {3,1,2,2,2,2,1,2,2,2,2,1,0,0,0,0,0,0,0,1,2,2,2,2,1,2,2,2,2,1,3},
            {3,2,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,2,0,0,0,0,0,0,0,2,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,1,2,2,2,1,2,2,2,1,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,2,0,0,0,0,2,3},
            {3,2,0,0,0,0,1,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,1,0,0,0,0,2,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3},
            {3,1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,3},
            {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
    };
    //imprime la matriz
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            Console::SetCursorPosition(c + 20, f + 5);
            if (tablero[f][c] == 0) Console::ForegroundColor = ConsoleColor::DarkYellow;
            if (tablero[f][c] == 1) Console::ForegroundColor = ConsoleColor::Gray;
            if (tablero[f][c] == 2) Console::ForegroundColor = ConsoleColor::Black;
            if (tablero[f][c] == 3) Console::ForegroundColor = ConsoleColor::White;
            cout << char(219);
        }
    }
}
void Reglas()
{
    Console::SetCursorPosition(10, 2);
    cout << "REGLAS DEL JUEGO" << endl;
    cout << "         ------------------";
    Console::SetCursorPosition(3, 4);
    Console::ForegroundColor = ConsoleColor::DarkGreen;
    cout << "FAVOR RECORDAR TODO LO EXPLICADO A CONTINUACION PARA EVITAR CUALQUIER ERROR" << endl;
    Console::ForegroundColor = ConsoleColor::Green;
    cout << "Regla1: Al inicio del juego se decidira aleatoriamente quien inicia" << endl;
    cout << "Regla2: El jugador solo contara con 9 fichas" << endl;
    cout << "Regla3: Si el jugador logra un TRES EN RAYA, puede quitarle cualquier ficha al oponente" << endl;
    cout << "Regla4: Esta PROHIBIDO quitar 1 ficha de un Tres en Raya de otro jugador en el tablero" << endl;
    cout << "Regla5: La fase DESLICE iniciara cuando ambos jugadores hayan colocado todas sus fichas" << endl;
    cout << "Regla6: Solo debes mover la ficha a algun espacio directamente cercano" << endl;
    cout << "Regla7: Si el jugador cuenta con 3 fichas debe ignorar la prohibicion anterior" << endl;
    cout << "Regla8: Pierde el jugador que quede con 2 fichas" << endl;
    cout << endl;
    Console::ForegroundColor = ConsoleColor::Gray;
    cout << "                INSTRUCCIONES" << endl;
    cout << "              ------------------" << endl;
    Console::ForegroundColor = ConsoleColor::Cyan;
    cout << "FASE GOTEO:Para la colocacion de fichas el jugador debe colocar un numero del 1 al 24" << endl;
    cout << "colocados como puede ver a continuacion" << endl << endl;
    cout << "1-------------2--------------3  " << endl;
    cout << "|             |              |  " << endl;
    cout << "|      4------5-------6      |  " << endl;
    cout << "|      |      |       |      |  " << endl;
    cout << "|      |    7--8--9   |      |  " << endl;
    cout << "|      |    |     |   |      |  " << endl;
    cout << "10----11---12    13---14-----15 " << endl;
    cout << "|      |    |     |   |      |  " << endl;
    cout << "|      |   16-17-18   |      |  " << endl;
    cout << "|      |      |       |      |  " << endl;
    cout << "|     19-----20-------21     |  " << endl;
    cout << "|             |              |  " << endl;
    cout << "22-----------23-------------24  " << endl;
    cout << endl;
    Console::ForegroundColor = ConsoleColor::DarkYellow;
    cout << "FASE DESLICE: Utilizar las siguientes teclas en MAYUSCULAS:" << endl;
    cout << "A: Mover hacia la izquierda" << endl;
    cout << "S: Mover hacia abajo" << endl;
    cout << "D: Mover hacia la derecha" << endl;
    cout << "W: Mover hacia arriba" << endl;
    cout << "R: Retirar ficha" << endl;
    cout << "P: Poner ficha" << endl;
    cout << "X: Si un jugador ya no puede mover sus fichas en fase de deslice" << endl;
    cout << "No colocar tu ficha encima de otra ficha" << endl;
    cout << "Solo mover tu ficha en tu turno" << endl;
    cout << endl;
    Console::ForegroundColor = ConsoleColor::Red;
    cout << "Usar la rueda del mouse para ver lo escrito arriba" << endl;
    Console::ForegroundColor = ConsoleColor::White;
}
void Goteo(int posicion, int color, int* rayaR, int* rayaM)
{
    if (posicion == 1)
    {
        Console::SetCursorPosition(21, 6);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[0] = 1;
        if (color == 2) rayaM[0] = 1;
    }
    if (posicion == 2)
    {
        Console::SetCursorPosition(35, 6);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[1] = 1;
        if (color == 2) rayaM[1] = 1;
    }
    if (posicion == 3)
    {
        Console::SetCursorPosition(49, 6);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[2] = 1;
        if (color == 2) rayaM[2] = 1;
    }
    if (posicion == 4)
    {
        Console::SetCursorPosition(26, 11);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[3] = 1;
        if (color == 2) rayaM[3] = 1;
    }
    if (posicion == 5)
    {
        Console::SetCursorPosition(35, 11);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[4] = 1;
        if (color == 2) rayaM[4] = 1;
    }
    if (posicion == 6)
    {
        Console::SetCursorPosition(44, 11);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[5] = 1;
        if (color == 2) rayaM[5] = 1;
    }
    if (posicion == 7)
    {
        Console::SetCursorPosition(31, 16);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[6] = 1;
        if (color == 2) rayaM[6] = 1;
    }
    if (posicion == 8)
    {
        Console::SetCursorPosition(35, 16);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[7] = 1;
        if (color == 2) rayaM[7] = 1;
    }
    if (posicion == 9)
    {
        Console::SetCursorPosition(39, 16);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[8] = 1;
        if (color == 2) rayaM[8] = 1;
    }
    if (posicion == 10)
    {
        Console::SetCursorPosition(21, 20);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[9] = 1;
        if (color == 2) rayaM[9] = 1;
    }
    if (posicion == 11)
    {
        Console::SetCursorPosition(26, 20);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[10] = 1;
        if (color == 2) rayaM[10] = 1;
    }
    if (posicion == 12)
    {
        Console::SetCursorPosition(31, 20);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[11] = 1;
        if (color == 2) rayaM[11] = 1;
    }
    if (posicion == 13)
    {
        Console::SetCursorPosition(39, 20);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[12] = 1;
        if (color == 2) rayaM[12] = 1;
    }
    if (posicion == 14)
    {
        Console::SetCursorPosition(44, 20);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[13] = 1;
        if (color == 2) rayaM[13] = 1;
    }
    if (posicion == 15)
    {
        Console::SetCursorPosition(49, 20);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[14] = 1;
        if (color == 2) rayaM[14] = 1;
    }
    if (posicion == 16)
    {
        Console::SetCursorPosition(31, 24);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[15] = 1;
        if (color == 2) rayaM[15] = 1;
    }
    if (posicion == 17)
    {
        Console::SetCursorPosition(35, 24);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[16] = 1;
        if (color == 2) rayaM[16] = 1;
    }
    if (posicion == 18)
    {
        Console::SetCursorPosition(39, 24);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[17] = 1;
        if (color == 2) rayaM[17] = 1;
    }
    if (posicion == 19)
    {
        Console::SetCursorPosition(26, 29);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[18] = 1;
        if (color == 2) rayaM[18] = 1;
    }
    if (posicion == 20)
    {
        Console::SetCursorPosition(35, 29);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[19] = 1;
        if (color == 2) rayaM[19] = 1;
    }
    if (posicion == 21)
    {
        Console::SetCursorPosition(44, 29);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[20] = 1;
        if (color == 2) rayaM[20] = 1;
    }
    if (posicion == 22)
    {
        Console::SetCursorPosition(21, 34);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[21] = 1;
        if (color == 2) rayaM[21] = 1;
    }
    if (posicion == 23)
    {
        Console::SetCursorPosition(35, 34);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[22] = 1;
        if (color == 2) rayaM[22] = 1;
    }
    if (posicion == 24)
    {
        Console::SetCursorPosition(49, 34);
        if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << char(254);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaR[23] = 1;
        if (color == 2) rayaM[23] = 1;
    }
}
void Deslice(int color, int* rayaR, int* rayaM, int* rompert)
{
    int romper = 1;
    int x, y;
    Console::SetCursorPosition(21, 6);
    x = 21, y = 6;
    int verif = 0;
    while (1)
    {
        if (kbhit()) //detecta si se pulsa alguna tecla
        {
            char tecla = getch();//getch retorna la tecla pulsada

            //mover
            if (tecla == 'A' && x - 1 != 20) x--;
            if (tecla == 'D' && x + 1 != 50) x++;
            if (tecla == 'W' && y - 1 != 5) y--;
            if (tecla == 'S' && y + 1 != 35) y++;
            Console::SetCursorPosition(x, y);
            if (tecla == 'R')
            {
                if ((verif == 0) && ((x == 21 && y == 6) || (x == 35 && y == 6) || (x == 49 && y == 6) || (x == 26 && y == 11) || (x == 35 && y == 11) || (x == 44 && y == 11) || (x == 31 && y == 16) || (x == 35 && y == 16) || (x == 39 && y == 16) || (x == 21 && y == 20) || (x == 26 && y == 20) || (x == 31 && y == 20) || (x == 39 && y == 20) || (x == 44 && y == 20) || (x == 49 && y == 20) || (x == 31 && y == 24) || (x == 35 && y == 24) || (x == 39 && y == 24) || (x == 26 && y == 29) || (x == 35 && y == 29) || (x == 44 && y == 29) || (x == 21 && y == 34) || (x == 35 && y == 34) || (x == 49 && y == 34)))
                {
                    Console::ForegroundColor = ConsoleColor::Gray;
                    cout << char(219);
                    verif = 1;
                    if (color == 1)
                    {
                        if (x == 21 && y == 6)      rayaR[0] = 0;
                        if (x == 35 && y == 6)      rayaR[1] = 0;
                        if (x == 49 && y == 6)      rayaR[2] = 0;
                        if (x == 26 && y == 11)     rayaR[3] = 0;
                        if (x == 35 && y == 11)     rayaR[4] = 0;
                        if (x == 44 && y == 11)     rayaR[5] = 0;
                        if (x == 31 && y == 16)     rayaR[6] = 0;
                        if (x == 35 && y == 16)     rayaR[7] = 0;
                        if (x == 39 && y == 16)     rayaR[8] = 0;
                        if (x == 21 && y == 20)     rayaR[9] = 0;
                        if (x == 26 && y == 20)     rayaR[10] = 0;
                        if (x == 31 && y == 20)     rayaR[11] = 0;
                        if (x == 39 && y == 20)     rayaR[12] = 0;
                        if (x == 44 && y == 20)     rayaR[13] = 0;
                        if (x == 49 && y == 20)     rayaR[14] = 0;
                        if (x == 31 && y == 24)     rayaR[15] = 0;
                        if (x == 35 && y == 24)     rayaR[16] = 0;
                        if (x == 39 && y == 24)     rayaR[17] = 0;
                        if (x == 26 && y == 29)     rayaR[18] = 0;
                        if (x == 35 && y == 29)     rayaR[19] = 0;
                        if (x == 44 && y == 29)     rayaR[20] = 0;
                        if (x == 21 && y == 34)     rayaR[21] = 0;
                        if (x == 35 && y == 34)     rayaR[22] = 0;
                        if (x == 49 && y == 34)     rayaR[23] = 0;

                    }
                    if (color == 2)
                    {
                        if (x == 21 && y == 6)      rayaM[0] = 0;
                        if (x == 35 && y == 6)      rayaM[1] = 0;
                        if (x == 49 && y == 6)      rayaM[2] = 0;
                        if (x == 26 && y == 11)     rayaM[3] = 0;
                        if (x == 35 && y == 11)     rayaM[4] = 0;
                        if (x == 44 && y == 11)     rayaM[5] = 0;
                        if (x == 31 && y == 16)     rayaM[6] = 0;
                        if (x == 35 && y == 16)     rayaM[7] = 0;
                        if (x == 39 && y == 16)     rayaM[8] = 0;
                        if (x == 21 && y == 20)     rayaM[9] = 0;
                        if (x == 26 && y == 20)     rayaM[10] = 0;
                        if (x == 31 && y == 20)     rayaM[11] = 0;
                        if (x == 39 && y == 20)     rayaM[12] = 0;
                        if (x == 44 && y == 20)     rayaM[13] = 0;
                        if (x == 49 && y == 20)     rayaM[14] = 0;
                        if (x == 31 && y == 24)     rayaM[15] = 0;
                        if (x == 35 && y == 24)     rayaM[16] = 0;
                        if (x == 39 && y == 24)     rayaM[17] = 0;
                        if (x == 26 && y == 29)     rayaM[18] = 0;
                        if (x == 35 && y == 29)     rayaM[19] = 0;
                        if (x == 44 && y == 29)     rayaM[20] = 0;
                        if (x == 21 && y == 34)     rayaM[21] = 0;
                        if (x == 35 && y == 34)     rayaM[22] = 0;
                        if (x == 49 && y == 34)     rayaM[23] = 0;

                    }
                }
            }
            if (tecla == 'P')
            {
                if ((verif == 1) && ((x == 21 && y == 6) || (x == 35 && y == 6) || (x == 49 && y == 6) || (x == 26 && y == 11) || (x == 35 && y == 11) || (x == 44 && y == 11) || (x == 31 && y == 16) || (x == 35 && y == 16) || (x == 39 && y == 16) || (x == 21 && y == 20) || (x == 26 && y == 20) || (x == 31 && y == 20) || (x == 39 && y == 20) || (x == 44 && y == 20) || (x == 49 && y == 20) || (x == 31 && y == 24) || (x == 35 && y == 24) || (x == 39 && y == 24) || (x == 26 && y == 29) || (x == 35 && y == 29) || (x == 44 && y == 29) || (x == 21 && y == 34) || (x == 35 && y == 34) || (x == 49 && y == 34)))
                {
                    if (color == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
                    if (color == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
                    cout << char(254);
                    verif = 0;
                    if (color == 1)
                    {
                        if (x == 21 && y == 6)      rayaR[0] = 1;
                        if (x == 35 && y == 6)      rayaR[1] = 1;
                        if (x == 49 && y == 6)      rayaR[2] = 1;
                        if (x == 26 && y == 11)     rayaR[3] = 1;
                        if (x == 35 && y == 11)     rayaR[4] = 1;
                        if (x == 44 && y == 11)     rayaR[5] = 1;
                        if (x == 31 && y == 16)     rayaR[6] = 1;
                        if (x == 35 && y == 16)     rayaR[7] = 1;
                        if (x == 39 && y == 16)     rayaR[8] = 1;
                        if (x == 21 && y == 20)     rayaR[9] = 1;
                        if (x == 26 && y == 20)     rayaR[10] = 1;
                        if (x == 31 && y == 20)     rayaR[11] = 1;
                        if (x == 39 && y == 20)     rayaR[12] = 1;
                        if (x == 44 && y == 20)     rayaR[13] = 1;
                        if (x == 49 && y == 20)     rayaR[14] = 1;
                        if (x == 31 && y == 24)     rayaR[15] = 1;
                        if (x == 35 && y == 24)     rayaR[16] = 1;
                        if (x == 39 && y == 24)     rayaR[17] = 1;
                        if (x == 26 && y == 29)     rayaR[18] = 1;
                        if (x == 35 && y == 29)     rayaR[19] = 1;
                        if (x == 44 && y == 29)     rayaR[20] = 1;
                        if (x == 21 && y == 34)     rayaR[21] = 1;
                        if (x == 35 && y == 34)     rayaR[22] = 1;
                        if (x == 49 && y == 34)     rayaR[23] = 1;

                    }
                    if (color == 2)
                    {
                        if (x == 21 && y == 6)      rayaM[0] = 1;
                        if (x == 35 && y == 6)      rayaM[1] = 1;
                        if (x == 49 && y == 6)      rayaM[2] = 1;
                        if (x == 26 && y == 11)     rayaM[3] = 1;
                        if (x == 35 && y == 11)     rayaM[4] = 1;
                        if (x == 44 && y == 11)     rayaM[5] = 1;
                        if (x == 31 && y == 16)     rayaM[6] = 1;
                        if (x == 35 && y == 16)     rayaM[7] = 1;
                        if (x == 39 && y == 16)     rayaM[8] = 1;
                        if (x == 21 && y == 20)     rayaM[9] = 1;
                        if (x == 26 && y == 20)     rayaM[10] = 1;
                        if (x == 31 && y == 20)     rayaM[11] = 1;
                        if (x == 39 && y == 20)     rayaM[12] = 1;
                        if (x == 44 && y == 20)     rayaM[13] = 1;
                        if (x == 49 && y == 20)     rayaM[14] = 1;
                        if (x == 31 && y == 24)     rayaM[15] = 1;
                        if (x == 35 && y == 24)     rayaM[16] = 1;
                        if (x == 39 && y == 24)     rayaM[17] = 1;
                        if (x == 26 && y == 29)     rayaM[18] = 1;
                        if (x == 35 && y == 29)     rayaM[19] = 1;
                        if (x == 44 && y == 29)     rayaM[20] = 1;
                        if (x == 21 && y == 34)     rayaM[21] = 1;
                        if (x == 35 && y == 34)     rayaM[22] = 1;
                        if (x == 49 && y == 34)     rayaM[23] = 1;

                    }
                    romper = 0;
                    if (romper == 0) break;
                }
                if (romper == 0) break;

            }
            if (tecla == 'X') rompert[0] = 1;
            if (romper == 0) break;
            if (rompert[0] == 1) break;
        }
        if (romper == 0) break;
        if (rompert[0] == 1) break;
    }
}
void Borrar(int color, int* rayaR, int* rayaM)
{
    int posicion;
    Console::SetCursorPosition(1, 36);
    cout << "                                                                                                      ";
    Console::SetCursorPosition(1, 36);
    cout << "Ingrese posicion a borrar: "; cin >> posicion;
    Console::SetCursorPosition(1, 36);
    cout << "                                                                                                      ";
    if (posicion == 1)
    {
        Console::SetCursorPosition(21, 6);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[0] = 0;
        if (color == 2) rayaR[0] = 0;

    }
    if (posicion == 2)
    {
        Console::SetCursorPosition(35, 6);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[1] = 0;
        if (color == 2) rayaR[1] = 0;
    }
    if (posicion == 3)
    {
        Console::SetCursorPosition(49, 6);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[2] = 0;
        if (color == 2) rayaR[2] = 0;

    }
    if (posicion == 4)
    {
        Console::SetCursorPosition(26, 11);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[3] = 0;
        if (color == 2) rayaR[3] = 0;
    }
    if (posicion == 5)
    {
        Console::SetCursorPosition(35, 11);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[4] = 0;
        if (color == 2) rayaR[4] = 0;
    }
    if (posicion == 6)
    {
        Console::SetCursorPosition(44, 11);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[5] = 0;
        if (color == 2) rayaR[5] = 0;
    }
    if (posicion == 7)
    {
        Console::SetCursorPosition(31, 16);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[6] = 0;
        if (color == 2) rayaR[6] = 0;
    }
    if (posicion == 8)
    {
        Console::SetCursorPosition(35, 16);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[7] = 0;
        if (color == 2) rayaR[7] = 0;
    }
    if (posicion == 9)
    {
        Console::SetCursorPosition(39, 16);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[8] = 0;
        if (color == 2) rayaR[8] = 0;
    }
    if (posicion == 10)
    {
        Console::SetCursorPosition(21, 20);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[9] = 0;
        if (color == 2) rayaR[9] = 0;
    }
    if (posicion == 11)
    {
        Console::SetCursorPosition(26, 20);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[10] = 0;
        if (color == 2) rayaR[10] = 0;
    }
    if (posicion == 12)
    {
        Console::SetCursorPosition(31, 20);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[11] = 0;
        if (color == 2) rayaR[11] = 0;
    }
    if (posicion == 13)
    {
        Console::SetCursorPosition(39, 20);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[12] = 0;
        if (color == 2) rayaR[12] = 0;
    }
    if (posicion == 14)
    {
        Console::SetCursorPosition(44, 20);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[13] = 0;
        if (color == 2) rayaR[13] = 0;
    }
    if (posicion == 15)
    {
        Console::SetCursorPosition(49, 20);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[14] = 0;
        if (color == 2) rayaR[14] = 0;
    }
    if (posicion == 16)
    {
        Console::SetCursorPosition(31, 24);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[15] = 0;
        if (color == 2) rayaR[15] = 0;
    }
    if (posicion == 17)
    {
        Console::SetCursorPosition(35, 24);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[16] = 0;
        if (color == 2) rayaR[16] = 0;
    }
    if (posicion == 18)
    {
        Console::SetCursorPosition(39, 24);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[17] = 0;
        if (color == 2) rayaR[17] = 0;
    }
    if (posicion == 19)
    {
        Console::SetCursorPosition(26, 29);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[18] = 0;
        if (color == 2) rayaR[18] = 0;
    }
    if (posicion == 20)
    {
        Console::SetCursorPosition(35, 29);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[19] = 0;
        if (color == 2) rayaR[19] = 0;
    }
    if (posicion == 21)
    {
        Console::SetCursorPosition(44, 29);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[20] = 0;
        if (color == 2) rayaR[20] = 0;
    }
    if (posicion == 22)
    {
        Console::SetCursorPosition(21, 34);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[21] = 0;
        if (color == 2) rayaR[21] = 0;
    }
    if (posicion == 23)
    {
        Console::SetCursorPosition(35, 34);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[22] = 0;
        if (color == 2) rayaR[22] = 0;
    }
    if (posicion == 24)
    {
        Console::SetCursorPosition(49, 34);
        Console::ForegroundColor = ConsoleColor::Gray;
        cout << char(219);
        Console::ForegroundColor = ConsoleColor::White;
        Console::SetCursorPosition(1, 36);
        if (color == 1) rayaM[23] = 0;
        if (color == 2) rayaR[23] = 0;
    }
}

void TresEnRaya(int* rayaR, int* rayaM, int* rojo, int* magenta, int* fichasR, int* fichasM, int color)
{


    if ((rayaR[0] == 1 && rayaR[1] == 1 && rayaR[2] == 1) && rojo[0] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[0] == 1 && rayaR[1] == 1 && rayaR[2] == 1)   rojo[0] = 0;
    else rojo[0] = 1;

    if ((rayaM[0] == 1 && rayaM[1] == 1 && rayaM[2] == 1) && magenta[0] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[0] == 1 && rayaM[1] == 1 && rayaM[2] == 1)   magenta[0] = 0;
    else magenta[0] = 1;
    //
    if ((rayaR[0] == 1 && rayaR[9] == 1 && rayaR[21] == 1) && rojo[1] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[0] == 1 && rayaR[9] == 1 && rayaR[21] == 1)   rojo[1] = 0;
    else rojo[1] = 1;

    if ((rayaM[0] == 1 && rayaM[9] == 1 && rayaM[21] == 1) && magenta[1] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[0] == 1 && rayaM[9] == 1 && rayaM[21] == 1)   magenta[1] = 0;
    else magenta[1] = 1;
    //
    if ((rayaR[21] == 1 && rayaR[22] == 1 && rayaR[23] == 1) && rojo[2] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[21] == 1 && rayaR[22] == 1 && rayaR[23] == 1)   rojo[2] = 0;
    else rojo[2] = 1;

    if ((rayaM[21] == 1 && rayaM[22] == 1 && rayaM[23] == 1) && magenta[2] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[21] == 1 && rayaM[22] == 1 && rayaM[23] == 1)   magenta[2] = 0;
    else magenta[2] = 1;
    //
    if ((rayaR[23] == 1 && rayaR[14] == 1 && rayaR[2] == 1) && rojo[3] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[23] == 1 && rayaR[14] == 1 && rayaR[2] == 1)   rojo[3] = 0;
    else rojo[3] = 1;

    if ((rayaM[23] == 1 && rayaM[14] == 1 && rayaM[2] == 1) && magenta[3] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[23] == 1 && rayaM[14] == 1 && rayaM[2] == 1)   magenta[3] = 0;
    else magenta[3] = 1;
    //
    if ((rayaR[1] == 1 && rayaR[4] == 1 && rayaR[7] == 1) && rojo[4] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[1] == 1 && rayaR[4] == 1 && rayaR[7] == 1)   rojo[4] = 0;
    else rojo[4] = 1;

    if ((rayaM[1] == 1 && rayaM[4] == 1 && rayaM[7] == 1) && magenta[4] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[1] == 1 && rayaM[4] == 1 && rayaM[7] == 1)   magenta[4] = 0;
    else magenta[4] = 1;
    //
    if ((rayaR[12] == 1 && rayaR[13] == 1 && rayaR[14] == 1) && rojo[5] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[12] == 1 && rayaR[13] == 1 && rayaR[14] == 1)   rojo[5] = 0;
    else rojo[5] = 1;

    if ((rayaM[12] == 1 && rayaM[13] == 1 && rayaM[14] == 1) && magenta[5] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[12] == 1 && rayaM[13] == 1 && rayaM[14] == 1)   magenta[5] = 0;
    else magenta[5] = 1;
    //
    if ((rayaR[16] == 1 && rayaR[19] == 1 && rayaR[22] == 1) && rojo[6] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[16] == 1 && rayaR[19] == 1 && rayaR[22] == 1)   rojo[6] = 0;
    else rojo[6] = 1;

    if ((rayaM[16] == 1 && rayaM[19] == 1 && rayaM[22] == 1) && magenta[6] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[16] == 1 && rayaM[19] == 1 && rayaM[22] == 1)   magenta[6] = 0;
    else magenta[6] = 1;
    //
    if ((rayaR[9] == 1 && rayaR[10] == 1 && rayaR[11] == 1) && rojo[7] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[9] == 1 && rayaR[10] == 1 && rayaR[11] == 1)   rojo[7] = 0;
    else rojo[7] = 1;

    if ((rayaM[9] == 1 && rayaM[10] == 1 && rayaM[11] == 1) && magenta[7] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[9] == 1 && rayaM[10] == 1 && rayaM[11] == 1)   magenta[7] = 0;
    else magenta[7] = 1;
    //
    if ((rayaR[3] == 1 && rayaR[4] == 1 && rayaR[5] == 1) && rojo[8] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[3] == 1 && rayaR[4] == 1 && rayaR[5] == 1)   rojo[8] = 0;
    else rojo[8] = 1;

    if ((rayaM[3] == 1 && rayaM[4] == 1 && rayaM[5] == 1) && magenta[8] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[3] == 1 && rayaM[4] == 1 && rayaM[5] == 1)   magenta[8] = 0;
    else magenta[8] = 1;
    //
    if ((rayaR[5] == 1 && rayaR[13] == 1 && rayaR[20] == 1) && rojo[9] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[5] == 1 && rayaR[13] == 1 && rayaR[20] == 1)   rojo[9] = 0;
    else rojo[9] = 1;

    if ((rayaM[5] == 1 && rayaM[13] == 1 && rayaM[20] == 1) && magenta[9] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[5] == 1 && rayaM[13] == 1 && rayaM[20] == 1)   magenta[9] = 0;
    else magenta[9] = 1;
    //
    if ((rayaR[18] == 1 && rayaR[19] == 1 && rayaR[20] == 1) && rojo[10] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[18] == 1 && rayaR[19] == 1 && rayaR[20] == 1)   rojo[10] = 0;
    else rojo[10] = 1;

    if ((rayaM[18] == 1 && rayaM[19] == 1 && rayaM[20] == 1) && magenta[10] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[18] == 1 && rayaM[19] == 1 && rayaM[20] == 1)   magenta[10] = 0;
    else magenta[10] = 1;
    //
    if ((rayaR[3] == 1 && rayaR[10] == 1 && rayaR[18] == 1) && rojo[11] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[3] == 1 && rayaR[10] == 1 && rayaR[18] == 1)   rojo[11] = 0;
    else rojo[11] = 1;

    if ((rayaM[3] == 1 && rayaM[10] == 1 && rayaM[18] == 1) && magenta[11] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[3] == 1 && rayaM[10] == 1 && rayaM[18] == 1)   magenta[11] = 0;
    else magenta[11] = 1;
    //
    if ((rayaR[6] == 1 && rayaR[7] == 1 && rayaR[8] == 1) && rojo[12] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[6] == 1 && rayaR[7] == 1 && rayaR[8] == 1)   rojo[12] = 0;
    else rojo[12] = 1;

    if ((rayaM[6] == 1 && rayaM[7] == 1 && rayaM[8] == 1) && magenta[12] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[6] == 1 && rayaM[7] == 1 && rayaM[8] == 1)   magenta[12] = 0;
    else magenta[12] = 1;
    //
    if ((rayaR[8] == 1 && rayaR[12] == 1 && rayaR[17] == 1) && rojo[13] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[8] == 1 && rayaR[12] == 1 && rayaR[17] == 1)   rojo[13] = 0;
    else rojo[13] = 1;

    if ((rayaM[8] == 1 && rayaM[12] == 1 && rayaM[17] == 1) && magenta[13] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[8] == 1 && rayaM[12] == 1 && rayaM[17] == 1)   magenta[13] = 0;
    else magenta[13] = 1;
    //
    if ((rayaR[15] == 1 && rayaR[16] == 1 && rayaR[17] == 1) && rojo[14] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[15] == 1 && rayaR[16] == 1 && rayaR[17] == 1)   rojo[14] = 0;
    else rojo[14] = 1;

    if ((rayaM[15] == 1 && rayaM[16] == 1 && rayaM[17] == 1) && magenta[14] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[15] == 1 && rayaM[16] == 1 && rayaM[17] == 1)   magenta[14] = 0;
    else magenta[14] = 1;
    //
    if ((rayaR[6] == 1 && rayaR[11] == 1 && rayaR[15] == 1) && rojo[15] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasM[0] = fichasM[0] - 1;
    }
    if (rayaR[6] == 1 && rayaR[11] == 1 && rayaR[15] == 1)   rojo[15] = 0;
    else rojo[15] = 1;

    if ((rayaM[6] == 1 && rayaM[11] == 1 && rayaM[15] == 1) && magenta[15] == 1)
    {
        Borrar(color, rayaR, rayaM);
        fichasR[0] = fichasR[0] - 1;
    }
    if (rayaM[6] == 1 && rayaM[11] == 1 && rayaM[15] == 1)   magenta[15] = 0;
    else magenta[15] = 1;



}
int main()
{
    int* fichasR;
    int* fichasM;
    fichasR = new int;
    fichasM = new int;
    fichasR[0] = 9;
    fichasM[0] = 9;
    int* rojo;
    rojo = new int[16];
    int* magenta;
    magenta = new int[16];
    for (int i = 0; i < 16; i++)
    {
        rojo[i] = 1;
    }
    for (int i = 0; i < 16; i++)
    {
        magenta[i] = 1;
    }
    int* rayaR;
    int* rayaM;
    rayaR = new int[24];
    rayaM = new int[24];
    for (int i = 0; i < 24; i++)
    {
        rayaR[i] = 0;
    }
    for (int i = 0; i < 24; i++)
    {
        rayaM[i] = 0;
    }
    //VARIABLES 

    int x = 7, y = 2;
    srand(time(NULL));
    //INGRESE LA PRESENTACIÓN
    Presentacion();
    cout << endl;
    cout << "                                          Ingrese una tecla para continuar...";
    //CAMBIAR PANTALLA 1
    system("pause>0");
    Console::Clear();
    //INGRESE LAS REGLAS DE JUEGO
    Reglas();
    //CAMBIAR PANTALLA 2
    cout << "Ingrese una tecla para continuar...";
    system("pause>0");
    Console::Clear();
    //INGRESE LOS DATOS DE USUARIO (STRUCT)
    JUGADORES* informacion;
    //crea espacio en memoria dinamica para el puntero;
    informacion = new JUGADORES[2];
    //INFORMACION DE USUARIOS
    cout << "INFORMACION DE LOS USUARIOS A PARTICIPAR" << endl;
    cout << "========================================";
    cout << endl << endl;
    cout << "Para ingresar nombre completo colocar: Nombre_Apellido     Ejemplo: Diego_Uribe";
    cout << endl << endl;
    cout << "Color Rojo,Codigo=1  Color Magenta,Codigo=2" << endl;
    Console::ForegroundColor = ConsoleColor::Cyan;
    cout << endl;
    cout << endl;
    cout << "NOTA: El orden se asignaran aleatoriamente";
    Console::ForegroundColor = ConsoleColor::White;
    cout << endl << endl;
    informacion[0].orden_jugador = 1 + rand() % 2;
    //INGRESO DE DATOS A STRUCT
    for (int i = 0; i < 2; i++) {
        cout << "JUGADOR " << i + 1 << endl;
        cout << "Ingrese nombre completo: "; cin >> informacion[i].nombre;
        cout << "Ingrese codigo de color: "; cin >> informacion[i].codigo_color;
        cout << endl;
    }
    //MOSTRAR DATOS DE STRUCT
    cout << endl;
    cout << "NOMBRE COMPLETO\t \t CODIGO DE COLOR\t ORDEN DE JUGADOR" << endl;
    for (int i = 0; i < 2; i++) {
        cout << informacion[i].nombre << "\t";
        cout << "\t" << "\t" << informacion[i].codigo_color;
        cout << "\t" << "\t" << "\t" << informacion[i].orden_jugador;
        //asignación de color aleatoria

        if (informacion[0].orden_jugador == 1)
        {

            informacion[1].orden_jugador = 2;

        }
        else
        {

            informacion[1].orden_jugador = 1;

        }
        cout << endl;
    }
    cout << endl;

    int color1;
    int color2;
    if (informacion[0].orden_jugador == 1)
    {
        color1 = informacion[0].codigo_color;
        color2 = informacion[1].codigo_color;
    }
    if (informacion[1].orden_jugador == 1)
    {
        color1 = informacion[1].codigo_color;
        color2 = informacion[0].codigo_color;
    }
    cout << endl;
    cout << "Ingrese una tecla para continuar...";
    system("pause>0");
    Console::Clear();
    //LLAMADO FUNCION TABLERO
    Console::SetCursorPosition(2, 1);
    Console::ForegroundColor = ConsoleColor::Green;
    cout << "Usar la rueda del mouse para ver el contenido de abajo" << endl;
    cout << "RECORDAR que en la fase Deslice solo debes moverte a un espacio adyacente";
    Console::ForegroundColor = ConsoleColor::Red;
    Console::SetCursorPosition(x + 20, y + 1);
    cout << "TABLERO DE JUEGO";
    Console::ForegroundColor = ConsoleColor::White;
    cout << endl << endl;
    Tablero();
    cout << endl << endl;
    //FASE GOTEO
    int posicion;
    int posicion2;
    int conteo = 1;
    int conteo2 = 1;
    int restantes = 8;
    int restantes2 = 9;

    while (conteo + conteo2 <= 18)
    {
        Console::SetCursorPosition(1, 36);
        if (color1 == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color1 == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << "JUGADOR 1                           " << endl;
        Console::ForegroundColor = ConsoleColor::White;
        cout << "Ingrese posicion con numero: "; cin >> posicion;
        cout << "Movimientos restantes: " << restantes2 << endl;
        cout << "ADVERTENCIA: NO COLOCAR NIGUNA FICHA SOBRE OTRA YA COLOCADA EN EL TABLERO" << endl;
        cout << "RECORDAR que esta prohibido romper un Tres en Raya ya puesto en el tablero" << endl;
        cout << "Con otro Tres en Raya";
        Goteo(posicion, color1, rayaR, rayaM);
        TresEnRaya(rayaR, rayaM, rojo, magenta, fichasR, fichasM, color1);
        Console::SetCursorPosition(1, 36);
        if (color2 == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color2 == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << "JUGADOR 2                       " << endl;
        Console::ForegroundColor = ConsoleColor::White;
        cout << "Ingrese posicion con numero: "; cin >> posicion2;
        cout << "Movimientos restantes: " << restantes << endl;
        Goteo(posicion2, color2, rayaR, rayaM);
        TresEnRaya(rayaR, rayaM, rojo, magenta, fichasR, fichasM, color2);
        conteo++;
        restantes--;
        restantes2--;
        conteo2++;
    }
    //FASE DESLICE
    Console::SetCursorPosition(1, 36);
    cout << "Ingrese una tecla para continuar...";
    Console::SetCursorPosition(1, 36);
    cout << "                                                                                        " << endl;
    cout << "                                                                                        " << endl;
    cout << "                                                                                        " << endl;
    cout << "                                                                                        " << endl;
    cout << "                                                                                        " << endl;
    cout << "                                                                                        " << endl;
    cout << "                                                                                        " << endl;
    int* rompert;
    rompert = new int;
    rompert[0] = 0;
    while (1)
    {
        Console::SetCursorPosition(1, 36);

        if (color1 == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color1 == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << "JUGADOR 1                           " << endl;
        Console::ForegroundColor = ConsoleColor::White;
        Deslice(color1, rayaR, rayaM, rompert);
        if (rompert[0] == 1)
        {
            Console::SetCursorPosition(1, 40);
            cout << "Se ha ganado por obstruccion, FELICIDADES";
            break;
        }
        TresEnRaya(rayaR, rayaM, rojo, magenta, fichasR, fichasM, color1);
        if (fichasR[0] == 3 || fichasM[0] == 3)
        {
            Console::SetCursorPosition(0, 2);
            Console::ForegroundColor = ConsoleColor::Green;
            cout << "El jugador al que le queden 3 FICHAS se mueve a donde quiera                                        ";
            Console::ForegroundColor = ConsoleColor::White;
        }
        if (fichasR[0] == 2 || fichasM[0] == 2)  break;
        Console::SetCursorPosition(1, 36);
        if (color2 == 1) Console::ForegroundColor = ConsoleColor::DarkRed;
        if (color2 == 2) Console::ForegroundColor = ConsoleColor::DarkMagenta;
        cout << "JUGADOR 2                       " << endl;
        Console::ForegroundColor = ConsoleColor::White;
        Deslice(color2, rayaR, rayaM, rompert);
        if (rompert[0] == 1)
        {
            Console::SetCursorPosition(1, 40);
            cout << "Se ha ganado por obstruccion, FELICIDADES";
            break;
        }
        TresEnRaya(rayaR, rayaM, rojo, magenta, fichasR, fichasM, color2);
        if (fichasR[0] == 3 || fichasM[0] == 3)
        {
            Console::SetCursorPosition(0, 2);
            Console::ForegroundColor = ConsoleColor::Green;
            cout << "El jugador al que le queden 3 FICHAS se mueve a donde quiera";
            Console::ForegroundColor = ConsoleColor::White;
        }
        if (fichasR[0] == 2 || fichasM[0] == 2)  break;

    }
    Console::SetCursorPosition(1, 38);
    if (fichasR[0] == 2)
    {
        if (informacion[0].codigo_color == 2)
        {
            cout << "***********************************************************************" << endl;
            cout << " El ganador es el jugador: " << informacion[0].nombre << " de fichas Magenta" << endl;
            cout << "FELICIDADES" << endl;
            cout << "***********************************************************************" << endl;
        }
        if (informacion[1].codigo_color == 2)
        {
            cout << "***********************************************************************" << endl;
            cout << " El ganador es el jugador: " << informacion[1].nombre << " de fichas Magenta" << endl;
            cout << "FELICIDADES" << endl;
            cout << "***********************************************************************" << endl;
        }
    }
    if (fichasM[0] == 2)
    {

        if (informacion[0].codigo_color == 1)
        {
            cout << "***********************************************************************" << endl;
            cout << " El ganador es el jugador: " << informacion[0].nombre << " de fichas Rojas" << endl;
            cout << "FELICIDADES" << endl;
            cout << "***********************************************************************" << endl;
        }
        if (informacion[1].codigo_color == 1)
        {
            cout << "***********************************************************************" << endl;
            cout << " El ganador es el jugador: " << informacion[1].nombre << " de fichas Rojas" << endl;
            cout << "FELICIDADES" << endl;
            cout << "***********************************************************************" << endl;
        }
    }
    system("pause>0");
    return 0;
}