#include<stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
void  reserve(char arr[], int size){
	int left = 0;
	
	int right = size - 1;
	while(left<right){
		int tep = arr[left];
		arr[left] = arr[right];
		arr[right] = tep;
		++left;
		--right;
	}

}

void  reserve_size(char arr[],int str, int end){
	while (str < end&&arr[end]!='\0'){
		end++;
		if (end == ' '){
			int tep = arr[str];
			arr[str] = arr[end];
			arr[end] = tep;
			++str;
			--end;

		}
		str = end;
	}
}
int main(){
	int i = 0;
	int size = 0;
	char arr[] = "student a am i";
	size = (sizeof(arr) / sizeof(arr[0]));
	reserve( arr,  size);
	int str = 0;
	int end = 0;
	reserve_date(arr, str, end);
	for (i = 0; i < size; i++){
		printf("%c", arr[i]);
	}


	system("pause");
}


不使用（a+b）/2这种方式，求两个数的平均值。
#include<stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
int main(){
	int a = 0;
	int b = 0;
	int  c = 0;
	printf("请输入两个数：");
		scanf("%d %d", &a, &b);
		c = (a + b) >> 1;
	    //c = (( a &  b) + (a^b) >> 1);
        //c=a+(a-b)>>1;
		printf("%d", c);
		system("pause");
}
*/


/*
#include<stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
unsigned int reverse_bit(unsigned int x){
	unsigned int a = 0;
	 int b = 0;
	for (int i = 0; i < 32; i++){

		a = x & 1;
		x = x >> 1;
		b = b+(a << (31 - i));
	}
	return b;
}

int main(){
	int a = 0;
	scanf("%d", &a);
	printf("%u", reverse_bit(a));
	system("pause");
}
*/
/*unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制位模式从左到右翻转后的值。

如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
2550136832*/
/*
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
unsigned int reverse_bit(unsigned int value){
	unsigned int result = 0;
	int num = 0;	
	int bit = 0;	
	while (num <32)	{
		bit = value & 1;//取出最低位	
		value >>= 1;//右移一位，	
		result += bit<<(31-num);  //32位（ 0 到 31）
		num++;
	}	
	return result;
}
int main(){

	printf("%u", reverse_bit(25));
	system("pause");
}
*/


/*.
在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int main(){
	int i = 0;
	int j = 0;
	int k = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++){
		arr[i][0] = 1;

		arr[i][i] = 1;
	}

	for (i = 2; i < 10; i++){
		for (j = 1; j < 10; j++){
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i <10; i++){
		for (k = 0; k < 10 - i; k++){

			printf(" ");
		}
		for (j= 0; j<= i; j++){
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	system("pause");
}
*/

/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
嫌疑犯的一个。以下为4个嫌疑犯的供词。
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/
/*
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int main(){
	char kiler;
	for (kiler = 'A'; kiler <= 'D'; kiler++){
		if (((kiler != 'A') + (kiler == 'C') + (kiler != 'D') + (kiler == 'D')) == 3){

			printf("kiler是%c ", kiler);
		}
	}
	
	system("pause");
	return 0;

}
*/


/*两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int reverse_bit(unsigned int a){
	int i = 0;
	for (i = 0; i<= 31; i++){
		printf("%d", (a>> i) & 1);

	}
	return 0;
}
int main(){
	unsigned int a = 0;
	scanf("%d", &a);
    reverse_bit(a);
	system("pause");
	return 0;
}*/
/*

int main(){
	int a = 0;
	int b = 0;
	int i = 0;
	int count = 0;

	scanf("%d %d", &a, &b);
	for (i = 0; i < 32; i++){
		if (((a >> i) & 1) !=( (b >> i) & 1)){
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
*/


