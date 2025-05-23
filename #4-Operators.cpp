#include<iostream>
using namespace std;

int main() {

/*Example of multiplication*/

    int x ;
    cout << "Please enter x number: " << endl;
    cin >> x;

    int y=x * 100 ;
    cout << "The result: "<< y << endl;

/*Example of sum*/
    int z ;
    cout << "Please enter z number: " << endl;
    cin >> z;

    int sumA=z+10 ;
    int sumB=sumA +1000 ;
    cout << "The result: " << sumB << endl;

/*Example of mod*/

    int ƒ ;
    cout << "please enter ƒ: " << endl;
    cin >> ƒ ;

    int mod=ƒ % 3 ;
    cout << "The result: " << mod << endl;

/*Example of Increment and Decrement*/

    int tas ;
    cout << "Please enter a number: " << endl;
    cin >> tas;
    ++tas ;
    cout << "The result: " << tas << endl;
    cout << "This is the real result: " << tas << endl;

    int bag ;
    cout << "Please enter a number: " << endl;
    cin >> bag;
    --bag ;
    cout << "The result: " << bag << endl;

/*Example of Assignment*/
    int jokowi ;
    cout << "Please enter a number: " << endl;
    cin >> jokowi ;
    jokowi+=10 ;
    cout << "The result: " << jokowi << endl;

    int prabowo ;
    cout << "Please enter a number: " << endl;
    cin >> prabowo ;
    prabowo-=100 ;
    cout << "The result: " << prabowo << endl;

    int megawati ;
    cout << "Please enter a number: " << endl;
    cin >> megawati ;
    megawati*=999 ;
    cout << "The result: " << megawati << endl;

    int soeharto ;
    cout << "Please enter a number: " << endl;
    cin >> soeharto ;
    soeharto/=20 ;
    cout << "The result: " << soeharto << endl;

    int soekarno ;
    cout << "Please enter a number: " << endl;
    cin >> soekarno ;
    soekarno%=3 ;
    cout << "The result: "<< soekarno << endl;

/*Example of Comparison*///if the result 0 it means wrong//
    int a, b ;
    cout << "Please enter a number: " << endl;
    cin >> a ;
    cout << "Please enter a number: " << endl;
    cin >> b;
    cout << "Is the number the same: " << (a==b) << endl;

    int c, d ;
    cout << "Please enter a number: " << endl;
    cin >> c;
    cout << "Please enter a number: " << endl;
    cin >> d;
    cout << "Is the number the not same: " << (c!=d) << endl;

    int e, f ;
    cout << "Please enter a number: " << endl;
    cin >> e;
    cout << "Please enter a number: " << endl;
    cin >> f;
    cout << "Is the number greater than what we expected: " << (e>f) << endl;

    int g, h ;
    cout << "Please enter a number: " << endl;
    cin >> g;
    cout << "Please enter a number: " << endl;
    cin >> h;
    cout << "Is the number less than what we expected: " << (g<h) << endl;

    int i, j ;
    cout << "Please enter a number: " << endl;
    cin >> i;
    cout << "Please enter a number: " << endl;
    cin >> j;
    cout << "Is the number equal or greater than what we expected: " << (i>=j) << endl;

    int k, l ;
    cout << "Please enter a number: " << endl;
    cin >> k;
    cout << "Please enter a number: " << endl;
    cin >> l;
    cout << "Is the number equal or less than what we expected: " << (k<=l) << endl;

/*Example of Logical*///if the result 0 it means wrong//
    int m, n;
    cout << "Please enter a number: " << endl;
    cin >> m;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << (m>1 && n<10)<< endl;

    int o, p;
    cout << "Please enter a number: " << endl;
    cin >> o;
    cout << "Please enter a number: " << endl;
    cin >> p;
    cout << (o>=1 || p<100) << endl;

    int q, r ;
    cout << "Please enter a number: " << endl;
    cin >> q;
    cout << "Please enter a number: " << endl;
    cin >> r;
    cout << !(q>2 || r<-100) << endl;

    return 0;
}
