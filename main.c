#include <stdio.h>

int main()
{
  char line[150];
  
  FILE * pf;
  pf = fopen("file.txt", "r");
  
  fgets(line, 150, pf);
  printf("String in the file: %s", line);
  
  for(int i = 0, j; line[i] != '\0'; i++)
  {
    if(!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && line[i] != '\0')
    {
      for(j = i; line[j] != '\0'; ++j)
      {
        line[j] = line[j + 1];
      }
      line[j] = '\0';
    }
  }
  printf("\nOutput string: ");
  puts(line);
  gets(line);
  
  return 0;
}
/* Try to commit: Another push */
