//Author: Brendan Corso bvc5434@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int digit_sum(n){
  if (n == 0){
    return 0;
  }
  else{
    return (n % 10) + digit_sum(n / 10);
  }
}

int main(void) {
  char *number = readline("Enter an int: ");
  int num = atoi(number);
  int sum = digit_sum(num);
  printf("sum of digits of %s is %d.\n",number,sum);
  return 0;
}