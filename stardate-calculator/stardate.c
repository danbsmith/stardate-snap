#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define STARDATE_0 11139552000

int main(int argc, char** argv)
{
   if(argc == 1)
   {
      long long now = (long long) time(NULL);
      float stardate = (now - STARDATE_0) / 31536.0;
      printf("The current stardate is %.2f\n\n", stardate);
      return 0;
   }
   else if(argc == 2)
   {
      long long in = atoll(argv[1]);
      float stardate = (in - STARDATE_0) / 31536.0;
      printf("At the provided UNIX timestamp, the stardate will be / was %.2f\n\n", stardate);
      return 0;
   }
   else
   {
      printf("Invalid argument count of %d.  Exiting.\n\n", argc);
      return -1;
   }
}
