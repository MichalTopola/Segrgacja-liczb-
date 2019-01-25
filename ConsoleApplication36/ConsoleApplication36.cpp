// ConsoleApplication36.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
using namespace std;

void sortuj(int* begin, int* end) {
	int bufor;

	for (int y = 10; y > 0; y--) {
		for (int x = 0; x < y; x++) {
			if (*(begin+ x) < *(end + y)) {
				bufor = *(end + y);
				*(end + y) = *(begin + x);
				*(begin + x) = bufor;
			}
		}
	}
}
void wypisz(int * begin, int size)
{
	while (size > 0)
	{
		std::cout << *begin << ' ';
		++begin;
		--size;
	}
}

	int main()
	{
		int tabl[10] = { 0, 9, 1, 3, 8, 2, 6, 7, 5, 4 };
		
		int tab[5] = { 2,8,4,6,3 };
		int *xWsk;
		xWsk = tab;
		int *yWsk;
		yWsk = tab;
		int bufor;

		for (int y = 4; y > 0; y--) {
			for (int x = 0; x < y; x++) {
				if (*(xWsk + x) < *(yWsk + y)) {
					bufor = *(yWsk + y);
					*(yWsk + y) = *(xWsk + x);
					*(xWsk + x) = bufor;
				}
			}
		}

		for (int k = 0; k < 5; k++)
			cout << "Zawartosc twojej tablicy to: " << tab[k] << endl;
		return 0;
	}





// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
