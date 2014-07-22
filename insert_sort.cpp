#include <iostream>

using namespace std;

void insertSort(int *array, unsigned int n)
{
  int i,j;
  for (i = 1; i < n; i++)
  {
    int temp = *(array + i);
    for (j = i; j > 0 && *(array + j - 1) > temp; j--)
    {
      *(array + j) = *(array + j - 1);
    }
    *(array+j)=temp;
  }
}

int main()
{
  int length;
  int *input;
  cin >> length;
  input = new int(length);
  for (int i = 0; i < length; i++)
  {
    cin >> *(input + i);
  }
  insertSort(input, length);
  for (int i = 0; i < length; i++)
  {
    cout << *(input + i) << endl;
  }

  delete input;

  return 0;
}
