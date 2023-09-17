#include <stdio.h>
#include <string.h>

int main(){
    //Ex 1
    int a=0;
    printf("\nMutqagreq int : ");
    scanf("%d",&a);
    printf("a = %d",a);

    //Ex 2
    double b=0;
    printf("\nMutqagreq double : ");
    scanf("%lf",&b);
    printf("b = %lf",b);

    //Ex 3
    char c=0;
    printf("\nMutqagreq char : ");
    scanf(" %c",&c);
    printf("c=%c",c);

    //Ex 4
    int n1=0,n2=0;
    printf("\nMutqagreq 2 amboxj tiv : ");
    scanf("%d %d",&n1,&n2);
    printf("\nGumary = %d",n1+n2);

    //Ex 5
    int age=0;
    printf("\nAGE = ");
    scanf("%d",&age);
    printf("You are %d years old",age);

    //Ex 6 && Ex 7

    int x=0;
    printf("\nX=");
    scanf("%d",&x);
    printf("\n4 * x + 21 * x * x - 12 = %d",4*x+21*x*x-12);
    printf("\nx / (5 + 2) + 30 * x - 51 = %d",x/(5+2)+30*x-51);

    //Ex 8
    int y=0;
    printf("\nX=");
    scanf("%d",&x);
    printf("\nY=");
    scanf("%d",&y);
    printf("x * y + 21 * x / y - 200 = %d",x * y + 21 * x / y - 200);

    //Ex 9
    char sym;
    printf("\nInput un uppercase char :");
    scanf(" %c",&sym);
    printf("\nPoqratary: %c",sym+32);

    //Ex 10
    printf("\nInput a char (0-9) :");
    scanf(" %c",&sym);
    if(sym>=30 || sym<=39){
        printf("true");
    }
    else{
        printf("false");
    }

    //Ex 11
    char text[100];
    printf("\nSome string: ");
    int v=0,i=0;
    scanf("%s",&text);
    for(i=0;i<strlen(text);i++)
    {
    if (text[i] == 'a' || text[i] == 'A' || text[i] == 'e' || text[i] == 'E' || text[i] == 'i' || text[i] == 'I' || text[i] =='o' || text[i]=='O' || text[i] == 'u' || text[i] == 'U')
        v++;
    }
    i-=v;
    printf("\nDzaynavorner: %d , Baxadzaynner: %d",v,i);

    //Ex 12
    char tox[100];
    printf("\nInch vor bar: ");
    scanf("%s",&tox);
    int l=strlen(tox);
    int t=1;
    for(int i=0; i<l;i++){
        if(tox[i] != tox[l-i-1]){
            t=0;
            break;
        }
    }
    if(t){
        printf("\npalindrome");
    }
    else{
        printf("\nnot palindrome");
    }
    
    //Ex 13
    //(Celsius * 9/5) + 32
    double celsius=0;
    printf("\nCelsius:");
    scanf("%lf",&celsius);
    double f=(celsius * 9/5) + 32;
    printf("Fahrenheit: %lf",f);

    //Ex 14
    int age=0;
    printf("\nage=");
    scanf("%d",&age);
    if(age<18)
        printf("\nDuq anchapahas eq");
    else if(age>=18 && age<=65)
        printf("\nDuq chapahas eq");
    else
        printf("\nDu tarec qaxaqaci es");

    //Ex 15
    int score=0;
    printf("\nYour score (1-100) = ");
    scanf("%d",&score);
    if(score>=90 && score <=100)
        printf("A");
    else if(score>=80 && score<=89)
        printf("B");
    else if(score>=70 && score<=79)
        printf("C");
    else if(score>=60 && score<=69)
        printf("D");
    else if(score<60)
        printf("E");

    //Ex 16
    int hasak=0;
    printf("\nDzer hasaky: ");
    scanf("%d",&hasak);
    if(hasak>=150){
        printf("Duq hamapatasxanum eq");
    }
    else{
        printf("Duq cheq hamapatasxanumm");
    }

    //Ex 17
    printf("A && B ||  !B ^ A");
    printf("\n0 0 | %d",0 && 0 ||  !0 ^ 0);
    printf("\n0 1 | %d",0 && 1 ||  !1 ^ 0);
    printf("\n1 0 | %d",1 && 0 ||  !0 ^ 1);
    printf("\n1 1 | %d",1 && 1 ||  !1 ^ 1);

    //Ex 18
    printf("A || B && !(B || A)");
    printf("\n0 0 | %d",0 || 0 && !(0 || 0));
    printf("\n0 1 | %d",0 || 1 && !(1 || 0));
    printf("\n1 0 | %d",1 || 0 && !(0 || 1));
    printf("\n1 1 | %d",1 || 1 && !(1 || 1));

    //Ex 19
    printf("!(A && B) || A && !B || A");
    printf("\n0 0 | %d",!(0 && 0) || 0 && !0 || 0);
    printf("\n0 1 | %d",!(0 && 1) || 0 && !1 || 0);
    printf("\n1 0 | %d",!(1 && 0) || 1 && !0 || 1);
    printf("\n1 1 | %d",!(1 && 1) || 1 && !1 || 1);

    //Ex 20
    int num=0;
    printf("\nMutqagreq tiv: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("zuyg e");
    }
    else{
        printf("Kent e");
    }

    //Ex 21
    char tar;
    printf("\nMutqagre tar: ");
    scanf("%c ",&tar);
    if (tar == 'a' || tar == 'A' || tar == 'e' || tar == 'E' || tar == 'i' || tar == 'I' || tar =='o' || tar=='O' || tar == 'u' || tar == 'U'){
        printf("Dzaynavor e");
    }
    else{
        printf("Baxadzayn e");
    }

    //Ex 22
    int n1,n2;
    printf("\nMutqagreq 2 tiv: ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        printf("MAX:%d",n1);
    }
    else{
        printf("MAX:%d",n2);
    }

    //Ex 23
    int n1,n2,n3;
    printf("Mutqagreq 3 tiv: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    int max=n1;
    if(n1==n2 || n1==n3 || n2==n3){
            if (n2 > max) max = n2;
            if (n3 > max) max = n3;
            printf("MAX: %d",max);
    }

    //Ex 24
    int n1,n2,n3,n4;
    printf("Mutqagreq 4 tiv: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    int min=n1;
    if(n1+n2+n3+n4==0){
            if (n2 < min) min = n2;
            if (n3 < min) min = n3;
            if (n4 < min) min = n4;
            printf("MIN: %d",min);
    }

    //Ex 25
    int year = 0;
    printf("Year : ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("nahanj e\n");
    }
    else
    {
        printf("nahanj che\n");
    }

    //Ex 26
    int t1,t2,t3;
    printf("mutqagreq 3 tiv: ");
    scanf("%d %d %d",&t1,&t2,&t3);
    int m=t1;
    if (t2 < m) m = t2;
    if (t3 < m) m = t3;

    while(m!=0){
        if(t1%m==0 && t2%m==0 && t3%m==0) break;
        m--;
    }
    printf("Amenamec yndhanur bajanarar: %d",m);


    //Ex 27
    int k
    printf("Enter a number: ");
    scanf("%d", &k);

    if ((k & (1 << 4)) == 0) {
        k |= (1 << 4);
        printf("New Number:%d\n", k);
    } else {
        printf("Number: %d\n", k);
    }

    //Ex 28
    int a1,a2;
    printf("Mutqagreq 2 amboxj tiv :");
    scanf("%d %d",&a1,&a2);
    if(a1%a2==0){
        printf("%d-y karox e bajanvel %d-i",a1,a2);
    }
    else if(a2%a1==0){
        printf("%d-y karox e bajanvel %d-i",a2,a1);
    }
    else{
        printf("Chen karox bajanvel irar vra");
    }

    //Ex 29
    char s1,s2;
    printf("Input a char :");
    scanf(" %c",&s1);
    printf("\nInput another char :");
    scanf(" %c",&s2);
    
    if(s1+32==s2 || s1-32==s2){
        printf("Yes");
    }
    else 
    {
        printf("Not");
    }

    //Ex 30
    for(int i=0;i<=100;i++){
        printf("%d",i);
    }

    //Ex 31
    for(int i=1;i<=100;i+=2){
        printf("%d",i);
    }

    //Ex 32
    int f=0;
    while(f<=12){
        printf("Mutqagreq 12-ic mec tiv: ");
        scanf("%d",&f);
    }
    int rev=0;
    while (f > 0) {
        int digit = f % 10;
        rev = rev * 10 + digit;
        f /= 10;
    }
    printf("Reversed number: %d\n", rev);

    //Ex 33
    int num,rem,sum=0;
    printf("\nNumber = ");
    scanf("%d",&num);
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("Sum: %d",sum);

    //Ex 34
    int num, f = 0, s = 1, next;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci sequence: %d, %d, ", f, s);

    do {
        next = f + s;
        if (next <= num) {
            printf("%d, ", next);
        }
        f = s;
        s = next;
    } while (next <= num);

    //Ex 35
    int num;
    do{
        printf("Input a positive number: ");
        scanf("%d",&num);
    }while(num<=0);
    int i=0;
    while(i<10){
        printf("%d*%d=%d\n",i,num,i*num);
        i++;
    }

    //Ex 36

    int a,b,sum;
    printf("Input a number: ");
    scanf("%d",&a);
    do{
    printf("Input GREATER number: ");
    scanf("%d",&b);
    }while(b<=a);
    for(int i=a;i<=b;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("SUM:%d\n",sum);

    //Ex 37
    int q;
    printf("Mutqagreq toxeri qanaky: ");
    scanf("%d",&q);
    int k=1;
    do{
        int j=0;
        do{
            printf("%d",k);
            j++;
        }while(j<k);
        printf("\n");
        k++;
    }while(k<=q);

    //Ex 38
    int c=0;
    printf("Mutqagreq erkarutyuny koxmi: ");
    scanf("%d",&c);
    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= c; j++) {
            if (i == 1 || i == c || j == 1 || j == c) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    //Ex 39
    int q;
    printf("n=");
    scanf("%d",&q);
    int k=1;
    do{
        int j=0;
        do{
            printf("* ");
            j++;
        }while(j<k);
        printf("\n");
        k++;
    }while(k<=q);

    //Ex 40
    int mtapahvac=23;
    int mutqagrvac=0;
    do{
        printf("\nMutqagreq tivy: ");
        scanf("%d",&mutqagrvac);
        if(mutqagrvac>mtapahvac){
            printf("Mtapahvac tivy aveli poqr e");
        }
        else if(mutqagrvac<mtapahvac){
            printf("Mtapahvac tivy aveli mec e");
        }
    }while(mutqagrvac!=mtapahvac);
    printf("Apreq!");

    //Ex 41
    int num1, result, num2;
    char operation;
    printf("******************************");
    printf("\n  !!!CALCULATOR!!!   ");
    do{
    printf("\nEnter the numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nEnter the operation(+, -, /, *): ");
    scanf(" %c", &operation);
    switch (operation)
    {

    case '+':
        result = num1 + num2;
        printf("Your result is: %d", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Your result is: %d", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Your result is: %d", result);
        break;

    case '/':
        result = num1 / num2;
        printf("Your result is: %d", result);
        break;
    }
    }while(operation!='Q' && num1!='Q' && num2!='Q');

    //Ex 42-44
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    result = num1 & num2;
    printf("Result of %d & %d is %d\n", num1, num2, result);
    result = num1 | num2;
    printf("Result of %d | %d is %d\n", num1, num2, result);
    result = num1 ^ num2;
    printf("Result of %d ^ %d is %d\n", num1, num2, result);

    //Ex 45
    int num, shiftPositions, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the number of positions to shift left: ");
    scanf("%d", &shiftPositions);

    result = num << shiftPositions;

    printf("Result: %d\n", result);

    //Ex 46
    int num, z = 0, o = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int i = 0; i < sizeof(int) * 8; i++) {
        int bit = (num >> i) & 1;

        if (bit == 0) {
            z++;
        } else {
            o++;
        }
    }
    printf("Number of 0's: %d\n", z);
    printf("Number of 1's: %d\n", o);

    //Ex 47
    char inp[100];
    printf("Enter a string: ");
    scanf("%s", inp);

    int length = strlen(inp);

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    //Ex 48
    char input[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", input);

    while (input[length] != '\0') {
        length++;
    }
    printf("Length of the string is %d\n", length);

    //Ex 49
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int i = 0, j = 0;
    while (input[i] != '\0') {
        if (input[i] != ' ' && input[i] != '\t' && input[i] != '\n' && input[i] != '\r') {
            input[j] = input[i];
            j++;
        }
        i++;
    }

    input[j] = '\0';
    printf("New string: %s\n", input);

    //Ex 50
    char input[100];
    printf("Enter a string: ");
    scanf("%s",&input);
    int i=0;
    while(input[i]!='\0'){
        if(input[i]>=48 && input[i]<=57){
            printf("%c",input[i]);
        }
        i++;
    }


    return 0;
}
