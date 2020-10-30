#include <stdio.h>
#include <string.h>
int main(void) {
  char pwd[11];
  char e_pwd[11];
  int i = 0;
  int check,stack;
  while(1){
    printf("Enter New Password  : ");
    gets(pwd);
    while(pwd[i] != '\0'){
      i++;
    }
    if(i > 10){
      printf("Enter Password Again \n");
      i = 0;
      continue;
    }
    while(1){
      printf("Enter Your Password : ");
      gets(e_pwd);
      if(strcmp(pwd,e_pwd) == 0){
        check = 1 ;
        printf("Your Password is Correct !!\n"); 
        break;
      }
      else{
        printf("Your Password is Not Correct !!\n");
        stack += 1;
        if(stack == 3){
          check = 0;
          break;
        }
      }
    }
    if(check == 1){
      i = 0;
      stack = 0;
      continue;
    }
    else{
      printf("Close Programs \n");
      break;
    }
  }
  return 0;
}

