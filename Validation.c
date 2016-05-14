#include<stdio.h>
#include<string.h>
void checkinteger(char s[]){
    int l,p;
    l=strlen(s);
    for(p=0;p<l;p++){
        if(s[p]>=48 && s[p]<=57){
            continue;
        }
        else{
            break;
        }
    }
    if(p==l){
        printf("Correct Input\n");
    }
    else{
        printf("Wrong input\n");
    }
}
void checkmobileno(char s[]){
    int l,p;
    l=strlen(s);
    if(l==10){
        for(p=0;p<l;p++){
            if(s[p]>=48 && s[p]<=57){
                continue;
            }
            else{
                break;
            }
        }
        if(p==l){
            printf("Correct mobile no.\n");
        }
        else{
            printf("Wrong mobile no.\n");
        }
    }
    else{
        printf("Wrong mobile no.\n");
    }
}
void checkaccountno(char s[]){
    int l,p;
    l=strlen(s);
    if(l==12){
        for(p=0;p<l;p++){
            if(s[p]>=48 && s[p]<=57){
                continue;
            }
            else{
                break;
            }
        }
        if(p==l){
            printf("Correct account no.\n");
        }
        else{
            printf("Wrong account no.\n");
        }
    }
    else{
        printf("Wrong account no.\n");
    }
}
void checkpassword(char s[]){
    int l,p,u=0,v=0,w=0,x=0;
    l=strlen(s);
    for(p=0;p<l;p++){
        if(s[p]>=48 && s[p]<=57){
            u++;
        }
        else if(s[p]>=65 && s[p]<=90){
            v++;
        }
        else if(s[p]>=97 && s[p]<=122){
            w++;
        }
        else{
            x++;
        }
    }
    if(u>=1 && v>=1 && w>=1 && x>=1){
        printf("Correct password\n");
    }
    else{
        printf("Wrong password\n");
    }
}
void checkdate(char s[]){
    int l,u,v,w,i,m,n=1,o=1;
    l=strlen(s);
    if(l==10){
        if((s[0]==48 && s[1]>=49 && s[1]<=57) || ((s[0]==49 || s[0]==50) && s[1]>=48 && s[1]<=57) || (s[0]==51 && (s[1]==48 || s[1]==49))){
            u=1;
        }
        else{
            u=0;
        }
        if((s[3]==48 && s[4]>=49 && s[4]<=57) || (s[3]==49 && s[4]>=48 && s[4]<=50)){
            v=1;
        }
        else{
            v=0;
        }
        if(s[2]=='/' && s[5]=='/'){
            w=1;
        }
        else{
            w=0;
        }
        for(i=6;i<=9;i++){
            if(s[i]>=48 && s[i]<=57)
                continue;
            else
                break;
        }
        if(i==10){
            m=1;
        }
        else
            m=0;
        if(s[0]==51 && s[1]==49){
            if((s[3]==48 && (s[4]==49 || s[4]==51 || s[4]==53 || s[4]==55 || s[4]==56))){
                n=1;
            }
            else if(s[3]==49 &&(s[4]==48 || s[4]==50)){
                n=1;
            }
            else
                n=0;
        }
        if(s[3]==48 && s[4]==50 && s[0]==50){
            if(s[1]>=48 && s[1]<=56)
                o=1;
            else
                o=0;
        }
        if(u==1 && v==1 && w==1 && m==1 && n==1 && o==1){
            printf("Correct date\n");
        }
        else{
            printf("Wrong date\n");
        }
    }
    else{
        printf("Wrong date\n");
    }
}
int main(){
char s[100];
int a,i=1;
while(i){
    printf("1.Press 1 to check integer\n2.Press 2 to check mobile number\n");
    printf("3.Press 3 to check 12 digit account number\n4.Press 4 to check password with at least 1 integer,1 upper,1 lower and 1 special\n");
    printf("5.Press 5 to check date as dd/mm/yyyy\n6.Press 6 to exit\n");
    scanf("%d",&a);
    if(a<=6 && a>=1){
        switch(a){
            case 1: printf("Enter Integer\n");
                    scanf("%s",s);
                    checkinteger(s);
                    break;
            case 2: printf("Enter Mobile number\n");
                    scanf("%s",s);
                    checkmobileno(s);
                    break;
            case 3: printf("Enter Account number ");
                    scanf("%s",s);
                    checkaccountno(s);
                    break;
            case 4: printf("Enter Password\n");
                    scanf("%s",s);
                    checkpassword(s);
                    break;
            case 5: printf("Enter Date\n");
                    scanf("%s",s);
                    checkdate(s);
                    break;
            case 6: printf("Thank you for using the program\n");
                    i=0;
        }
    }
    else{
        printf("Wrong input,Please try once more\n");
    }
}
return 0;
}
