
#include<bits/stdc++.h>
#define MAX INT_MAX
#define MIN INT_MIN
#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
using namespace std;
int const N = 1e7;

ll lcm(ll x , ll y){
    return x / __gcd(x, y) * y;
}



main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);

     int t;
     cin >> t;
     while(t--)
     {
         string s;
         cin >> s;
         int p = s.size();

         for(int i = s.size() - 1; i >= 0;i--)
         {
             if(s[i] - 48 >= 5)
             {
                  if(i == 0)
                  {
                       s = '1' + s;
                       p = i + 1;
                  }
                  else
                  {
                       p = i;
                       s[i-1]++;
                  }
             }
         }
         for(int i = p;i < s.size();i++)
          s[i]= '0';

          cout << s << "\n";
     }
}
/*
 Note:
 1) think the problem in direct
 2) think out of box
 3) don t stay long time in one idea if you think imposible
 4) you should actually read the stuff at the bottom

 Check:
 1) input 1 and 0 and max ****
 2) think speshal cause   ***

 Error:
 1) crash may be a%0 or a/0 or .....
 2) big number: 1000000000 = 1e9
 3) overflow and midOverflow
 4) out of array
 5) the math in programming are defrent from real in same rule example number/2 so in number /2 make sure the even number then div by 2 to make sure
 6) abs for int llabs for long long
 7) make sure is all long long if you want
 8) don t forget (int)s.size() before
*/

//bool binary_search( begin , end , val )    find
//* upper_bound( begin , end , val)          find > val
//* lower_bound( begin , end , val )         find >=val
//sort( begin , end , optional)              sort
//int unique( begin , end)                   find unique elements  //must sorted
//reverse( begin , end )                     reverse
//next_permutation( begin , end );           go to next premutation
//prev_permutation( begin , end );           go to prev premutation

