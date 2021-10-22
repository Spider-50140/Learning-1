#include<bits/stdc++.h>
unordered_map<char,int> m;
string uniqueChar(string str)
{
   string ans;

   for(int i=0;str[i]!='\0';i++)
   {
       if(m[str[i]]>=1)
       {
           continue;
       }
       else
       {
         m[str[i]]++;
         ans.push_back(str[i]);
       }
       
   }
    return ans;

}
