#include <bits/stdc++.h>
using namespace std;
int vis[10000];
int main()
{
    cout <<1<<" "<<2<<" "<<3<<endl;
    vis[1]=vis[2]=vis[3]=true;
    int last=1;
    for (int i=1;i<2000;i++)
    {
        if (!vis[i])
        {
            if (last+1!=i)
                cout <<"SODIFJSDOIFJ\n\n\n";
            last=i;
            vis[i]=true;
            cout <<i<<" ";
            for (int j=i+1;j<5000;j++)
            {
                if (!vis[j]&&!vis[i^j])
                {
                    vis[i^j]=true;
                    vis[j]=true;
                    cout <<j<<" "<<(i^j)<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}
