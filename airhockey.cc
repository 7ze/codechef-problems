/**
Problem
  Alice is playing Air Hockey with Bob. The first person to earn seven points
  wins the match. Currently, Alice's score is A and Bob's score is B. Charlie is
  eagerly waiting for his turn. Help Charlie by calculating the minimum number of
  points that will be further scored in the match before it ends.

Input Format
  The first line of input will contain an integer T — the number of test
  cases. The description of T test cases follows. The first and only line
  of each test case contains two space-separated integers A and B, as
  described in the problem statement.

Output Format
  For each test case, output on a new line the minimum number of points that
  will be further scored in the match before it ends.

Constraints
    1 ≤ T ≤ 50
    0 ≤ A,B ≤ 6
    **/

#include <iostream>

using namespace std;

const int WIN_SCORE = 7;

int main (void) {
  int limit, a, b, i;
  cin >> limit;
  int score[limit];

  for(i=0; i<limit; i++){
    cin >> a >> b;
    score[i] = a > b ? (WIN_SCORE-a) : ( WIN_SCORE-b); 
  }

  for(i=0; i<limit; i++)
    cout << score[i] << endl;

  return 0;
}

