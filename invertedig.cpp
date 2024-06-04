#include <iostream>

int invertido(int val1, int val2);
// recebe dois inteiros e avalia se o primeiro
// é igual ao inverso do segundo.

void printRes(bool flag);
// printa o resultado

void getVals(int *a, int *b);
// recebe o endereço das variaveis com os valores do usuario.

int main(){
  int a = 1;
  int b = 2;
  bool flag;

  // main loop
  while (1){
    getVals(&a, &b);
    flag = invertido(a, b);

    printRes(flag);
    if (!flag){ break; }
  }
  
  return 0;
}

int invertido(int val1, int val2){
  int reversed_val2 = 0;

  while (val2>0){
    reversed_val2 = reversed_val2*10 + val2 % 10;
    val2 = val2/10;
  }
  return (val1 == reversed_val2);
}

void printRes(bool flag){
  if (!flag){
    std::cout << "1st value is NOT the inverse of the 2nd\n";
  } else {
    std::cout << "1st value is the inverse of the 2nd\n";
  }
}

void getVals(int *a, int *b){
  std::cout << "1st number: ";
  std::cin >> *a;
  std::cout << "2nd number: ";
  std::cin >> *b;
}
