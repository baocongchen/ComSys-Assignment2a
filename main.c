#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getLine (char *line) {
  int size;
  scanf("%80[^EOF]s", line);
  size = strlen(line);
  return size; 
}

void changeCap(char *line, int size) {
  *line = toupper(*line);
  for (int i=size-1; i>=0; i--) {
    if (*(line+i)==' ' || *(line+i)=='\n') 
    *(line+i+1) = toupper(*(line+i+1));
  }
  printf("%s\n", line);
}

void reverseText(char *line, int size) {
  for (int i=(size-1), j=0; i>=size/2 && j<size/2; i--,j++){
    int temp = *(line+j);
    *(line+j) = *(line+i);
    *(line+i) = temp;
  }
  printf("%s\n",line);
}

int main () {
  char m[80];
  int size = 0;
  printf("Enter the text: \n");
  size = getLine(m);
  printf("\n****************\n");
  changeCap(m, size);
  printf("****************\n");
  reverseText(m,size);
  return 0;
}
