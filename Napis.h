#ifndef NAPIS_H
#define NAPIS_H


class Napis
{
    char* litery_;
    unsigned int miejsce_;
    unsigned int ile_liter_;



    public:
        Napis();
        Napis(int);
        Napis(const Napis&);
        ~Napis();

        void wypisz();
        void wstaw(const char znak);

        void set_miejsce_(int);
        void set_ile_liter(int);

        unsigned int get_miejsce_();
        unsigned int get_ile_liter();

};

#endif // NAPIS_H
