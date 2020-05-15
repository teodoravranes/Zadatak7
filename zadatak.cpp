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
Proizvod()
{
cena = 50;
naziv = "Nije unet";
}
  
Proizvod(int C, DinString N)
{
cena = C;
naziv = N;
}
  
Proizvod(const Proizvod &p)
{
cena = p.cena;
naziv = p.naziv;
};

virtual void izracunajPopust() = 0;
virtual void ispisi() = 0;
};

class Voce : public Proizvod
{
private:
DinString zemljaPorekla;
int rokTrajanja;

public:
Voce()
{
cena = 50;
naziv = "Nije unet";
zemljaPorekla = "Nije uneta";
rokTrajanja = 2;
}

Voce(int C, DinString N, DinString ZP, int RT)
{
cena = C;
naziv = N;
zemljaPorekla = ZP;
rokTrajanja = RT;
}

Voce(const &Voce v)
{
cena = v.cena;
naziv = v.naziv;
zemljaPorekla = v.zemljaPorekla;
rokTrajanja = v.rokTrajanja;
}

void izracunajPopust()
{
if(rokTrajanja > 5)
cena =  (67/100)*cena;
else if(rokTrajanja >= 1 1 && rokTrajanja <= 5)
cena = (34/100)*cena;
else if(rokTrajanja==0)
cena = 0;
}

void ispisi()
{
cout <<"************************************"<<endl;
cout <<"Cena: "<<cena<<endl;
cout <<"Naziv: "<<naziv<<endl;
cout <<"Zemlja porekla: "<<zemljaPorekla<<endl;
cout <<"Rok trajanja: "<<rokTrajanja<<endl;
cout <<"************************************"<<endl;
}

};


