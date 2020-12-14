 #include<bits/stdc++.h>
 #include<iostream>
 
 using namespace std;
  bool isValid(string s) {
        stack <char> s1;
       
       
        for(char b : s){
            if(b=='(' || b=='{' || b=='['){
                s1.push(b);
        
            }else{
                
                if(s1.empty()) return false;
                
                if(s1.top()!='(' && b==')')return false;
                
                if(s1.top()!='{' && b=='}')return false;
                
                if(s1.top()!='[' && b==']') return false;
                        
                s1.pop();
                 
            
            }
            
            
                
        
            
        }
        
      return s1.empty();
    }
