#include <iostream>
using namespace std;



int main()
{
    int f[5]={600,400,300,400,100};
    int p[5]={500,200,100,600,200};
    
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
                {
                    if(f[j]<f[i])
                        {
                            int temp=f[j];
                            f[j]=f[i];
                            f[i]=temp;
                        }
                }
        }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<f[i]<<" ";
    // }



    int flag=0;
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(p[i]<=f[j])
                {f[j]=0;
                flag=1;
                break;}
            
        }
        if(flag){
            cout<<"Visited: "<<p[i]<<endl;
        }
        else
            cout<<"Not Visited: "<<p[i]<<endl;
        flag=0;
    }
    return 0;
}