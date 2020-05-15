#include <iostream>
#include "dinstring.hpp"
#include "lista.hpp"

using namespace std;

class Proizvod
{
protected:
int cena;
DinString naziv;

public:
Proizvod(int C, DinString N)
{
cena = C;
naziv = N;
}

void izracunajPopust() = 0;
void ispisi() = 0;
};



