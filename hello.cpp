#include <iostream>

using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i : arr)
    cout << i;

  return 0;
}
