float divi(float,float);
float mult(float,float);
float addi(float,float);
float subs(float,float);
long int factorial(long int);
float square(float);
double cube(float);
double squareroot(float);
float nthroot(float,float); 
int GCD(int,int);
int LCM(int,int);
void quadratic(float,float,float);
float Log10(float);
float ln(float);
float ex(float);
float determinant(float [][]);
float determinant2(float[][]);
void rodet(float);
int transpose(int [][]);
int multiplication(int [][],int [][]);
int addition(int [][],int [][]);
void copymatrix(int [][]);
void copy(float);
float roots1(float[][],float);
float roots2(float[][],float);
float root1(float[][],float);
float root2(float[][],float);
float root3(float[][],float);


double sqr,rosq,sq,cu;
float num1,b,num2,rod,ros,roa,rom,result,d,e,f,g,v,x,y,z,s,t;
int ch,c,ch3,i,j,k,h,G,num3,rog,num4,num5,gcd,lcm,m[3][3],N[3][3],n[3][3],r,roadd[3][3],romult[3][3]={0},M[3][3];
long int a,rof;
float co1,co2,co3,co4,co5,co6,co7,co8,co9,co10,co11,co12,R;
float result1,result2,result3,matrix1[2][2],matrix2[2][2];
char ch2,ch4;
float last[2][2];
float simult1[3][3],simult2[3][3],simult3[3][3],final[3][3];

