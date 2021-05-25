#pragma region Setup
#include <iostream>
#include <locale.h>
using namespace std;

#pragma endregion


#pragma region Struktury
struct Vector3
{
    float x;
    float y;
    float z;
};
struct Color {
    unsigned short R;
    unsigned short G;
    unsigned short B;
};
struct Obiekt {
    Vector3 pozycja;
    Color kolor;
    Vector3 rotacja;
    string nazwa;
};
#pragma endregion

void WriteLine(string text) {
    cout << text << endl;
}

int main()
{
    setlocale(LC_CTYPE,"Polish");
    Vector3 pozycja_startowa = {175.42,0,129.5};
    Color biały = {0,0,0};
    Obiekt obj;
    WriteLine("Podaj kolor obiektu");
    WriteLine("Podaj ilość (0-255) czerwonego");
    cin >> biały.R;
    WriteLine("Podaj ilość (0-255) zielonego");
    cin >> biały.G;
    WriteLine("Podaj ilość (0-255) niebieskiego");
    cin >> biały.B;
    WriteLine("Podaj nazwe obiektu");
    cin >> obj.nazwa;
    obj.kolor = biały;
    obj.pozycja = pozycja_startowa;

    cout << "Obiekt " << obj.nazwa << " został stworzony na pozycji " << obj.pozycja.x << "," << obj.pozycja.y << "," << obj.pozycja.z << " w kolorze (RGB) " << obj.kolor.R << "," << obj.kolor.G << "," << obj.kolor.B << "\n";
    return 0;
}