/*
int main(){
	int a = 0;
	scanf("%d", &a);
	while (a){
		if (a < 0){
			a = -a;
		}
			printf("%d \n", a % 10);
			a = a / 10;
	}
	system("pause");
	return 0;
}
*/
/*


#include <stdio.h>  
#pragma warning (disable:4996)
int main()
{
	int num = 0, i = 0;
	scanf("%d", &num);
	printf("奇数序列为：");
	for (i = 31; i >= 0; i -= 2)  //也是控制32次（每个整型数按32位来算），只是从31位开始移动   
	{     

		printf("%d ",(num>>i)&1); //第一次向右移动31位和1与得到第一位情况，每次变化2位，即可得到奇数位情况    
}  

	printf("\n");    
printf("偶数序列为：");  
for (i = 30; i >= 0; i -= 2)  //向右移动30位，再与1所得结果是原来数字的第二位，再移28位...   
{     
	printf("%d ",(num>>i)&1);   
}     
printf("\n");   
return 0;  
}  
*/

/*

#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int get_date (unsigned int x)
{
	int i = 0;
	printf("奇数进制序列：");
	for (i = 30; 0<=i; i-=2){
		
			printf("%d", (x >> i) & 1);
	}
	return 0;
}
int get_date2(unsigned int x)
{
	int i = 0;
	printf("偶数二进制序列：");
	for (i = 31; 1<=i; i -= 2){

		printf("%d", (x >> i) & 1);
	}
	return 0;
}


int main(){
	unsigned int a = 0;
	scanf("%d", &a);
	get_date(a);
	get_date2(a);
	system("pause");
	return 0;
}*/
/*

void  init(int arr[10]){
	int i = 0;
	for (i = 0; i < 10; i++){
	    arr[i] = i;
		printf("%d", arr[i]);
	}
}
void empty(int arr[10]){
	int i = 0;
	for (i = 0; i < 10; i++){
		arr[i] = 0;
		printf("%d", arr[i]);
	}
}
void reverse(int arr[10]){
		int left = 0;
		int right =9;
		int i = 0;
		for (i = 0; i < 10; i++){
			while (left < right){

			int temp= arr[right];
				arr[right] = arr[left];
				arr[left] = temp;
				left++;
				right--;
			}
			printf("%d", arr[i]);
	}
}
int main(){
	int j = 0;
	printf("输入1，数组填充，2：数组倒置，3：数组清空");
	printf("\n");
	printf("请选择：");
	scanf("%d", &j);
	int arr[10] = { 0 };

		switch (j){
		case 1:
			init(arr);
			printf("\n");
			break;
		case 2:
			init(arr);
			printf("\n");
			reverse(arr);
			break;
		case 3:
			empty(arr);
			printf("\n");
			break;
		default:
			break;
		}
	system("pause");
	return 0;
}*/
/*
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#pragma warning(disable:4996)
void table(int x, int y, int num){
	for (x = 1; x <= num; x++){
		for (y = 1; y <= x; y++){

			printf("%d*%d=%d", x, y, x*y);
			printf(" ");
		}
		printf("\n");
	}
}
int main(){
	int x = 0;
	int y = 0;
	int num = 0;
	scanf("%d", &num);
	table(x, y, num);
	system("pause");
}
*/
/*

int count_one_bits(unsigned int x)
{
	int i = 0;
	int count = 0;
	while (x){
		x = x&(x - 1);
		count++;
	}
	printf("%d", count);
	return 0;
}
int main(){
	unsigned int a = 0;
	scanf("%d", &a);
	count_one_bits(a);
	system("pause");
	return 0;
}
*/

/*
void Swap1(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
int main(){
	int a = 1;
	int b = 2;
    Swap1(&a,&b);
	printf("num1=%d  num2=%d", a, b);
	system("pause");
	return 0;
}*/
/*
int main(){
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑即将关闭，输入00，取消关闭");
		scanf("%s", input);
		if (0 == strcmp(input, "00")){
			system("shutdown -a");
			break;
		}
	}
	return 0;
}*/
/*
int main(){
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	to :
		printf("电脑即将关机，输入00，就取消关机");
	scanf("%s", input);
	if (0 == strcmp(input, "00")){
		system("shutdown -a");
	}
	else{
		goto to;
	}
	return 0;
}
*/
	/*
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= 11; ++i){
		
			if (i % 2 != 0){
				for (k = 6; k = 6-i+1;){
					printf(" ");
				}
				for (j = 1; j <= i; ++j){
					printf("*");
				}
				printf("\n");
		}
	}
	system("pause");
}*/

