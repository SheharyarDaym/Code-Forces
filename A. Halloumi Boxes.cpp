// Problem Link: https://codeforces.com/problemset/problem/1903/A

#include<iostream>
#include<vector>
using namespace std;

void inputArray(int* arr, int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}

bool sorted(int* arr, int size){
    for(int i=1; i<size; i++){
        if(arr[i] < arr[i-1]) return false;
    }    
    return true;    
}

int main(){
    int a;
    cin >> a;
    vector<int> vec;
    for(int i=0; i<a; i++){
        int size;
        cin >> size;
        int k;
        cin >> k;
        int* arr = new int[size];
        inputArray(arr,size);
        if(sorted(arr,size)){ 
            vec.push_back(1);
        }

        else if(k>=2){
            vec.push_back(1);
        }
        else vec.push_back(0);
    }

    for(int i=0; i<vec.size(); i++){
        if(vec[i] == 1) cout << "YES" << endl;
        else cout << "NO" << endl; 

    }

    return 0;
}