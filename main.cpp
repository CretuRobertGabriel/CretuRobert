#include <iostream>
using namespace std;
int V[100];
int n;
int main()
{
    cout<<"n= ";cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<"V["<<i<<"]= ";cin>>V[i];
    }
    cout<<"Initial"<<endl;
    for(int i=0;i<=n;i++)cout<<V[i]<<" ";{
    for(int i=0;i<=n-1;i++)
    {
        int minim=V[i];
        int loc=i;
        for(int j=i+1;j<=n;j++)
        {
            if(V[j]<minim){minim=V[j];loc=j;}
        }
    }
    int aux;
    aux=V[i];
    V[i]=V[loc];
    V[loc]=aux;
    }
    cout<<endl<<"Sortate"<<endl;
    for(int i=0;i<=n;i++)cout<<V[i]<<" ";
    return 0;
}