main(){
 long int fact;
         float N;
         double nth,rocu; 
system("cls"); 
 
while(ch!=25){
                       
printf("\n\n\n\n\n\n");
 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb \xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb  \xdb \xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb");
 printf("\n");
 printf("\xdb        \xdb       \xdb   \xdb       \xdb   \xdb  \xdb    \xdb       \xdb    \xdb         \xdb    \xdb\n\xdb        \xdb       \xdb   \xdb       \xdb   \xdb  \xdb    \xdb       \xdb    \xdb         \xdb    \xdb\n\xdb        \xdb       \xdb   \xdb       \xdb   \xdb  \xdb    \xdb       \xdb    \xdb         \xdb    \xdb\n\xdb        \xdb       \xdb   \xdb\xdb\xdb\xdb\xdb\xdb  \xdb   \xdb  \xdb    \xdb       \xdb    \xdb\xdb\xdb\xdb      \xdb    \xdb\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb       \xdb   \xdb       \xdb   \xdb  \xdb    \xdb       \xdb    \xdb         \xdb    \xdb\n      \xdb  \xdb       \xdb   \xdb       \xdb   \xdb  \xdb    \xdb       \xdb    \xdb         \xdb    \xdb\n      \xdb  \xdb       \xdb   \xdb       \xdb   \xdb  \xdb    \xdb       \xdb    \xdb         \xdb    \xdb\n      \xdb  \xdb       \xdb   \xdb       \xdb   \xdb  \xdb    \xdb       \xdb    \xdb         \xdb    \xdb");      
 printf("\n");
 printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb \xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb   \xdb\xdb\xdb\xdb    \xdb     \xdb\xdb\xdb\xdb\xdb  \xdb       \xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb");      
 printf("\n\n\n");
  printf("          \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb  \xdb    \xdb\xdb\xdb\xdb   \xdb  \xdb  \xdb    \xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb");
  printf("\n");
  printf("          \xdb       \xdb   \xdb  \xdb    \xdb      \xdb  \xdb  \xdb    \xdb  \xdb    \xdb    \xdb  \xdb  \xdb   \xdb\n          \xdb       \xdb   \xdb  \xdb    \xdb      \xdb  \xdb  \xdb    \xdb  \xdb    \xdb    \xdb  \xdb  \xdb   \xdb\n          \xdb       \xdb   \xdb  \xdb    \xdb      \xdb  \xdb  \xdb    \xdb  \xdb    \xdb    \xdb  \xdb  \xdb   \xdb\n          \xdb       \xdb\xdb\xdb\xdb\xdb  \xdb    \xdb      \xdb  \xdb  \xdb    \xdb\xdb\xdb\xdb    \xdb    \xdb  \xdb  \xdb\xdb\xdb\xdb\xdb\xdb\n          \xdb       \xdb   \xdb  \xdb    \xdb      \xdb  \xdb  \xdb    \xdb  \xdb    \xdb    \xdb  \xdb  \xdb    \xdb\n          \xdb       \xdb   \xdb  \xdb    \xdb      \xdb  \xdb  \xdb    \xdb  \xdb    \xdb    \xdb  \xdb  \xdb    \xdb\n          \xdb       \xdb   \xdb  \xdb    \xdb      \xdb  \xdb  \xdb    \xdb  \xdb    \xdb    \xdb  \xdb  \xdb    \xdb\n");
  printf("          \xdb\xdb\xdb\xdb\xdb\xdb  \xdb   \xdb  \xdb\xdb\xdb\xdb \xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb  \xdb\xdb\xdb  \xdb  \xdb    \xdb    \xdb\xdb\xdb\xdb  \xdb    \xdb\xdb");
 
printf("\n");       
for(i=0;i<=39;i++){
printf("*-");}
printf("\nMADE BY:MEHMOOD SALEM\n");
for(i=0;i<=39;i++){
printf("*-");}
system("pause");
system("cls");

printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\xdb 1 ADDITION         \xdb\xc4\xc4\x1a\xdb 2 SUBTRACTION      \xdb\xc4\xc4\x1a\xdb 3  MULTIPLICATION  \xdb\n\xdb                    \xdb   \xdb                    \xdb   \xdb                    \xdb\n");
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
printf("         \xb3\n         \x19\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"); 
printf("\n\xdb 4 DIVISION         \xdb   \xdb 5 FACTORIAL        \xdb   \xdb 6 SQUARING         \xdb\n\xdb                    \xdb   \xdb                    \xdb   \xdb 7 SQUAREROOT       \xdb\n");
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\xDB\x38 MATRIX DETERMINANT\xDB\xc4\xc4\x1a\xdb 10 MATRIX          \xdb\xC4\xc4\x1a\xdb 11 MATRIX          \xdb\n\xdb\x39 MATRIX TRANSPOSE  \xdb   \xdb    MULTIPLICATION  \xdb   \xDB    ADDITION        \xdb\n");
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\xdb 12 GCD             \xdb   \xDB 14 SOLVING         \xdb   \xdb 15 log10           \xdb\n\xdb 13   LCM           \xdb   \xdb QUADRATIC EQUATIONS\xdb   \xdb 16 NATURAL log     \xdb");
printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\xdb 17 EXPONENTIAL     \xdb   \xdb 18 CUBING          \xdb   \xdb\x32\x30  DETERMINANT     \xdb\n\xdb        FUNCTIONS   \xDB   \xdb 19 nTH ROOT        \xdb   \xdb            OF 2X2  \xdb");
printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\xdb\x32\x31 SOLV SIMULTANEOUS\xDB\xc4\xc4\x1a\xdb\x32\x32 SOLV SIMULTANEOUS\xdb\n\xdb       TWO EQUATIONS\xdb   \xdb     THREE EQUATIONS\xdb");
printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       
       
printf("\n\n");
scanf("%d",&ch);
if(ch==1){
printf("enter two no's:");
scanf("%f%f",&num1,&num2);
 roa=addi(num1,num2);     
printf("your answer is %.3f",roa);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c'){
system("cls");
copy(roa);}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==2){
printf("enter two no's:");
scanf("%f%f",&num1,&num2);
ros=subs(num1,num2);
printf("your answer is %.3f",ros);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(ros);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==3){
printf("enter two no's:");
scanf("%f%f",&num1,&num2);
rom=mult(num1,num2);
printf("your answer is %.3f",rom);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(rom);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==4){
printf("enter two no's:");
scanf("%f%f",&num1,&num2);
rod=divi(num1,num2);
printf("your answer is %.3f",rod);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(rod);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==5){
printf("enter the number:\n");
scanf("%ld",&a);
fact=factorial(a);
printf("your ans is %ld",fact);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(fact);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==6){
printf("enter the number for squaring:\n");
scanf("%f",&v);
sq=square(v);
printf("your result is %.2lf",sq); 
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(sq);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==7){
printf("enter the number for squareroot:\n");
scanf("%f",&v);
if(v<0){
        
num1=v*(-1);
sqr=squareroot(num1);
printf("\nyour result is %.3fi\n",sqr);
}
else if(v>0){
                
sqr=squareroot(v);
printf("your result is %f",sqr);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(sqr);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
}
else if(ch==8){
     for(i=0;i<3;i++){
     for(j=0;j<3;j++){
       printf("enter the rows of the matrix:\n");
       scanf("%f",&simult1[i][j]);
       }}
       system("cls");
       printf("\n");
      printf("your matrix is:\n\n");
      for(i=0;i<3;i++){
      for(j=0;j<3;j++)
       printf("%.2f\t",simult1[i][j]);
       printf("\n");
       }
       r=determinant(simult1);
       rodet(r); 
}
else if(ch==9){
       for(i=0;i<3;i++){
       for(j=0;j<3;j++){
       printf("enter the rows of the matrix:\n");
       scanf("%d",&m[i][j]);
       }}
      system("cls"); 
      printf("your matrix is:\n");
      for(h=0;h<3;h++){
      for(G=0;G<3;G++)
      printf("%d\t",m[h][G]);
      printf("\n");
}    
     printf("your matrix transpose is:\n");
     for(h=0;h<3;h++){
     for(G=0;G<3;G++)
     printf("%d\t",m[G][h]);
     printf("\n");
}
copymatrix(m);
}
else if(ch==10){
       for(i=0;i<3;i++){
       for(j=0;j<3;j++){
       printf("enter the rows of first the matrix:\n");
       scanf("%d",&m[i][j]);
       }}
        printf("\n\n");
       for(k=0;k<3;k++)
{
       for(h=0;h<3;h++)
{
       printf("enter the rows of second the matrix:\n");
       scanf("%d",&n[k][h]);
}}
romult[3][3]=multiplication(m,n);
printf("your multiplication of two matrix is:\n");
       printf("\n");
       for(h=0;h<3;h++){
       for(G=0;G<3;G++)
       printf("%d\t",romult[h][G]);
       printf("\n");
       }
       copymatrix(romult);     
}          
else if(ch==11){
       for(i=0;i<3;i++){
       for(j=0;j<3;j++){
       printf("enter the rows of first the matrix:\n");
       scanf("%d",&m[i][j]);
       }}
        printf("\n\n");
       for(k=0;k<3;k++)
{
       for(h=0;h<3;h++)
{
       printf("enter the rows of second the matrix:\n");
       scanf("%d",&n[k][h]);
}}
       roadd[3][3]=addition(m,n);
       printf("your addition of two matrix is:\n");
       printf("\n");
       for(h=0;h<3;h++){
       for(G=0;G<3;G++)
       printf("%d\t",roadd[h][G]);
       printf("\n");
       } 
copymatrix(roadd);    
}
else if(ch==12){
printf("enter two no's:");
scanf("%d%d",&num3,&num4);
h=GCD(num3,num4);
printf("your G.C.D is %d",h);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(h);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}  
else if(ch==13){
printf("enter two numbers\n");
scanf("%d%d",&num3,&num4);
h=LCM(num3,num4);
printf("your L.C.M is %d",h);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(h);
}
else if(ch2=='n' || ch2=='N'){
     system("cls");
main();
}
}
else if(ch==14){
printf("enter the expression in terms of ax2+bx+c=0:\n");
       printf("enter the coffecient of x2\n");
       scanf("%f",&x);
       printf("enter the coffecient of x\n");
       scanf("%f",&y);
       printf("enter the constant term\n");
       scanf("%f",&z);
       quadratic(x,y,z);
}
else if(ch==15){
printf("enter the number for Log10\n");
scanf("%f",&num1);
result=Log10(num1);
printf("your result is %f",result);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C')
{
system("cls");
copy(result);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==16){
printf("enter the number for Ln\n");
scanf("%f",&num1);
result=ln(num1);
printf("your result is %f",result);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(result);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}}
else if(ch==17){
printf("enter the value of x\n");
scanf("%f",&num1);
result=ex(num1);
printf("your result is %f",result);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(result);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==18){
     
printf("enter the number for cubing:\n");
scanf("%f",&v);
cu=cube(v);
 printf("your result is %.2lf",cu);
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(cu);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==19){

printf("enter the number for root like 3rdroot,4throot,5throot:\n");     
scanf("%f",&N);
printf("enter the number for %.froot:\n",N);
scanf("%f",&v);
nth=nthroot(N,v);
printf("your result is %.5lf",nth); 
printf("\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(nth);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else if(ch==20){
     
       for(i=0;i<2;i++){
       for(j=0;j<2;j++){
       printf("enter the rows of first the matrix:\n");
       scanf("%f",&matrix1[i][j]);
}}     
       R=determinant2(matrix1);
     rodet(R);
             
}
else if(ch==21){
     printf("enter the coffecients of eq1 in terms of aX+bY=C\n");   
    printf("enter the cofficient of X:\n");     
    scanf("%f",&co1);   
    printf("enter the cofficient of Y:\n");
    scanf("%f",&co2);
    printf("enter constant term:\n");   
    scanf("%f",&co3);   //
    printf("enter the coffecients of eq2 in terms of aX+bY=C\n");    
    printf("enter the cofficient of X:\n");
    scanf("%f",&co4);   
    printf("enter the cofficient of Y:\n");
    scanf("%f",&co5);
    printf("enter constant term:\n"); 
    scanf("%f",&co6);   //
  
  system("cls");
  
    printf("\n\nyour 1st Eq is:\n(%.2f)X+(%.2f)Y=%.2f  \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4(i)\n",co1,co2,co3); 
    printf("\nyour 2nd Eq is:\n(%.2f)X+(%.2f)Y=%.2f  \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4(ii)\n",co4,co5,co6); 
   
     
    last[0][0]=co1; 
    last[0][1]=co2;
    last[1][0]=co4;
    last[1][1]=co5;
    
      R=determinant2(last);
    
    if(R==0){
      printf("\n\nBUT, your roots are immaginary\n");
      }
      else{
    matrix1[0][0]=co3; 
    matrix1[0][1]=co2;
    matrix1[1][0]=co6;
    matrix1[1][1]=co5;
    
  
    matrix2[0][0]=co1; 
    matrix2[0][1]=co3;
    matrix2[1][0]=co4;
    matrix2[1][1]=co6;
    
 
   result1=roots1(matrix1,R);
   result2=roots2(matrix2,R);
   printf("\n\nyour first root is %.3f\n\n",result1); 
   printf("your second root is %.3f\n\n",result2);           
}
} 
else if(ch==22){
   printf("enter the coffecients of eq1 in terms of aX+bY+cZ=D\n");   
    printf("enter the cofficient of X:\n");     
    scanf("%f",&co1);   
    printf("enter the cofficient of Y:\n");
    scanf("%f",&co2);
     printf("enter the cofficient of Z:\n");
    scanf("%f",&co3);
    printf("enter constant term:\n");   
    scanf("%f",&co4);            ///////////
    printf("enter the coffecients of eq2 in terms of aX+bY+cZ=D\n");    
    printf("enter the cofficient of X:\n");
    scanf("%f",&co5);   
    printf("enter the cofficient of Y:\n");
    scanf("%f",&co6);
    printf("enter the cofficient of Z:\n");
    scanf("%f",&co7);
    printf("enter constant term:\n"); 
    scanf("%f",&co8);          ///////////
    printf("enter the coffecients of eq3 in terms of aX+bY+cZ=D\n");    
    printf("enter the cofficient of X:\n");
    scanf("%f",&co9);   
    printf("enter the cofficient of Y:\n");
    scanf("%f",&co10);
    printf("enter the cofficient of Z:\n");
    scanf("%f",&co11);
    printf("enter constant term:\n"); 
    scanf("%f",&co12);        ///////////
    
    system("cls");
    printf("\n\nyour 1st Eq is:\n(%.2f)X+(%.2f)Y+(%.2f)Z=%.2f  \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4(i)\n",co1,co2,co3,co4); 
    printf("\nyour 2nd Eq is:\n(%.2f)X+(%.2f)Y+(%.2f)Z=%.2f  \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4(ii)\n",co5,co6,co7,co8); 
    printf("\nyour 3rd Eq is:\n(%.2f)X+(%.2f)Y+(%.2f)Z=%.2f  \xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4(iii)\n",co9,co10,co11,co12); 

        final[0][0]=co1;
        final[0][1]=co2;
        final[0][2]=co3;
        final[1][0]=co5;
        final[1][1]=co6;
        final[1][2]=co7;
        final[2][0]=co9;
        final[2][1]=co10;
        final[2][2]=co11;             
       
      R=determinant(final);
      if(R==0){
      printf("your roots are immaginary");
      }
      else
      {
      simult1[0][0]=co4;     
      simult1[0][1]=co2;
      simult1[0][2]=co3;
      simult1[1][0]=co8;
      simult1[1][1]=co6;
      simult1[1][2]=co7;
      simult1[2][0]=co12;
      simult1[2][1]=co10;
      simult1[2][2]=co11;
      
      simult2[0][0]=co1;     
      simult2[0][1]=co4;
      simult2[0][2]=co3;
      simult2[1][0]=co5;
      simult2[1][1]=co8;
      simult2[1][2]=co7;
      simult2[2][0]=co9;
      simult2[2][1]=co12;
      simult2[2][2]=co11;
      
      simult3[0][0]=co1;     
      simult3[0][1]=co2;
      simult3[0][2]=co4;
      simult3[1][0]=co5;
      simult3[1][1]=co6; 
      simult3[1][2]=co8;
      simult3[2][0]=co9;
      simult3[2][1]=co10; 
      simult3[2][2]=co12;
      
      result1=root1(simult1,R);
      result2=root2(simult2,R);
      result3=root3(simult3,R);
      
      printf("\n\nyour first root is %.3f\n\n",result1);
      printf("your second root is %.3f\n\n",result2);
      printf("your third root is %.3f\n\n",result3);               
}  
}             
else{
printf("you type wrong number:\n");
system("pause");
system("cls");
main();
}
}
getche();

}

