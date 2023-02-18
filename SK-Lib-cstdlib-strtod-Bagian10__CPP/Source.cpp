#pragma warning(disable:4996)

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    // menginisialisasi nilai eksponensial
    char numberString[] = "-44.01e-3End String";
    char* end;
    double number;

    number = strtod(numberString, &end);
    cout << "Number in String = " << numberString << endl;
    cout << "Number in Double = " << number << endl;
    cout << "End String = " << end << endl << endl;

    // menginisialisasi nilai heksadesimal baru
    strcpy(numberString, "0xf1bc.51hello");

    number = strtod(numberString, &end);
    cout << "Number in String = " << numberString << endl;
    cout << "Number in Double = " << number << endl;
    cout << "End String = " << end << endl;

    _getch();
    return 0;
}