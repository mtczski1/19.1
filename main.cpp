#include <iostream>
#include "Napis.h"

using namespace std;

int main()
{
Napis n1;
n1.wstaw('A');
n1.wstaw('l');
n1.wstaw('a');
n1.wypisz();
Napis n2(n1);
n2.wstaw('r');
n2.wstaw('m');
n1.wypisz();
n2.wypisz();
    return 0;
}
