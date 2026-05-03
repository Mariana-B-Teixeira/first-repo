# Conta Bancária em C++

Este projeto implementa uma classe `Conta` em C++ que simula operações básicas de uma conta bancária, como saque, depósito e transferência entre contas.

## Funcionalidades

- Criar conta com número, saldo inicial, limite e nome do titular.
- Saque (`saca`): permite retirar valores da conta, respeitando o saldo e o limite.
- Depósito (`deposita`): adiciona valores ao saldo, desde que sejam positivos.
- Transferência (`transfere`): realiza transferência de valores entre duas contas, verificando se há saldo suficiente.

## Estrutura do Código

- Classe `Conta`:
  - Atributos: `numero`, `saldo`, `limite`, `nome`.
  - Métodos:
    - `saca(double valor)`
    - `deposita(double valor)`
    - `transfere(Conta &destino, double valor)`

- Função `main`:
  - Cria duas contas (`Fa23` e `Fa24`).
  - Tenta realizar uma transferência de valores entre elas.
  - Exibe mensagem informando se a operação foi realizada com sucesso.

## Exemplo de Uso

```cpp
Conta Fa23(123, 0, 500, "João");
Conta Fa24(236, 1000, 100, "Paula");

if (Fa24.transfere(Fa23, 1090)) {
    cout << "Transferencia realizada \n";
} else {
    cout << "Transferencia nao realizada \n";
}