float addi(float num1,float num2){
    
      roa=num1+num2;
return roa;
}
float subs(float num1,float num2){
      
      ros=num1-num2;
return ros;
}
float mult(float num1,float num2)
{     
      rom=num1*num2;
return rom;
}
float divi(float num1,float num2)
{    
      rod=(num1/num2);
return rod;
}
long int factorial(long int a){
 long int fact=1;
 
 
 
       
if(a==0)
{
return 1;
}
else
{
for(i=a;i>0;i--){
fact=fact*i;
}
return fact;
}
}
float square(float v)
{
      
    rosq=(v*v);

    return rosq;
}
double cube(float V){
      double rocu;
      
      rocu=(V*V*V);
      
      return rocu;
}
double squareroot(float v){
      float e;
           
       sqr=sqrt(v);
       return sqr;
}

float nthroot(float N,float V){
      float ronth;
      
      ronth=exp(log(V)/N);
      
      return ronth;
}         
int GCD(int a,int b){
    
    for(i=0;i<b;i++)
       {
       if(b>a)
       b=b-a;
   if(a==b){         
     return b; 
  break; 
  }
} 
for(j=0;j<a;j++)
{       
        if(a>b){
       a=a-b;
      
      if(a==b){
       return b;  
break;
}
}           
}
}   
int LCM(int a ,int b){
      int p,j,q,y;     
     p=a;
     q=b;
       for(i=0;i<b;i++)
       {
       if(b>a)
       b=b-a;
   if(a==b){
   y=(p*q)/(b);         
   return y;   
  break;}
}
for(j=0;j<a;j++)
{       
      if(a>b){
      a=a-b;
      if(a==b){
    y=(p*q)/(b);         
   return y;
}}
   }
   if(a!=b){
  k=p*q;
  return k;
}   
}  
void quadratic(float x,float y,float z){
 float a,b;
 
s=(-y+sqrt((y*y)-(4*x*z)))/(2*x);
t=(-y-sqrt((y*y)-(4*x*z)))/(2*x);

if((y*y)<(4*x*z)){
       a=2*x; 
       b=(y*y)-(4*x*z);
       printf("your roots are: \n\n-%.1f+sqrt(%.1f)/%.1f",y,b,a); 
       printf("\n\n-%.1f-sqrt(%.1f)/%.1f\n\n",y,b,a);
       printf("and your roots are imaginary\n");
}
else if(s==t){
       printf("your root is %.2f",s);
}
else {
printf("your roots are %.2f and %.2f\n",s,t);
}
} 
float Log10(float num1){      
      float result;
   result=log10(num1);
return result;
}
float ln(float num1){
     float result;
   result=log(num1);               
return result;
}
float ex(float num1){
float result;   
   result=exp(num1);
return result;
}
float determinant(float a[3][3])
{
    
   

b=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
i=a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
j=a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
r=b-i+j;
      
return r;
}
void rodet(float r){
     char ch2;
printf("\nyour det is %.3f\n",r);

      if(r==0.0){
      printf("your matrix is a singular matrix\n");
      printf("\n\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(r);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
else{
      printf("your matrix is a non-singular matrix\n");
printf("\n\nif you want to copy this number press c:\nif you want to enter new no's press N\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(r);
}
else if(ch2=='n' || ch2=='N'){
system("cls");
main();
}
}
}
float determinant2(float matrix[2][2])
{
float x;
         
x=(matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);

return x;
}      
float roots1(float matrix1[2][2],float r){
   float y,x;   
      
x=determinant2(matrix1);   
   
y=x/r;

return y;      
}      
float roots2(float matrix2[2][2],float r){ 
   float z,y;       
z=determinant2(matrix2);   
   
y=z/r;       
return y;              
}       
int addition(int m[3][3],int n[3][3]){
   
      
      system("cls");
       printf("\n");
      printf("your first matrix is:\n");
      for(i=0;i<3;i++){
      for(j=0;j<3;j++)
       printf("%d\t",m[i][j]);
       printf("\n");
       }
      printf("\n");
       printf("your second matrix is:\n");
       
       for(i=0;i<3;i++){
       for(j=0;j<3;j++)
       printf("%d\t",n[i][j]);
       printf("\n");
       }
       printf("\n");
       for(i=0;i<3;i++){
       for(j=0;j<3;j++)
       {
       roadd[i][j]=m[i][j]+n[i][j];
       }
       }
       return roadd[3][3];      
}  
int multiplication(int m[3][3],int n[3][3]){
      

system("cls");
      printf("\n");
      printf("your first matrix is:\n");
      for(i=0;i<3;i++){
      for(j=0;j<3;j++)
       printf("%d\t",m[i][j]);
       printf("\n");
       }
      printf("\n");
       printf("your second matrix is:\n");
       
       for(i=0;i<3;i++){
       for(j=0;j<3;j++)
       printf("%d\t",n[i][j]);
       printf("\n");
       }
printf("\n");

for(i=0;i<3;i++){
       for(j=0;j<3;j++)
       {
       for(k=0;k<3;k++)
       romult[i][j]=romult[i][j]+(m[i][k]*n[k][j]);
}
}       
       return romult[3][3];       
}
float root1(float n[3][3],float a){
float d,root1;
int i,j;

d=determinant(n);
root1=d/a;

return root1;
}
float root2(float o[3][3],float a){

float m,n;  
  
m=determinant(o);
n=m/a; 

return n ;
}
float root3(float p[3][3],float a){

float x,y;  
  
x=determinant(p);
y=x/a; 

return y;
}       
       
       
       
       
       
void copymatrix(int romatrix[3][3]){
   int g,h;

printf("\n\nwhat you can do for this matrix\nenter\n");
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\n\xDB 1 MATRIX TRANSPOSE \xDB\xc4\xc4\x1a\xdb 3  MATRIX          \xdb\xC4\xc4\x1a\xdb 4 GO BACK          \xdb\n\xdb 2 MATRIX  ADDITION \xdb   \xdb     MULTIPLICATION \xdb   \xDB                    \xdb\n");
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
scanf("%d",&ch);
if(ch==1){
system("cls");                
printf("your matrix is:\n");
for(h=0;h<3;h++){
for(g=0;g<3;g++)
     printf("%d\t",romatrix[g][h]);
     printf("\n");
}
printf("your matrix transpose is:\n");
for(h=0;h<3;h++){
for(g=0;g<3;g++)
     printf("%d\t",romatrix[h][g]);
     printf("\n");
}     
copymatrix(romatrix);
}                    
else if(ch==2){
for(k=0;k<3;k++)
{
for(h=0;h<3;h++)
{
       printf("enter the rows of second the matrix:\n");
       scanf("%d",&n[k][h]);
       
}}  
roadd[3][3]=addition(romatrix,n);
printf("your addition of two matrix is:\n");
for(h=0;h<3;h++){
     for(g=0;g<3;g++)
       printf("%d\t",roadd[h][g]);
       printf("\n");            
}
copymatrix(roadd);
}       
else if(ch==3){
               
for(k=0;k<3;k++)
{
       for(h=0;h<3;h++)
{
       printf("enter the rows of second the matrix:\n");
       scanf("%d",&n[k][h]);
       
}}
romult[3][3]=multiplication(romatrix,n);
printf("your multiplication of two matrix is:\n");
for(h=0;h<3;h++){
     for(g=0;g<3;g++)
       printf("%d\t",romult[h][g]);
       printf("\n");            
}
copymatrix(romult);
}
else if(ch==4){
     main();
}
}
void copy(float c){
     double rocu;
     char ch2;
     float nth,n;
     
printf("\n\nwhat can you do for this number %.2f\nenter\n",c);
printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("\n\xdb 1 ADDITION         \xdb\xc4\xc4\x1a\xdb 2 SUBTRACTION      \xdb\xc4\xc4\x1a\xdb 3  MULTIPLICATION  \xdb\n\xdb                    \xdb   \xdb                    \xdb   \xdb                    \xdb\n");
       printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
       printf("         \xb3\n         \x19\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"); 
       printf("\n\xdb 4 DIVISION         \xdb   \xdb 5 FACTORIAL        \xdb   \xdb 6 SQUARING         \xdb\n\xdb                    \xdb   \xdb                    \xdb   \xdb 7 SQUAREROOT       \xdb\n");
       printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");  
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("\n\xdb 8 GCD              \xdb   \xdb 10 log10           \xdb   \xdb 12 EXPONENTIAL     \xdb\n\xdb 9    LCM           \xdb   \xdb 11 NATURAL log     \xdb   \xdb                    \xdb");
       printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");      
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("\n\xdb 13 CUBING          \xdb\xc4\xc4\x1a\xdb 14 nTH ROOT        \xdb\n\xdb                    \xDB   \xdb                    \xdb");
       printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
       printf("\n\n");
       
       printf("\n\n");
scanf("%d",&ch3);
if(ch3==1){
printf("enter the number:\n");
scanf("%f",&b);
roa=addi(c,b);
printf("your ans is %.2f",roa);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(roa);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==2)
{
printf("enter the number:\n");
scanf("%f",&d);
ros=subs(c,d);
printf("your ans is %.3f",ros);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(ros);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==3){
printf("enter the number:\n");
scanf("%f",&e);
rom=mult(c,e);
printf("your ans is %.3f",rom);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(rom);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==4)
{
printf("enter the number:\n");
scanf("%f",&f);
rod=divi(c,f);
printf("your ans is %.3f",rod);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(rod);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==5)
{
rof=factorial(c);
printf("your ans is %ld",rof);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(rof);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==6)
{
rosq=square(c);
printf("your result is %.2lf",rosq);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(rosq);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==7)
{
     if(c<0){
        
num1=c*(-1);
sqr=squareroot(num1);
printf("\nyour result is %.3fi\n",sqr);
}
else if(c>0){     
sqr=squareroot(c);
printf("your result is %.2lf",sqr);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(sqr);
}     
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
}
else if(ch3==8){
printf("enter the number for finding the G.C.D\n");
scanf("%d",&num5);
gcd=GCD(num5,c);
printf("your result is %d",gcd);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(gcd);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==9){
printf("enter the number for finding the l.C.M\n");
scanf("%d",&num5);
lcm=LCM(num5,c);
printf("your result is %d",lcm);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(lcm);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==10)
{
result=Log10(c);
printf("your answer is %f",result);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(result);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==11)
{
result=ln(c);
printf("your answer is %f",result);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(result);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==12)
{
result=ex(c);
printf("your answer is %f",result);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(result);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==13){

rocu=cube(c);
printf("your result is %.2lf",rocu);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(rocu);
}
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}
else if(ch3==14){

printf("\nenter the number for root like 3rdroot,4throot,5throot:\n");
scanf("%f",&n);
nth=nthroot(n,c);
printf("\nyour result is %.3f",nth);
printf("\nif you want to again copy this number press c:\n");
printf("if you want to enter the new no's press 'N'\n");
ch2=getche();
if(ch2=='c' || ch2=='C'){
system("cls");
copy(nth);
}     
else if(ch2=='N' || ch2=='n'){
     system("cls");
     main();
}
}      
}
