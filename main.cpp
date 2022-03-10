#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> grades = {};
  vector <string> names = {};
  grades.push_back(98);
  grades.push_back(78);
  grades.push_back(88);
  grades.push_back(77);
  for (int i=0; i<grades.size(); i++) {
    cout << grades[i] << ' ';
  }
  cout << endl;
  grades.pop_back();
  for (int i=0; i<grades.size(); i++) {
    cout << grades[i] << ' ';
  }
  cout << endl;
  names.push_back("Jackie");
}