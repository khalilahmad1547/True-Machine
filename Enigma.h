#ifndef ENIGMA_H_INCLUDED
#define ENIGMA_H_INCLUDED

using namespace std;
class Enigma
{
private:
    static Enigma *instance;
    char ch, *ptr, *q  ,*RR2, *RR1, *RR3, *RF ;
	int i = 0,  R1, R2, R3, plug, Ref, Rot1, Rot2, Rot3, g, t;
	Enigma();
public:
    static Enigma *getInstance()
    {
      if (!instance)
      instance = new Enigma;
      return instance;
    }


    void FileHandling(char *a, char *b, int c);
    void Cipher();
    ~Enigma();
};

#endif // ENIGMA_H_INCLUDED
