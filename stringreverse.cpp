# include <bits/stdc++.h>
using namespace std;
void reverse(string &s,int i,int l)
{
    if(i>=l/2)
    {
        return;
    }
    swap(s[i],s[l-i-1]);
    return reverse(s,i+1,l);
}
int main()
{
    string s;
    cout<<"Enter the string";
    cin>>s;
    int l=s.length();
    reverse(s,0,l);
    cout<<s;
}