/*
int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right){
		mid = (left + right) >> 1;
		if (arr[mid] > key){
			right = mid - 1;
		}
		else if (arr[mid] < key){
			left = mid + 1;
		}
		else{
			printf("%d\n", mid);
			break;
		}
	}
	return -1;
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	scanf("%d", &key);
	bin_search(arr, left, right, key);
	system("pause");
}
*/
/*
void SwapArray(int*array1, int*array2, int N){

}
int main()
{
	return 0;
}*/
	/*int ch = 0;
	printf("请输入一个字符:\n");
	while ((ch = getchar()) != EOF)//从键盘中获取一个字符，其ASCII代码值赋给ch且ch！=（-1）可进行while循环
	{
		if (ch >= 'a'&&ch <= 'z')//ch在97到122之间，也就是说输入的是小写字母
		{
			printf("%c\n", ch - 32);//小写字母的ASCII代码值=大写字母的ASCII代码值+32
		}
		else if (ch >= 'A'&&ch <= 'Z')//ch在65到90之间，也就是说输入的是大写字母
		{
			printf("%c\n", ch + 32);
		}
		else if (ch >= '0'&&ch <= '9')//ch在48到57之间，也就是说输入数字
		{
			;//不做处理可以单独写一个分号
		}
		else//当输入其他非所需字符也不做处理
		{
			;
		}
	}
	return 0;
}*/
/*int main(){
	int i = 0;
	char psw[10] = "";
	int j = 3;
	for (i = 0; i <3; ++i){
		printf("输入密码：\n");
		scanf("%s", psw);
		if (strcmp(psw, "123") == 0){
			break;
		}
	}
	if (i == 3)
		printf("退出");
	else
		printf("输入对了");
	system("pause");
}*/
/*
int bin_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right){
		mid = (left + right) >>1;
		if (arr[mid] > key){
			right = mid-1;
		}
		else if (arr[mid] < key){
			left = mid+1;
		}
		else
			break;
	}
		 if(left<=right) {
			printf("找到了，下标为%d\n", mid);
		}
		else{
			return -1;
		}

}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	scanf("%d", &key);
	bin_search(arr, left,right, key);
	system("pause");
}*/
/*
int main(){
	int M = 0;
	int N = 0;
//最大公约数（假设M>N）
	scanf("%d %d", M, N);
if (M%N == 0){
	printf("最大公约数是:%d" , N);
}*/
/*
else{
	for (int i = 1; i<N; i++){
		for (int j = i + 1; j<N; j++){
			//i是公约数，并且没有比他再大的公约数
			if ((M%i == 0 && N%i == 0) && (M%j != 0 && N%j != 0)){
				printf("%d",i);
			}
		}
	}
}*/
		
			/*
int findDate(int x, int y)
{
	while (x*y != 0)
	{
		if (x > y){
			x %= y;
		}
		else if (x < y){
			y %= x;
		}
	}
	if ((x %= y) == 0)
	{
		return y;
	}
	else if ((y %= x) == 0)
	{
		return x;
	}
}
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d %d\n", x, y);
	int ret = findDate(x, y);
	printf("  date=%d\n", ret);
	system("pause");
	return 0;
}

*/

