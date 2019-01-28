#include <stdio.h>
#include <wchar.h>

wchar_t *my_wstrchr(wchar_t *ws, wchar_t wc)
{
   
   const wchar_t *p = s;
   
    while (*ws) 
   {
      
      if (*ws == wc)
      
      return ws;
      
      ++ws;
       
   }
   return NULL;
   
}


char *trim(char *value, char *s)
{
   
   char *param = value;
   
    while (*value++ = *s++)
    ;
   
   
   return param;
   
}

size_t my_strlen(const char *s)
{
  const char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));
   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
   
   return 0;
}

char *my_strcpy(char *t, char *s)
{
   
   char *p = t;
   
    while (*t++ = *s++)
    ;
   
   
   return p;
   
}
