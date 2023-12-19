#include <iostream>
using namespace std;
class BankAccount{
public:
    int numer_konta = 231;
    double saldo =0;
    string wlasciciel = "ja";
    void wplacanie();
    void wyplacanie();
    void wyswietlanie();
};

void BankAccount::wplacanie() {
    int a;
    cin>>a;
    saldo+=a;
}

void BankAccount::wyplacanie() {
    int a;
    cin>>a;
    saldo-=a;
}


void BankAccount::wyswietlanie() {
    cout<<saldo<<endl;
}

int main() {
    int a=1;
    BankAccount ja;
    cout<<"0. wyjscie"<<endl<<"1. wplacanie"<<endl<<"2. wyplacanie"<<endl<<"3. wyswietlanie"<<endl;
    while (a!=0)
    {
        cin>>a;

        if (a==1)
        {
            ja.wplacanie();
        }
        if (a==2)
        {
            ja.wyplacanie();
        }
        if (a==3)
        {
            ja.wyswietlanie();
        }
    }
    return 0;
}

//Konto Bankowe: Zdefiniuj klasę BankAccount reprezentującą konto bankowe. Dodaj prywatne pola dla numeru konta, salda i właściciela.
// Utwórz metody do wpłacania, wypłacania i wyświetlania salda.