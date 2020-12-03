#include <stdio.h>
#include <stdlib.h>

int main () {
  char *temp = "hello";

  char *str = malloc(strlen(temp));
  char *str2 = malloc(strlen(temp)+0);
  char *str2 = malloc(strlen(temp)-1);
  char *str3 = malloc(strlen(temp)+1);
  
  strcpy(str, "hello");
   
   return(0);
}
