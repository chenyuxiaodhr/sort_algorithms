#include <iostream>

using namespace std;

void bubbleSort(int *array, unsigned int length)
{
  bool isChanged;
  for (int j = length; j > 0; j--)
  {
    isChanged = false;
    for (int i = 0; i < j - 1; i++)
    {
      if( *(array + i) > *(array + i + 1))
      {
        int temp = *(array + i);
        *(array + i) = *(array + i + 1);
        *(array + i + 1) = temp;
        isChanged = true;
      }
    }

    if(!isChanged)
      break;
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

  bubbleSort(input, length);
  for (int i = 0; i < length; i++)
  {
    cout << *(input + i) << endl;
  }

  delete input;

  return 0;
}
