#include<bits/stdc++.h>

#define MAX 201
using namespace std;

long from0[MAX];
long from_oth[MAX];

int ways(int p, int n)
{
    if(p==0){
        if(from0[n]!=-1) return from0[n];

        from0[n]=3*ways(1,n-1);
        return from0[n];
    }

    else{
        if(from_oth[n]!=-1) return from_oth[n];

        from_oth[n]=2*ways(1,n-1)+ways(0,n-1);
        return from_oth[n];
    }
}

int main()
{
    memset(from0,-1,sizeof(from0));
    memset(from_oth,-1,sizeof(from_oth));

    from_oth[1]=1;
    from0[1]=0;

    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int a=ways(0,n);
        cout<<a<<endl;
    }
}
