/**
Problem
  On a certain train, Chef-the ticket collector, collects a fine of Rs. X if a
  passenger is travelling without a ticket. It is known that a passenger
  carries either a single ticket or no ticket. P passengers are travelling and
  they have a total of Q tickets. Help Chef calculate the total fine collected.

Input Format
  The first line contains a single integer T, the number of test cases. T lines
  follow. Each following line contains three integers separated by spaces,
  whose description follows. The first integer, X, is the fee in rupees. The
  second integer, P, is the number of passengers on the train. The third
  integer, Q, is the number of tickets Chef collected.

Output Format
  The output must consist of T lines. The i-th line must contain a single
  integer, the total money(in rupees) collected by Chef corresponding to the
  i-th test case.

Constraints
  1 ≤ T ≤ 10
  1 ≤ X ≤ 10
  0 ≤ Q ≤ P ≤ 10
 */

#include <iostream>

using namespace std;

int main () {
  int T, x, p, q, i;
  cin >> T;
  for (i=0;i<T;i++) {
    cin >> x >> p >> q;
    cout << x * (p-q) << endl;
  }
  return 0;
}
