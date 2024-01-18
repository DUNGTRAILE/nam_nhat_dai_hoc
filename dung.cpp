#include <bits/stdc++.h>
using namespace std ;

int main (){
    int n , s =0;
    for ( int i = 1 ; i <= n ; i++){
        if ( n % i == 0 ){
             s++;

        }
        if(s > 2  ){
            break ;
        }
    }
    if( s == 2 ){
        cout << "YES";
    }
    else {
        cout << "no";
    }
    return 0 ;
}