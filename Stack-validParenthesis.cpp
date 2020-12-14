 #include<bits/stdc++.h>
 #include<iostream>
 
 using namespace std;
 
 bool isValid(string s) {
        stack <int> s1;
        
        int curr=0;   
        while(curr < s.length()){
            if(s[curr]=='(' || s[curr]=='{' || s[curr]=='['){
                s1.push(s[curr]);
                curr++;
            }else if(s[curr]==')' || s[curr]=='}' || s[curr]==']'){
                
            if(s1.top()==s[curr]){
                s1.pop();
                curr++;
            }else{
                break;
            }
                    
                
            }
        
            
        }
        
        if(s1.empty()){
            return true;
        }else{
            return false;
        }
    }
