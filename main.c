#include <stdio.h>

int main()
{
  int private_key[256];
  int public_key[256];
  int output = 0;

  //encode & decode
  for (int i = 0; i <= 257; i++) 
  {
    if (priv_key[i] == 1 && pub_key[i] == 1) 
    {
        output++;
    }
  }
  
  const int result = output % 2;
  return result >= 0 ? result : result + 2;
}
