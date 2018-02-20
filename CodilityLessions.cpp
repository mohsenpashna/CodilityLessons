//
// Created by Mohsen on 20/02/2018.
//

#include "CodilityLessions.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int PermCheck() {
//    https://app.codility.com/programmers/lessons/4-counting_elements/perm_check/
    vector<int> A = {4, 3, 1, 2};

    int sizeOfA = A.size();
    vector<int> B(sizeOfA, 0);
    for (int i = 0; i < sizeOfA; i++) {
        if (A[i] > sizeOfA) return 0;
//             cout << "A is " << A[i] << endl;
//             cout << "B is " << B[i] << endl;
        try {
            B[A[i] - 1] = B[A[i] - 1] + 1;
            if (B[A[i] - 1] > 1) {
//                     cout << "more than 1 element" << endl;
//                     cout << "A is " << A[i] << endl;
//                     cout << "B is " << B[A[i]-1] << endl;
                return 0;
            }
        } catch (int e) {
//            cout << "try" << endl;
            return 0;
        }
    }
    return 1;
}

int MissingInteger(){
//    int  result =1;
    vector<int> A = {1, 3, 6, 4, 1, 2};
//    vector<int> A = {1, 2, 3};
//    vector<int> A = {-1, -3};
    int sizeOfA = A.size();
    int minA = 1;
//    for(vector<int>::iterator it=A.begin(); it !=A.end(); it++){
//        maxA = ((maxA>*it) ? maxA : *it);
//    }
//    cout << "min of A: " << minA<< endl;
    sort(A.begin(), A.end());

//    for(vector<int>::iterator it=A.begin(); it !=A.end(); it++){

    if((A[sizeOfA-1])<0){
        return  1;
    }
    int cntr =1;
    for(int i=0;i<sizeOfA; i++){
//    if ()
//        cout << "i is is " << i << endl;
//        cout << "A[i] is is " << A[i] << endl;

//        if((i)<A[i] && i!=0){
//            cout << "Termination since i is is " << i << endl;
//            return i;
//
//        }
//        cout << "min of A: " << minA << endl;
//        cout << "A[i]: " << endl;
    }

    return sizeOfA+1;
}