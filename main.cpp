#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main()
{
//    problem1
//    int x;
//    double p;
//    cin >> x >> p;
//    double priceBeforeDiscount = p / (1 - x/100.0);
//    cout << fixed << setprecision(2) << priceBeforeDiscount << endl;

//      problem2
//
//  long long a, b, k;
//    cin >> a >> b >> k;
//    if (a % k == 0 && b % k == 0) {
//        cout << "Both" << endl;
//    } else if (a % k == 0) {
//        cout << "Memo" << endl;
//    } else if (b % k == 0) {
//        cout << "Momo" << endl;
//    } else {
//        cout << "No One" << endl;
//    }
//
//    problem3
//
//  char C;
//    cin >> C;
//    if (C == 'z') {
//        cout << 'a' << endl;
//    } else {
//        char nextChar = C + 1;
//        cout << nextChar << endl;
//    }


//       problem4

//             int a, b;
//            cin >> a >> b;
//            if (a == 0 && b == 0) {
//            cout << "NO" << std::endl;
//             return 0;
//            }
//           if (abs(a - b) > 1) {
//            cout << "NO" << std::endl;
//            return 0;
//           }
//           cout << "YES" << std::endl;


//            problem5

//              unsigned A , B;
//              cin >> A >> B ;
//              while(B!=0){
//               unsigned  int carry = A & B;
//                A = A^B;
//                B = carry << 1;
//              }
//              cout << A ;

//               problem6

//               long long a , b , decimal=0;
//               cin >> a >> b;
//               for(int i=0; i <=32;i++){
//               int x = a%2;
//               a=a/2;
//               int y=b%2;
//               b=b/2;
//               if ( x!=y){
//                 decimal= decimal+pow(2,i);
//               }
//               }
//               cout <<  decimal;

//                  problem7

//                     int n, k, a;
//    cin >> n >> k >> a;
//
//    long long product = 1LL * n * k * a;
//
//    if (product <= 2147483647) {
//        cout << "int" << endl;
//    } else if (product <= 9223372036854775807) {
//        cout << "long long" << endl;
//    } else {
//        cout << "double" << endl;
//    }

//           problem8

              int N;
    cin >> N;

    int tens = N / 10;
    int units = N % 10;

    if (tens % units == 0 || units % tens == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
