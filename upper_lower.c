#include <stdio.h>
int main(){
  char ch[100];

  printf("Enter the string: ");
  sacnf("%s", ch);

  for(int i=0; i< strlen(ch); i++){
    if(i < strlen(ch)/2){
      ch[i] = tolower(ch[i]);
    }

    else{
      ch[i] = toupper(ch[i]);
    }
  }

  printf("%s", ch);
  return 0;
}
