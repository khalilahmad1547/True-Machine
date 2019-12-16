#include <iostream>
#include "Enigma.h"
#include "Enigma.cc"
using namespace std;

Enigma *Enigma::instance = 0;

int main(int argc, char ** argv)
{

    Enigma *E = E->getInstance();
    E->FileHandling(argv[1], argv[2], argc);
    E->Cipher();
    return 0;
}