/*
void menu(){
	printf("*****************************\n");
	printf("******** 1.play *************\n");
	printf("******** 0.exit *************\n");
	printf("*****************************\n");
}
void game(){
	int random_num = rand() % 100 + 1;//將随机数控制在0~100之间
	int input = 0;
	while (1){
		printf("请输入你猜的数字:\n");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("输入大了\n");
		}
		else if (input < random_num){
			printf("输入小了\n");
		}
		else if (input = random_num){
			printf("输入对了\n");
		}
	}
}
int main(){
	int input = 0;
	srand((unsigned)time(NULL));
	//如果srand每次输入的数值是一样的，那么每次运行产生的随机数也是一样的，
	//以一个固定的数值作为种子是一个缺点。
	//通常的做法是  以这样一句代码srand((unsigned) time(NULL));来取代，这样将使得种子为一个不固定的数，
	//这样产生的随机数就不会每次执行都一样了。

	printf("请选择>:\n");
	do{
		menu();
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误重新选择>\n");
			break;
		}	
	} while (input);
	system("pause");
	return 0;
}
*/
	/*
	int a, i = 0;
	printf("请输入源代码：\n");
	while ((a = getchar()) != EOF)
	{
		if (a == '{')
		{
			i++;
		}
		else if (a == '}' && i == 0)
		{
			printf("花括号不成对出现\n");
		}
		else if (a == '}' && i != 0)
		{
			i--;
		}
	}
	if (i > 0)
	{
		printf("花括号不成对出现\n");
	}
	else
	{
		printf("花括号成对出现\n");
	}
	*/
	/*
	int i = 0;
	int a = 0;
	int sum = 0;
	int sn = 0;
	scanf("%d", &a);
	for (i = 0; i <= 4; i++)
	{
		sum = sum + a*pow(10, i);//其中pow(x,y);//其作用是计算x的y次方，x、y及函数值都是double型 。
		sn = sn + sum;
	}
	printf("%d", sn);
	*/
	/*
	int a = 0;
	int Sn = 0;
	scanf("%d", &a);
	Sn = a + a * 10 + a + a * 100 + a * 10 + a + a * 1000 + a * 100 + a * 10 + a + a * 10000 + a * 1000 + a * 100 + a * 10 + a;
	printf("%d", Sn);
	*/

	/*
	int i = 0;
	int j = 0;
	int c = 0;
	int y = 0;
	for (i = 1; i < 10; i++){
		for (j = 0; j < 10; j++){
			for (c = 0; c < 10; c++){
				if (pow(i, 3) + pow(j, 3) + pow(c, 3) == i * 100 + j * 10 + c)
				{
					y = i * 100 + j * 10 + c;
					printf("%d\n", y);
				}
			}
		}
	}
	*/
	/*
	int i = 0;
	int first = 0;
	int second = 0;
	int third = 0;
	for (i = 10; i<=999; i++)
	{
		first = i / 100;
		second = i % 100 / 10;
		third = i % 100;

		if (i == (first*first*first + second*second*second + third*third*third))
		{
			printf("%d", i);
		}

	}*/
	/*
	
	int a[10];
	long long *first = &a[3];
	long long *second = &a[9];
	printf("%d", second - first);
	*/
	/*
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int key = 7;
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid-1 ;
		}
		else if (arr[mid] < key)
		{
			left = mid+1 ;


		}
		else
			break;

	}
	if (left <= right)
	{
		printf("%d\n", mid);
	}
	else
		printf("找不到");*/
	/*
	// 计算n的阶乘相加
	int i = 1;
	int sum = 1;
	int c = 0;
	do{
		sum = sum*i;
		c = c + sum;
		i++;
	} while (i <10);
	printf("%d\n", sum);
	printf("%d\n", c);

	*/

	/*char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i){
		printf("请输入：>");
		scanf("%s", psw);
		if (strcmp(psw, "wang") == 0){

			break;
		}
		if (i == 3){
			printf("exit\n");

		}
		else{
			printf("log in\n");
		}
	}
	*/

	/*char arr1[] = "asghshdhhsdhhgh";
	char arr2[] = "###############";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);*/
	/*
	while (left <= right){
		Sleep(2000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}*/
	//for循环
	/*for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
	}*/


