#ifndef PAREJA
#define PAREJA

using namespace std;

class Pareja {

private:
    int a, b;

public:
    // constructor base
    Pareja();

    // constructor parametrizado
    Pareja(const int a,const int b);

    // constructor de copia
    Pareja(const Pareja&);

    // operadores miembros
    Pareja& operator+(const Pareja &p);
    Pareja& operator-(const Pareja &p);
    Pareja& operator*(const Pareja &p);
    Pareja& operator/(const Pareja &p);
    Pareja& operator=(const Pareja &p);
    Pareja& operator++();
    bool    operator==(const Pareja &p) const;

    // operadores no miembros
    friend ostream& operator << (ostream &o,const Pareja &p);
    friend istream& operator >> (istream &o, Pareja &p);
};

#endif