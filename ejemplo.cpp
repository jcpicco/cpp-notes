#include <iostream>
#include "pareja.h"

using namespace std;

int main(){
    Pareja p(10,11);
    int variable = 20;
    int * puntero = NULL;

    puntero = &variable;

    *puntero = 50;

    cout << &variable << *puntero << variable;
}