/*#include <stdio.h>
#include <stdlib.h>
int main(){

	int i = 0;
	int k= 0;
	for (i = 0, k = 0; k = 0; i++, k++){
		k++;
		printf("%d", k);
		system("pause");
		return 0;
	}
*/
	/*int x;
	int y;
	for (x=0,y=0;x<2,y<4;++x,y++){//逗号表达式最终结果依据最后一个逗号

		printf("heheh\n");
	}
	/*int ch = 0;
	while ((ch = getchar())!= EOF)
		putchar(ch);
	return 0;*/

/*
#include <stdio.h>
int main(){
	int i = 1;
	int j = 1;
	for (i = 1; i <= 30; i += 2){
		if (i <= 15){
			for (j = 1; j <= i; j++){
				printf("*");
			}
			printf("\n");
			printf("\n");
		}
		if (i > 15){
			for (j = i; j < 30; j++){

				printf("*");
			}
			printf("\n");

			printf("\n");
		}
	}
	system("pause");
}*/
/*int i = 0;
	while (i <= 10){
		i = i + 1;
		if (i == 5)
			continue;//break; continue 是终止本次循环的，后面代码不执行，直接跳到while判断部分，进行下次循环。break是永久终止
		printf("%d", i);


	}
	*/
/*	int i = 0;
	int j = 0;
	for (i = 1; i <= 10; i++){

		for (j=1; j <= i;j++){

			printf("%d*%d=%d%   ", i, j, i*j);
			printf("\t");
		}
		printf("\n");
	}*/
	/*int n = 1;
	int m = 2;
	switch (n){
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n){//switch允许嵌套
		case 1:
			n++;
			break;
		case 2:
			m++;
			n++;
			break;
		}
		break;
	case 4:
		m++;
		break;

	default:
		break;

	}
	printf("m=%d ,n=%d", m, n);
	*/
/*#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int main(){
	int day = 0;
	scanf("%d", &day);
	switch (day){
	case 1:
	
	case 2:
		
	case 3:
	defult :
		break;
	case 4:
		
	case 5:
		printf("星内\n");
		break;
	case 6:
	case 7:
		printf("星末\n");

		break;
	
	}
*/	
	/*int i = 0;
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0){
			printf("%d\n", i);
		}
	}*/
	/*int coding = 0;
	printf("你会去敲代码？（选择 1 or 0），如果家里有很多房？选择：-1");
	scanf("%d", &coding);
	if (1==coding ){
		printf("你会赢\n");
	}
	else if (coding == 0){
		printf("放弃回家\n");

	}
	else if (coding == -1){
		printf("呵呵\n");
	}*/
	/*system("pause");
	return 0;
}*/




/*int main(){

	int coding = 0;
	printf("你会敲代码吗？（选择１ｏｒ０）");
		scanf("%d", &coding);
	if (coding = 1){

		printf("你会有好结果");

	}
	else{
		printf("over");
	}
		system("pause");
}
*/
/*int main()
{


	int num = 10;
	int *p;
	p = &num;
	*p = 2;//结引用对变量进行赋值 
	&num;

	printf("%d", num);
	system("pause");
	return 0;
	}*/
