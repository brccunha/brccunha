#include <unistd.h>
void ft_print_comb(void)
{
  int c; 
  int d; 
  int u; 

  c = 0; 
  while(c <= '7')
  {
    d = c + 1;
    while(d <= '8') 
    {
      u = d + 1;
      while(u <= '9')
      {
        write(1, &c, 1);
        write(1, &d, 1);
        write(1, &u, 1);
        write(1, ", ",2);
        if(c != '7')
        write(1, "", 1);
      u++;
      }
    d++;
    }
  c++;
  }
}

int main() {

ft_print_comb();
  return 0;
}

