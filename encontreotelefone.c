#include <stdio.h>

int main(void) {

  char numero[30] = "";
  char numeroReal[30] = "";
  int i;

  while(scanf("%s", numero) != EOF){
    for (i = 0; i <= 29; i++){
      if (numero[i] == '0' || numero[i] == '1' || numero[i] == '-'){
      numeroReal[i] = numero[i];
      } else if (numero[i] == 'A' || numero[i] == 'B' || numero[i] == 'C'){
      numeroReal[i] = '2';
      } else if(numero[i] == 'D' || numero[i] == 'E' || numero[i] == 'F'){
      numeroReal[i] = '3';
      } else if(numero[i] == 'G' || numero[i] == 'H' || numero[i] == 'I'){
      numeroReal[i] = '4';
      } else if(numero[i] == 'J' || numero[i] == 'K' || numero[i] == 'L'){
      numeroReal[i] = '5';
      } else if(numero[i] == 'M' || numero[i] == 'N' || numero[i] == 'O'){
      numeroReal[i] = '6';
      } else if(numero[i] == 'P' || numero[i] == 'Q' || numero[i] == 'R' || numero[i] == 'S'){
      numeroReal[i] = '7';
      } else if(numero[i] == 'T' || numero[i] == 'U' || numero[i] == 'V'){
      numeroReal[i] = '8';
      } else if(numero[i] == 'W' || numero[i] == 'X' || numero[i] == 'Y' || numero[i] == 'Z'){
        numeroReal[i] = '9';
      } else {
        numeroReal[i] = '\0';
      }
    }
    printf("%s\n", numeroReal);
  }
  return 0;
}
