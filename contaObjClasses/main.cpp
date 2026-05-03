#include <iostream>

using namespace std;

class Conta
{
    public:
    int numero;
    double saldo;
    double limite;
    string nome;

Conta(int num, double sa, double lim, string no)
{
    numero = num;
    saldo = sa;
    limite =lim;
    nome = no;
}

    bool saca(double valor)
    {
        if ((saldo + limite) < valor)
        {
            return false;
        }
        else if ((saldo + limite) >= valor)
        {
            saldo = saldo - valor;
            return true;
        }
    }
    double deposita(double valor)
    {
        if (valor <= 0)
        {
            return 0;
        }
        else if (valor >= 0)
        {
            saldo = saldo + valor;
            return 1;
        }
    }
    bool transfere (Conta &var, double valor)
    {
        bool retirou = saca(valor);
        if (retirou == false)
        {
            return false;
        }
        else {
            var.deposita (valor);
            return true;
        }
    }
    };

int main()
{
    double saldo, limite;
    string nome;
    int numero;

    Conta Fa23(numero, saldo, limite, nome);
    Conta Fa24(236, 1000, 100, "Paula");
    if (Fa24.transfere(Fa23, 1090) == true)
    {
        cout << "Transferencia realizada \n";
    }
    else{
        cout << "Transferencia nao realizada \n";
    }
    return 0;
}