/*struct Stu{
	char name[12];
	int age;
	char sex[5];
	char id[13];
};
int main(){
	struct Stu s= { "zss", "13", "nan", "sghdg" };
	printf("%s %d %s %s", s.name, s.age, s.sex, s.id);
	system("pause");
}*/
/*int GetMax(int*a, int num){
	assert(a);
	assert(num > 0);
	int i = 0;
	int max = a[0];
	for (i =0; i < num; i++)
	{
		if (max < a[i]){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int a[] = { 12, 21, 23, 23, 232, 13, 2, 1, 2, 31 };
	int size = sizeof(a) / sizeof(a[0]);
	int max = GetMax(a, size);
	printf("%d", max);
	system("pause");
	return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[10] = { 12, 21, 23, 23, 232, 13, 2, 1, 2, 31 };
	int i = 0;
	int max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (max < a[i]){
			max = a[i];
		}
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#define ADD(x,y) (x+y)
#include<stdio.h>
#include <stdlib.h>
 //static int Add(int x, int y)
//{
//	return x + y;

//}

int main (){
	int sum = ADD(4, 5);
	printf("%d\n", sum);

	system("pause");
	return 0;
}*/

	/*

	static int i = 0;//static修饰局部变量改变生命周期，不改变作用域，到程序结束生命周期才结束；
	i++;
	

printf("%d", i);*/
/*int main()
{
	int i = 0;
	for (i= 0; i < 10; i++)
	{
		test();


	}*/
	
	
	/*printf("%d\n", my_add(1,23));

	printf("\n");
	system("pause");*/


//void test()
///{
  //  static int i = 0;
	//i++;
	//printf("%d\n", i);
//}
/*extern  int g_val;

int main()
{
	printf("%d\n", g_val);

	
	printf("\n");
	system("pause");
}*/
	/*int i;
	int j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++){
			
			printf("%d*%d=%d", i,j,i*j);
			printf("\t");
		}
		printf("\n");
	}
	*/


	/*
	int i;
	int j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++){
			if (i%j == 0)
				break;

		}
			if (i == j)
			{
				printf("%d\n", i);
			}
		}
	*/

	/*int i = 10;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);

	}
	*/
/*enum SEX
{
	MALE,
	FEMALE,
	SECRET
};*/
/*int Add(int x, int y)
{
	return x + y;


}
int Sub(int x, int y)
{
	return x - y;
}*/
/*int Add(int x, int y,int d){
	int z = x + y+d;
	return z;
}
int main()
{
	int x ;
	int y ;
	int d;
	int sum = 0;
	printf("输入三个操作符：>");
	scanf("%d %d %d", &x,&y,&d);
	sum = Add(x, y,d);
	printf("sum=%d\n", sum);
	*/
/*{
	printf("加入比特\n");
	int line = 0;
	while (line < 2000)
	{
		line++;
		printf("我要努力巧代码\n");

	}
	if (line==2000){
		printf("我要白富美\n");

	}*/
	/*int coding = 0;
	printf("你会去敲代码吗？(选择1 or 0 ):>");
		scanf("%d", &coding);
	if (coding == 1)
	{
		printf("坚持，你会有offer\n");

	}
	else if (coding==2)
	{
		printf("放弃，回家卖红薯\n");

	}
	else
	{
		printf("defualt");
	}*/
	/*printf("%d\n", Add(1, 2));//调用加法
	printf("%d\n", Sub(1, 2));//调用减法
*/

	/*printf("%d\n",strlen("c:\test\32\test.c"));
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	*/

	/*3.14;
	1000;
	const float pai = 3.14f;//const将变量定义为常量

	//pai = 5.14;
#define MAX 100;
	*/
	/*int a = 0;
	int b = 0;
	int sum = 0;

	printf("输入两个操作数：>");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d", sum);*/






/*{
	int local = 2018;
	int global = 2020;
	printf("global=%d\n", global);
	//优先使用局部变量
	*/


/*{
	int age = 150;
	float weight = 45.5f;
	char ch = 'w';
	rintf("%d %d  %d", age , "weight", ch);

	*/




	/*{
		int a = 0;
		int b = 2;
		if (a == 1)
		
			if (b == 2)
				printf("hehe\n");
		
		else
			printf("haha\n");*/
		
	
	//printf("%d\n", sizeof(char));
	/*printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));*/
	//int i, j;
	//for (i = 100; i <= 200; i++)
	//{

		//for (j = 2; j <=3 i - 1; j++)
		//{
			//if (i%j == 0)
		//		break;//如果能整除就跳出该次循环，避免多余运算
		//}
	//	if (j == i)//该条件代表没有整除。
			//printf("%d ", i);
	//}
	
