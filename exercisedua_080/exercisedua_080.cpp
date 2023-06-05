#include <iostream>
#include <vector>

using namespace std;


class penerbit;
class pengarang {
public:
    string nama;
    vector<penerbit*> daftar_Penerbit;
    pengarang(string pNama) :nama(pNama) {
        cout << "Pengarang \"" << nama;
    }
    ~pengarang() {
        cout << "Pengarang \"" << nama;
    }
    void tambahPenerbit(penerbit*);
    void cetakPenerbit();
};

class penerbit {
public:
    string nama;
    vector<penerbit*> daftar_penerbit;

    penerbit(string pNama) :nama(pNama) {
        cout << "Penerbit \"" << nama;
    }
    ~penerbit() {
        cout << "Penerbit \"" << nama;
    }
    
    void tambahPengarang(pengarang*);
    void cetakPengarang();
};

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
    daftar_Penerbit.push_back(pPenerbit);
}

void pengarang::cetakPenerbit() {
    cout << "Daftar pengarang pada penerbit buku1 \"" << this->nama << "\":\n";
    for (auto& a : daftar_Penerbit) {
        cout << a->nama << "\n";
    }
    cout << endl;
}

class buku {
public:
    string nama;
    
};
int main()
{
    penerbit* varPenerbit1 = new penerbit("Gramedia");
    penerbit* varPenerbit2 = new penerbit("TokoBuku");
    pengarang
}


