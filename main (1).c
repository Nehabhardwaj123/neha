
#include <stdio.h>
#include <math.h>
int main()
{
int n;
printf("to on calculator enter a number greater than 1\n");
printf("to off calculator enter a number less than 1\n");
printf("enter your choice: ");
scanf("%d",&n);
if(n>=1)
{
    for(int i=1;i>=1;i++)
    {
        int m[100];
        printf("enter 1 to start integer calculation\n");
        printf("enter 2 to start decimal calculation\n");
        printf("enter 0 to stop calculation\n");
        printf("enter your choice: ");
        scanf("%d",&m[i]);
        if(m[i]==1)
        {
            int c;
            printf("for addition enter 1\n");
            printf("for subtraction enter 2\n");
            printf("for multiplication enter 3\n");
            printf("for division enter 4\n");
            printf("for percentage enter 5\n");
            printf("for average enter 6\n");
            printf("for square root enter 7\n");
            printf("for power enter 8\n");
            printf("for quadratic equation enter 9\n");
            printf("for trignometry enter 10\n");
            printf("for logarithm values enter 11\n");
            printf("for converting radians to degrees enter 12\n");
            printf("for coverting degrees to radians enter 13\n");
            printf("for converting decimal to binary enter 14\n");
            printf("enter your choice: ");
            scanf("%d",&c);
            switch(c)
            {
                case 1:
                {
                    int a[1000]={0},k=0,sum=0;
                    printf("enter no of numbers to find sum: ");
                    scanf("%d",&k);
                    for(int i=1;i<=k;i++)
                    {
                        printf("enter number%d: ",i);
                        scanf("%d",&a[i]);
                        sum=sum+a[i];
                    }
                    printf("The sum of %d entered numbers: %d\n",k,sum);
                    break;
                }
                case 2:
                {
                    int b[1000],k=0,diff=0;
                    printf("enter no of numbers to find difference: ");
                    scanf("%d",&k);
                    for(int i=1;i<=k;i++)
                    {
                        printf("enter  number%d: ",i);
                        scanf("%d",&b[i]);
                        if(i==1)
                        {
                            diff=b[i];
                        }
                        else
                        {
                            diff=diff-b[i];
                        }
                        }
                        printf("difference of the %d numbers entered: %d\n",k,diff);
                        break;
                    }
                    case 3:
                    {
                        int d[1000],k=0,pro=1;
                        printf("enter no of number to be calculated: ");
                        scanf("%d",&k);
                        for(int i=1;i<=k;i++)
                        {
                            printf("enter number%d: ",i);
                            scanf("%d",&d[i]);
                            pro=pro*d[i];
                        }
                        printf("product of %d entered numbers: %d\n",k,pro);
                        break;
                    }
                    case 4:
                    {
                        int divi1,divi2,q=0,r=0;
                        printf("enter dividend: ");
                        scanf("%d",&divi1);
                        printf("enter divisor: ");
                        scanf("%d",&divi2);
                        q=divi1/divi2;
                        r=divi1%divi2;
                        printf("quotient is: %d\n",q);
                        printf("remainder is: %d\n",r);
                        break;
                    }
                    case 5:
                    {
                        int p1,p2;
                        float per;
                        printf("enter first number: ");
                        scanf("%d",&p1);
                        printf("enter second number: ");
                        scanf("%d",&p2);
                        per=(p1*100.0)/p2;
                        printf("percentage of is: %.2f\n",per);
                        break;
                    }
                    case 6:
                    {
                        int e[1000],k=0,sum1=0;float avg=0;
                        printf("enter no of numbers to calculate: ");
                        scanf("%d",&k);
                        for(int i=1;i<=k;i++)
                        {
                           printf("enter %d number: ",i);
                           scanf("%d",&e[i]);
                           sum1=sum1+e[i];
                        }
                        avg=sum1/k;
                        printf("Average of entered numbers: %.2f\n",avg);
                        break;
                    }
                    case 7:
                    {
                      float sq;int f;
                      printf("enter a number to find its square root: ");
                      scanf("%d",&f);
                      sq=sqrt(f);
                      printf("square root is: %.2f\n",sq);
                      break;
                    }
                    case 8:
                    {
                        int g,h,power;
                        printf("enter a base number: ");
                        scanf("%d",&g);
                        printf("enter power of base: ");
                        scanf("%d",&h);
                        power=pow(g,h);
                        printf("poweris : %d\n",power);
                        break;
                    }
                    case 9:
                    {
                    int u,v,z,dis,t;float q1,q2;
                    printf("enter 1 to find nature of roots\n");
                    printf("enter 2 for solution of quadratic equation\n");
                    printf("enter your choice: ");
                    scanf("%d",&t);
                    switch(t)
                    {
                      case 1:
                      {
                        printf("enter x^2 co-efficient: ");
                        scanf("%d",&u);
                        printf("enter x co-efficient:" );
                        scanf("%d",&v);
                        printf("enter constant: ");
                        scanf("%d",&z);
                        dis=pow(v,2)-4*u*z;
                        if(dis<0)
                        {
                          printf("roots are imaginary\n");
                        }
                        else if(dis==0)
                        {
                          printf("roots are equal\n");
                        }
                        else
                        {
                          printf("roots are real\n");
                        }
                        break;
                      }
                      case 2:
                      {
                        printf("enter x^2 co-efficient: ");
                        scanf("%d",&u);
                        printf("enter x co-efficient:" );
                        scanf("%d",&v);
                        printf("enter constant: ");
                        scanf("%d",&z);
                        dis=pow(v,2)-4*u*z;
                        if(dis<0)
                        {
                          printf("root1= %.2f+i%.2f\n",-u/2.0,sqrt(-dis/2.0));
                          printf("root1= %.2f-i%.2f\n",u/2.0,sqrt(-dis/2.0));
                          printf("roots are imaginary\n");
                        }
                        else if(dis==0)
                        {
                          printf("root1= %.2f\n",-v/2.0);
                          printf("root2= %.2f\n",-v/2.0);
                          printf("roots are equal\n");
                        }
                        else
                        {
                          q1=(-v+sqrt(dis))/2.0;
                          q2=(-v-sqrt(dis))/2.0;
                          printf("root1: %.2f\n",q1);
                          printf("root2: %.2f\n",q2);
                          printf("roots are real");
                        }
                        break;
                      }
                      break;
                    }
                    break;

                    }
                    case 10:
                    {
                        int j;
                        printf("Enter 1 for sin\n");
                        printf("Enter 2 for cos\n");
                        printf("Enter 3 for tan\n");
                        printf("Enter 4 for cot\n");
                        printf("Enter 5 for sec\n");
                        printf("Enter 6 for cosec\n");
                        printf("Enter 7 for sinh\n");
                        printf("Enter 8 for cosh\n");
                        printf("Enter 9 for tanh\n");
                        printf("enter your choice: ");
                        scanf("%d",&j);
                        switch(j)
                        {
                            case 1:
                            {
                                int o;float r,degree,sinval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 sinval=sin(r);
                                 printf("the sin value is: %.2f\n",sinval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 sinval=sin(r);
                                 printf("the sin value is: %.2f\n",sinval); 
                                }
                                break;
                                }
                                case 2:
                            {
                                int o;float r,degree,cosval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 cosval=cos(r);
                                 printf("the cos value is: %.2f\n",cosval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 cosval=cos(r);
                                 printf("the cos value is: %.2f\n",cosval); 
                                }
                                break;
                                }
                                case 3:
                            {
                                int o;float r,degree,tanval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d\n",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 tanval=tan(r);
                                 printf("the tan value is: %.2f\n",tanval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 tanval=tan(r);
                                 printf("the tan value is: %.2f\n",tanval); 
                                }
                                break;
                                }
                                case 4:
                            {
                                int o;float r,degree,cotval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter ypur choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 cotval=1/tan(r);
                                 printf("the cot value is: %.2f\n",cotval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 cotval=1/tan(r);
                                 printf("the cot value is: %.2f\n",cotval); 
                                }
                                break;
                                }
                                case 5:
                            {
                                int o;float r,degree,secval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 secval=1/cos(r);
                                 printf("the sec value is: %.2f\n",secval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 secval=1/cos(r);
                                 printf("the sec value is: %.2f\n",secval); 
                                }
                                break;
                                }
                                case 6:
                            {
                                int o;float r,degree,cosecval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 cosecval=1/sin(r);
                                 printf("the cosec value is: %.2f\n",cosecval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 cosecval=1/sin(r);
                                 printf("the cosec value is: %.2f\n",cosecval); 
                                }
                                break;
                                }
                                case 7:
                            {
                                int o;float r,degree,sinhval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 sinhval=sinh(r);
                                 printf("the sinh value is: %.2f\n",sinhval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 sinhval=sinh(r);
                                 printf("the sinh value is: %.2f\n",sinhval); 
                                }
                                break;
                                }
                                case 8:
                            {
                                int o;float r,degree,coshval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 coshval=cosh(r);
                                 printf("the cosh value is: %.2f\n",coshval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 coshval=cosh(r);
                                 printf("the cosh value is: %.2f\n",coshval); 
                                }
                                break;
                                }
                               case 9:
                            {
                                int o;float r,degree,tanhval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 tanhval=tanh(r);
                                 printf("the tanh value is: %.2f\n",tanhval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 tanhval=tanh(r);
                                 printf("the tanh value is: %.2f\n",tanhval); 
                                }
                                break;
                                }
                                break;
                                 
                            }
                            break;
                        }
                        case 11:
                        {
                            int l;float logerithm;
                            printf("Enter a number to find its logerthim:");
                            scanf("%d",&l);
                            logerithm=log(l);
                            printf("logerithm of %d is:%.2f\n",l,logerithm);
                            break;
                        }
                        case 12:
                        {
                            float deg,rad;
                            printf("enter the angle in radians: ");
                            scanf("%f",&rad);
                            deg=rad*(180.0/M_PI);
                            printf("%.2f in degrees: %.2f",rad,deg);
                            break;
                        }
                        case 13:
                        {
                            float deg,rad;
                            printf("enter the angle in degrees: ");
                            scanf("%f",&deg);
                            rad=deg*(M_PI/180.0);
                            printf("%.2f in radians: %.2f",deg,rad);
                            break;
                        }
                        case 14:
                        {
                          int a[10],n,i;    
 
                          printf("Enter the number to convert: ");    
                          scanf("%d",&n);    
                          for(i=0;n>0;i++)    
                          {    
                           a[i]=n%2;    
                             n=n/2;    
                            }    
                            printf("Binary of Given Number is=");    
                            for(i=i-1;i>=0;i--)    
                            {    
                             printf("%d",a[i]);    
                              } 
                              printf("\n"); 
                              break;  
                        }
                    }
                }
               else if(m[i]==2)
        {
            int y;
            printf("for addition enter 1\n");
            printf("for subtraction enter 2\n");
            printf("for multiplication enter 3\n");
            printf("for division enter 4\n");
            printf("for percentage enter 5\n");
            printf("for average enter 6\n");
            printf("for square root enter 7\n");
            printf("for power enter 8\n");
            printf("for trignometry enter 9\n");
            printf("for logarithm values enter 10\n");
            printf("for converting radians to degrees enter 11\n");
            printf("for coverting degrees to radians enter 12\n");
            printf("for temperature calculation enter 13\n");
            printf("enter your choice: ");
            scanf("%d",&y);
            switch(y)
            {
                case 1:
                {
                    float a[1000]={0},k=0,sum=0;
                    printf("enter no of numbers to find sum: ");
                    scanf("%f",&k);
                    for(int i=1;i<=k;i++)
                    {
                        printf("enter %d number: ",i);
                        scanf("%f",&a[i]);
                        sum=sum+a[i];
                    }
                  printf("The sum of entered numbers: %.2f\n",sum);
                    break;
                }
                case 2:
                {
                    float b[1000],k=0,diff=0;
                    printf("enter no of numbers to find difference: ");
                    scanf("%f",&k);
                    for(int i=1;i<=k;i++)
                    {
                        printf("enter %d number: ",i);
                        scanf("%f",&b[i]);
                        if(i==1)
                        {
                            diff=b[i];
                        }
                        else
                        {
                            diff=diff-b[i];
                        }
                        }
                    printf("difference of the numbers entered: %.2f\n",diff);
                        break;
                    }
                    case 3:
                    {
                        float d[1000],k=0,pro=1;
                        printf("enter no of number to be calculated: ");
                        scanf("%f",&k);
                        for(int i=1;i<=k;i++)
                        {
                            printf("enter %d number: ",i);
                            scanf("%f",&d[i]);
                            pro=pro*d[i];
                        }
                        printf("product of numbers entered: %.2f\n",pro);
                        break;
                    }
                    case 4:
                    {
                        float divi1,divi2,q=0;
                        printf("enter dividend: ");
                        scanf("%f",&divi1);
                        printf("enter divisor: ");
                        scanf("%f",&divi2);
                        q=divi1/divi2;
                        printf("quotient is: %.2f\n",q);
                        break;
                    }
                    case 5:
                    {
                        float p1,p2;
                        float per;
                        printf("enter first number: ");
                        scanf("%f",&p1);
                        printf("enter second number: ");
                        scanf("%f",&p2);
                        per=(p1*100.0)/p2;
                        printf("percentage of is: %.2f\n",per);
                        break;
                    }
                    case 6:
                    {
                        float e[1000],k=0,sum1=0;float avg=0;
                        printf("enter no of numbers to find average: ");
                        scanf("%f",&k);
                        for(int i=1;i<=k;i++)
                        {
                           printf("enter %d number: ",i);
                           scanf("%f",&e[i]);
                           sum1=sum1+e[i];
                        }
                        avg=sum1/k;
                        printf("Average of entered numbers: %.2f\n",avg);
                        break;
                    }
                    case 7:
                    {
                      float sq,f;
                      printf("enter a number to find its square root: ");
                      scanf("%f",&f);
                      sq=sqrt(f);
                      printf("square root is: %.2f\n",sq);
                      break;
                    }
                    case 8:
                    {
                        int g;float h,power;
                        printf("enter a base number: ");
                        scanf("%d",&g);
                        printf("enter power of base: ");
                        scanf("%f",&h);
                        power=pow(g,h);
                        printf("poweris : %.2f\n",power);
                        break;
                    }
                    case 9:
                    {
                        int j;
                        printf("Enter 1 for sin\n");
                        printf("Enter 2 for cos\n");
                        printf("Enter 3 for tan\n");
                        printf("Enter 4 for cot\n");
                        printf("Enter 5 for sec\n");
                        printf("Enter 6 for cosec\n");
                        printf("Enter 7 for sinh\n");
                        printf("Enter 8 for cosh\n");
                        printf("Enter 9 for tanh\n");
                        printf("enter your choice: ");
                        scanf("%d",&j);
                        switch(j)
                        {
                            case 1:
                            {
                                int o;float r,degree,sinval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 sinval=sin(r);
                                 printf("the sin value is: %.2f\n",sinval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 sinval=sin(r);
                                 printf("the sin value is: %.2f\n",sinval); 
                                }
                                break;
                                }
                                case 2:
                            {
                                int o;float r,degree,cosval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 cosval=cos(r);
                                 printf("the cos value is: %.2f\n",cosval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 cosval=cos(r);
                                 printf("the cos value is: %.2f\n",cosval); 
                                }
                                break;
                                }
                                case 3:
                            {
                                int o;float r,degree,tanval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d\n",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 tanval=tan(r);
                                 printf("the tan value is: %.2f\n",tanval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 tanval=tan(r);
                                 printf("the tan value is: %.2f\n",tanval); 
                                }
                                break;
                                }
                                case 4:
                            {
                                int o;float r,degree,cotval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 cotval=1/tan(r);
                                 printf("the cot value is: %.2f\n",cotval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 cotval=1/tan(r);
                                 printf("the cot value is: %.2f\n",cotval); 
                                }
                                break;
                                }
                                case 5:
                            {
                                int o;float r,degree,secval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 secval=1/cos(r);
                                 printf("the sec value is: %.2f\n",secval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 secval=1/cos(r);
                                 printf("the sec value is: %.2f\n",secval); 
                                }
                                break;
                                }
                                case 6:
                            {
                                int o;float r,degree,cosecval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 cosecval=1/sin(r);
                                 printf("the cosec value is: %.2f\n",cosecval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 cosecval=1/sin(r);
                                 printf("the cosec value is: %.2f\n",cosecval); 
                                }
                                break;
                                }
                                case 7:
                            {
                                int o;float r,degree,sinhval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your choice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 sinhval=sinh(r);
                                 printf("the sinh value is: %.2f\n",sinhval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 sinhval=sinh(r);
                                 printf("the sinh value is: %.2f\n",sinhval); 
                                }
                                break;
                                }
                                case 8:
                            {
                                int o;float r,degree,coshval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your chioce: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 coshval=cosh(r);
                                 printf("the cosh value is: %.2f\n",coshval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 coshval=cosh(r);
                                 printf("the cosh value is: %.2f\n",coshval); 
                                }
                                break;
                                }
                               case 9:
                            {
                                int o;float r,degree,tanhval=0;;
                                printf("enter 1 to enter angle in radians\n");
                                printf("enter 2 to enter angle i degrees\n");
                                printf("enter your chice: ");
                                scanf("%d",&o);
                                if(o==1)
                                {
                                 printf("enter angle in radians: ");
                                 scanf("%f",&r);
                                 tanhval=tanh(r);
                                 printf("the tanh value is: %.2f\n",tanhval);
                                }
                                else 
                                {
                                    printf("enter angle in degrees: ");
                                 scanf("%f",&degree);
                                 r=degree*(M_PI/180);
                                 tanhval=tanh(r);
                                 printf("the tanh value is: %.2f\n",tanhval); 
                                }
                                break;
                                }
                                 
                            }
                            break;
                        }
                        case 10:
                        {
                            float logerithm,l;
                            printf("Enter a number to find its logerthim:");
                            scanf("%f",&l);
                            logerithm=log(l);
                            printf("logerithm of %f is:%.2f\n",l,logerithm);
                            break;
                        }
                        case 11:
                        {
                            float deg,rad;
                            printf("enter the angle in radians: ");
                            scanf("%f",&rad);
                            deg=rad*(180.0/M_PI);
                            printf("%.2f in degrees: %.2f",rad,deg);
                            break;
                        }
                        case 12:
                        {
                            float deg,rad;
                            printf("enter the angle in degrees: ");
                            scanf("%f",&deg);
                            rad=deg*(M_PI/180.0);
                            printf("%.2f in radians: %.2f",deg,rad);
                            break;
                        }
                        case 13:
                        {
                          int z;
                          printf("for converting temperature from fahrenheit to celsius enter 1\n");
                          printf("for converting temperature from  celsius to fahrenheit enter 2\n");
                          printf("enter your choice: ");
                          scanf("%d",&z);
                          switch(z)
                          {
                            case 1:
                            {
                              float fah,cel;
                              printf("enter temperature in degree fahrenheit: ");
                              scanf("%f",&fah);
                              cel=(fah-32.0)*(5.0/9.0);
                              printf("temperature in celsius: %.2fC\n",cel);
                              break;
                            }
                            case 2:
                            {
                              float fah,cel;
                              printf("enter temperature in degree celsius: ");
                              scanf("%f",&cel);
                              fah=((cel*9.0)/5.0)+32.0;
                              printf("temperature in fahrenheit: %.2fF\n",fah);
                              break;
                            }
                          }

                          break;
                        }
                    }
                }
                else
                {
                    printf("you have stopped calculation\n ");
                    printf("to calculate run program again");
                    break;
                }
            }
        }
        else 
        {
          printf("Your calculator is turned off \n");
          printf("to calculate run program again\n");
          printf("THANK YOU");
        }
   

    return 0;
}
