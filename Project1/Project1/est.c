/*
.���ʵ�֣�
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ����
int main(){
int b = 0;
int arr[9] = { 0, 0, 2, 2, 3, 3, 4, 4, 1};
for (int i = 0; i < 9; i++){
b = b^arr[i];
}

printf("%d", b);
system("pause");
}

*/



/*unsigned int reverse_bit(unsigned int value);
��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��

�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
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
bit = value & 1;//ȡ�����λ
value >>= 1;//����һλ��
result += bit<<(31-num);  //32λ�� 0 �� 31��
num++;
}
return result;
}
int main(){

printf("%u", reverse_bit(25));
system("pause");
}
*/

/*.����Ļ�ϴ�ӡ������ǡ�
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


/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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

printf("kiler��%c ", kiler);
}
}

system("pause");
return 0;

}
*/




/*5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

*/
/*
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
int main(){
int a = 1;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
for (a = 1; a <= 5; a++){

for (b = 1; b <= 5; b++){

for (c = 1; c <=5; c++){

for (d = 1; d <=5; d++){

for (e = 1; e <=5; e++){
if (((b == 2) +( a == 3)) == 1 &&
((e == 4) + (a == 1)) == 1 &&
((b == 2) +( e == 4)) == 1 &&
((c == 1) + (d == 2)) == 1 &&
((c == 5) +( d == 3)) == 1){
if (120 == a*b*c*d*e){

printf("a=%d  b=%d c=%d  d=%d e=%d", a, b, c, d, e);

}


}
}
}
}
}
}

system("pause");
return 0;

}*/



/*����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

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



/*����������
#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>

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
	int right = 9;
	int i = 0;
	for (i = 0; i < 10; i++){
		while (left < right){

			int temp = arr[right];
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
	printf("����1��������䣬2�����鵹�ã�3���������");
	printf("\n");
	printf("��ѡ��");
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
int random_num = rand() % 100 + 1;//�������������0~100֮��
int input = 0;
while (1){
printf("��������µ�����:\n");
scanf("%d", &input);
if (input > random_num)
{
printf("�������\n");
}
else if (input < random_num){
printf("����С��\n");
}
else if (input = random_num){
printf("�������\n");
}
}
}
int main(){
int input = 0;
srand((unsigned)time(NULL));
//���srandÿ���������ֵ��һ���ģ���ôÿ�����в����������Ҳ��һ���ģ�
//��һ���̶�����ֵ��Ϊ������һ��ȱ�㡣
//ͨ����������  ������һ�����srand((unsigned) time(NULL));��ȡ����������ʹ������Ϊһ�����̶�������
//����������������Ͳ���ÿ��ִ�ж�һ���ˡ�

printf("��ѡ��>:\n");
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
printf("ѡ���������ѡ��>\n");
break;
}
} while (input);
system("pause");
return 0;
}


*/


/*�����˷��ھ���
void table(int x, int y,int num){
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

#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)

//дһ���������ز����������� 1 �ĸ��� 
//���磺 15 0000 1111 4 �� 1 
//����ԭ�ͣ�
	/*// ���� 1��λ�� 
	int count_one_bits(unsigned int x)
	{
		int i = 0;
		for (i = 0; i < 32; i++){
			if (((x >> i) & 1) == 1){
				printf("%d",( x >> i) & 1);
			}
		}

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

дһ������ʵ����������Ķ��ֲ���
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
дһ����������������
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
дһ�������ж�����
find_year(int x){
if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0){
printf("%d������", x);

}
else{
printf("bushi");
}

}

int main(){
int a = 0;
scanf("%d", &a);
find_year(a);
system("pause");


*/


/*
дһ�������ж�����
void find_date(int x){
if (x % 2 != 0)
{
printf("yes");
}
else{
printf("no");
}
}
int main(){
int a = 0;
scanf("%d",&a);
find_date(a);
system("pause");
return 0;
}

*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x = 0;
	int y = 1;
	int z = 7;

	if (x > y){
		if (y > z){
			printf("%d %d %d\n", x, y, z);
		}
		else
		{
			if (x > z){
				printf("%d %d %d\n", x, z, y);
			
			}
			else 
			{
				printf("%d %d %d\n", z, x, y);
			}
		}

	}
	else{
		if (x > z){
			printf("%d %d %d\n", y, x, z);
		}
		else//y>x z>x
		{
			if (z < y){
				printf("%d %d %d\n", y, z, x);

			}
			else{
				printf("%d %d %d\n", z, y, x);
			}

		}
	}
	system("pause");
	return 0;
}*/