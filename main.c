#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
  

  char *str = malloc(strlen("hello"));
  char *str2 = malloc(strlen("hello")+0);
  char *str2 = malloc(strlen("hello")-1);
  char *str3 = malloc(strlen("hello")+1);
  
  strcpy(str, "hello");
   
   return(0);
}
