//MD. HASNAIN ALI (UNSOLVED)
//I am nobody.
 
#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC               optimize ("Ofast")
#pragma GCC               optimize("O3")
#define ll                long long
#define lo(i,a,n,x)       for(i=a;i<=n;i=i+x)
#define loi(i,a,n,x)      for(i=a;i>=n;i=i-x) 
#define sca(n)            scanf("%lld", &n)
#define pri(n)            printf("%lld", n)
#define pb(a)             push_back(a)
#define pop()             pop_back()
#define mp                make_pair
#define ff                first
#define ss                second
#define sqr(x)            (x)*(x)
#define VI                vector <int>
#define SZ(a)             (int)a.size()
#define SORT(x)           sort(x.begin(), x.end())
#define REV(x)            reverse(x.begin(), x.end())
#define UNIQUE(v)         (v).erase(unique((v).begin(),(v).end()),(v).end())
#define REV(x)            reverse(x.begin(), x.end())
#define all(x)            x.begin(), x.end()
#define ODD(x)            ((x)&1)==0?(0):(1)
#define TEST_CASE(t)      for(int z=1;z<=t;z++)
#define distance(a,b)     (sq(a.x-b.x) + sq(a.y-b.y))
#define GCD(a, b)         __gcd(a, b)
#define lcm(a, b)         (a)*((b)/gcd(a,b))
#define end0              "\n"
#define end1              cout<<"\n";
#define pi                acos(-1)
#define mod               1000000007
#define inf               999999999999999999
#define eps               10e-9
 
 
 
 
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input-2.txt","r",stdin);
    //freopen("output-1.txt","w",stdout);
 
    ll i,j,a,b,p,s=0;
    string x;
    cin>>a>>b;
    cin>>x;
    char c;
    int y[30]={0};
    lo(i,0,b-1,1){
        cin>>c;
        y[c-'a']=1;
    }
 
    p=0;
    lo(i,0,a-1,1){
        if(y[x[i]-'a']==1) p++;
        else{
            s+=((p*(p+1))/2);
            p=0;
        }
    }
    if(p) s+=((p*(p+1))/2);
 
    cout<<s<<end0;
    
    return 0;
}
