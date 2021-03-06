//
// Created by mateu on 29.04.2020.
//

#ifndef MAIN_PPMIMAGE_H
#define MAIN_PPMIMAGE_H


class PPM_to_PGM {
public:
    struct Kolor{unsigned char red, green, blue; };
    struct Grey_scale{unsigned char grey;};

    PPM_to_PGM(const char nazwa_pliku[]); //wczytuje obraz z pliku
    ~PPM_to_PGM();
    void zapisz(const char nazwa_pliku[]); //zapisuje obraz w pliku
    void konwertuj();
private:
    PPM_to_PGM(PPM_to_PGM const &) {} //nie wywołuj tej funkcj
    void operator= (PPM_to_PGM const&) {} //nie wywołuj tej funkcji

    int _szerokosc; //liczba kolumn w obrazku
    int _wysokosc; //liczba wierszy w obrazku
    int _glebia; //glebia koloru
    Kolor **_tab; // adres dwuwymiarowej tabloicy kolorow
    Grey_scale **p;
};


#endif //MAIN_PPMIMAGE_H
