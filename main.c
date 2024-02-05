#include <stdio.h>

int main()
{
  int private_key[256];
  int public_key[256];
  int output = 0;

  private_key[0] = 1;
  public_key[0] = 1;

  //encode & decode
  for (int i = 0; i <= 257; i++) 
  {
    if (private_key[i] == 1 && public_key[i] == 1) 
    {
        output++;
    }
  }
  
  const int result = output % 2;
  return result >= 0 ? result : result + 2;
}
