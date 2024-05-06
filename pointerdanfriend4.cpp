#include <iostream>
using namespace std;

class mahasiswa
{
    private:
        string nama;
    public:
        friend void setNama(Mahasiswa &a, string);
};