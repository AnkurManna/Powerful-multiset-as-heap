#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multiset<int>s;
    string p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        if(p[0]=='P')
        {
            int x;
            cin>>x;
            s.insert(x);
            //to insert in multiset
        }
        else if(p[0]=='D')
        {
            if(s.empty())
            {
                cout<<-1<<'\n';
            }
            else
            {
                cout<<(*(s.rbegin())-*(s.begin()))<<'\n';
                
                //to get both the extrmum element
                
                if(*(s.rbegin())==*(s.begin()))
                s.erase(s.begin());
                else
                {
                    s.erase(s.begin());
                    s.erase(--s.end());
                }
                
               // in multiset we cant erase using reverse iterator so manipulation of forward operator is given
            }
        }
        else if(p=="CountHigh")
        {   
            if(s.empty())
            cout<<-1<<'\n';
            else{
            int k=0;
            int x=*(s.rbegin());
          
            
            cout<<s.count(x)<<'\n';
                //to count frequency in multiset
            }
        }
        else
        {   
             if(s.empty())
            cout<<-1<<'\n';
            else{
             int k=0;
            int x=*(s.begin());
       
                   cout<<s.count(x)<<'\n';

                
            }
        }
    }
}
// if we traverse multiset in reversse direction in loop there will be incrementing operator not decrementing 

//problem link
/*https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/little-monk-and-williamson/description/*/
