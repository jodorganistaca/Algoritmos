#include <bits/stdc++.h>

using namespace std;

int fibo(int n){
  if(n==1||n==2){
    return n;
  }
  int ant = 1, sol = 2, aux = 0;
  for(int i = 3;i<=n;i++){
    aux = ant;
    ant = sol;
    sol += aux;
  }
  return sol;
}

int main(int argc, char** argv) {
  int fiboN = fibo(1000);
  cout << fiboN;
  return 0;
}
