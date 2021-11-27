#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int tinggi_badan_seseorang;
    int berat_badan_seseorang;
    int usia_seseorang;
    
    cin>>tinggi_badan_seseorang>>berat_badan_seseorang>>usia_seseorang;
    
    if(tinggi_badan_seseorang>170 && berat_badan_seseorang>55 && usia_seseorang>15){
        cout<<"Lolos"<<endl;
    } else {
        cout<<"Tidak Lolos"<<endl;
    }
    return 0;
}
