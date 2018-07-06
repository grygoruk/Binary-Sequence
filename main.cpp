#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
  int max, l, k;
  char s[100];

  ifstream fin;
  fin.open ("D:\\INPUT.TXT", ios_base::in);
  fin >> s; //Reading from the input file

  l = sizeof (s);

  for (int i = 0; i < l; i++)
    {
      if (s[i] == '1') //Checking if the number of sequence is "1"
      k++;
      else
      {
      if (k > max)
		max = k; //Refreshing the counter
		k = 0;
	  }
    }

  ofstream fout;
  fout.open ("D:\\OUTPUT.TXT", ios_base::out | ios_base::trunc);
  fout << max; //Wrighting to the output file
  
  fin.close();
  fout.close();

  return 0;
}
