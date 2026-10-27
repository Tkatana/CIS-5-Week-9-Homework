#include <iostream>
#include <string>

using std::cout;
using std::cin;

// Homework 9 — Tyler Quintana
// CIS 5 Week 09 · Menu on the lab
// Paste your lab functions here, or fill the TODOs.

void printMenu() {
  cout << "1) Average  2) High  3) Quit\n";
}

double average(const int a[], int n){
  int sum = 0;
  for(int i = 0; i < n; ++ i) sum += a[i];
  return sum * 1.0 / n;
}

void printsummary (double avg) {
cout << "Grade average is: " << avg << "\n";
}

int high(const int a[], int n) {
  // TODO: return the max. Seed from a[0].
  int h = 0;
  for(int i = 0; i < n; ++ i){
  if (a[i] > h){
  h = a[i]; 
  }
  }
  return h;
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  int choice = 0;

  do {
    printMenu();
    cin >> choice;
    if (choice == 1) {
      double avg = average(scores, N);
      printsummary(avg);
    } else if (choice == 2) {
      int top = high(scores, N);
      cout << "High: " << top << "\n";
    }
  } while (choice != 3);

  return 0;
}
