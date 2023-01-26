#include "vecfuncs.h"

int main() {
  vector<int> userNums;
  int min, max;

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  // Task 1: Define and call a function
  // to find and return the min and max
  // number in the vector
  findExtremes(userNums, min, max);
  cout << "min: " << min << " max: " << max << endl;
  // Task 2: Convert this to 3 file format
}