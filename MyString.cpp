#include <bits/stdc++.h>

using namespace std;

class MyString
{
public:

  MyString()
  {
    size = 100;
    str = (char*)malloc(sizeof(char) * 100 );
  }

  MyString(int s)
  {
    size = s;
    str = (char*)malloc(sizeof(char) * size);
  }

  bool set(char *input)
  {
    int length = 0;
    for ( int i = 0 ; input[i] != NULL ; i++ )
    {
      length++;
    }
    if ( length <= size )
    {
      str = input;
      return true;
    }
    else
    {
      return false;
    }
  }

  void print()
  {
    char* s;
    s = str;
    cout << s << endl;
  }

private:
  int size;
  char* str;
};

