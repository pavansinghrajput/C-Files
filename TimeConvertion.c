//wrong values still need to be handled.

char* timeConversion(char* s) {
    static char t[10];

    
    
    if(s[8]=='A'){
if(s[0]=='1'&&s[1]=='2'){
    t[0]='0';
    t[1]='0';
    //might be error in below line
    strncpy(t+2, s+2,6);
    

}
else strncpy(t, s,8);



    
    }
    //PM logic
else{
    if(s[0]=='1'&&s[1]=='2'){
        strncpy(t, s,8);
    }
else{
int a,b,num,rem0,rem1;


a=s[0]-'0';
b=s[1]-'0';

num=a*10+b;
num=num+12;

rem1=num%10;

num=num/10;
rem0=num%10;

t[0]=rem0+ '0';
t[1]=rem1+ '0';
 strncpy(t+2, s+2,6);




}

}




return t;
}
