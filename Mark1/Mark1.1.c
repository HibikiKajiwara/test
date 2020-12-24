////P58　3章からスタート
////第一章の復讐問題
//
//
////実行するとコンソール「[C is nice!」と表示されるプログラムを作成しください。
//
//#include<stdio.h>
//
//int main(void)	//int main(int argc,char* argv[])でも可だが関数本体でargc,argvのいずれのパラメータを使ってないからvoidのがいい。
//
//{
//
//	puts("C is nice!");
//			//return関数は省略可
//
//}



////問題2　次のプログラムの間違いを修正して正しくコンパイル、実行しなさい。
//
//#include(stdio.h)
//int Main(void)
//[
//	puts('hello')
//	return 0
//
//]
//

////解
//#include<stdio.h>
//int main(void)
//{
//	puts("hello");
//	return 0;
//
//}

//練習問題3.1　次から正しい単項演算を求めな
//
//a.-3			〇
//b.- 3			〇
//c.- - - -3	〇
//d.---3		×

//
//#include<stdio.h>
//void main()
//{
//	int x = -3;
//	printf("%d\n", -3);
//	printf("%d\n", - 3);
//	printf("%d\n",  - - - -( -3));
//	printf("%d\n", --x);
//
////	--x;
////	x = x - 1;
//
////	-3 =-3 - 1;
//
//
//	return 0;
//}
//
//
//
//P63 練習問題3.2


////[1]コマンドライン引数で与えられた2つの数値の差を示すプログラムを作ってください。
//
//#include<stdio.h>
//
//
//#include<stdlib.h>
//
//int main(int argc, char* argv[])
//{
//	printf("%d\n", argc);
//	for (int i = 0; i < argc; i++) printf("%d %s\n", i, argv[i]);
//	return 0;
//
//	//printf("%d\n", atoi(argv[1]) - atoi(argv[2]));
//
//}



//P65　練習問題3.3　
//1.次のうち正しい記述を選んでください。なお、xとyはint型の変数、funcはint型の引数を一つ取り
//　int型の値を返す関数とします。　　
//
//a.  x = 8;			正しい。
//b.  funk(x = 8);		正しい。関数の引数は8になる。xにも8は入る。
//c.  funk(3) = 80;		間違い。関数呼び出しには代入できない。
//d.  8=8;				間違い。数学とは違うう意味
//e.  x=funk(10);		正しい。xにはfunk(10)の結果が代入できる。
//f.  x=3*y=8;			間違い。


//2.次のリストを完成させなさい

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(int argc, char* argv[])
//{
//
//	int x = atoi(argv[1]);
//	int y = atoi(argv[2]);
//	int  sun, diff, prod, quot;
//
//	sun = x + y;
//	diff = x - y;
//	prod = x * y;
//	quot = x / y;
//
//	printf("%d,%d,%d,%d\n", sun, diff, prod, quot);
//
//
//}////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////P657  練習問題3.4
////1.変数xを初期値8で宣言してください。次にxに5を乗じた40を代入でしてください。このとき単純な代入演算子「＝」は利用しないでください。
//
//#include<stdio.h>
//
//int main(int argc, char* argv[])
//
//{
//
//	//int x = 8;・・・・・・ただの四則演算
//	//x = 8 * 5
//
//	int x = 8;
//	x *= 5;
//
//		printf("%d", x);
//
//}
//
//
//2.次の(1)～(5)をそれぞれ実行した場合、変数xの値を答えてください。

//(1) x=13  (2)x=7 (3)x=30 (4)x=3 (5)x=1・・・・・剰余算

//練習問題3.5
//1.変数xが変数xの現在の値に1を加えた値となるように、以下のそれぞれについて指定した演算子を利用して文を書いてください。

//(1)x=x+1 (2)x　+=1 (3)++x (4)x--

//2.以下の(1)～(3)のそれぞれ3つの文を実行したあとの変数zの値を答えてください。
//(1) 11　（2）10　（3）9

//#include<stdio.h>

//int main(int argc, char* argv[])
//{
//
//	int x = 10;
//	int y = ++x;
//	int z = y++;
//
//	printf("%d", z);
//
//
//}


//int main(int argc, char* argv[]){
//int x = 10;
//int y = x++;
//int z = y--;
//
//printf("%d", y);
//
// }

//int main(int argc, char* argv[])
//{
//
//	int x = 10;
//	int y = x++;
//	int z = --y;
//
//
//	printf("%d", z);
//
//}



//3.以下の(1)～(5)それぞれについて正しいコードかどうか答えてください。正しいコードの場合、実行後の変数xの値を答えてください。

//(1) ---x;　・・・・・ ---のような演算子はない。
//(2)- --x;	 ・・・・・〇 -9

//#include<stdio.h>
//
//int main(int argc, char* argv[])
//{
//
//	int x = 10;
//	int y = - --x;
//
//	printf("%dです。", y);
//



//(3)-x--;　　・・・・・〇 -10

//int main(int argc, char* argv[])
//{
//
//	int x = 10;
//		int y = -x--;
//	
//		printf("%dです。", y);
//	
//}

//P72 練習問題3.6
//1.次のプログラムを実行したらコンソールに「61」ではなく、「49」が出力されました。なぜなのか答えてください。
// yが8進数だから

//#include<stdio.h>
//
//int main(void)
//
//{
//
//
//	int x = 0060;
//	int y = 0001;
//
//	printf("%d\n",x+y);
//}
//


////P74 練習問題3.7
//#include<stdio.h>
//
//int main(void)
//{
//	int x = 0xa0;
//
//	printf("%d", x);
//
//
//
//}
//
//
////P75　例3.7
//#include<stdio.h>
//
//int main(void)
//{
//
//	printf("%d\n", -10);
//	printf("%u\n", -10);
//
//
//
//}



////P77　練習問題3.8
//
//
//#include<stdio.h>
//#include<stdint.h>
//
//int main(void)
//{
//	int16_t x = -10;
//
//	int32_t y= x;
//
//	printf("%d\n", x);
//	printf("%d\n", y);
//		
//}

//#include<stdio.h>
//#include<stdint.h>
//
//int main(void)
//
//{
//	uint16_t x = -10;
//	uint32_t y = x;
//
//	printf("%d %d\n", x,y);
//
////	printf("%d\n", y);
//
//}

//#include<stdio.h>
//#include<stdint.h>
//
//int main(void)
//
//{
//	//uint16_t x = -10;
//	int32_t x = -10;
//	uint16_t y = x;
//	//int32_t y = x;
//	
//	printf("%d %d\n", x, y);
//
//}

//#include<stdio.h>
//#include<stdint.h>
//
//int main(void)
//
//{
//	uint32_t x = -10;
//	int16_t y = x;
//
//	uint16_t z = y;
//	x = z;
//
//
//	printf("%d %d\n", x, y);
//}
//


////P81 練習問題3.9
//
//#include<stdio.h>
//#include<limits.h>
//int main(void)
//{
//	long long value = LLONG_MAX;
//
//	printf("%lli\n", value);
//
//	return 0;
//}
//


//4.
#include<stdio.h>

int main(void)
{

	printf("%lli,%llu\n", 32LL, 48ULL);//定数に左辺がないため、32と48はint型でコードが生成されている。書式指定は引数を別で取り出しているから正し処理できない。



}

////浮動小数点
////P84 練習問題3.10
//
////1.コマンドライン引数で与えた2つの数をdouble型に交換して加減乗除の結果を表示するプログラムを作ってください。
//
//#include<stdio.h>
//#include<stdlib.h>　　//atofを使うのに必要
//
//int main(int argc, char* argv[])
//{
//
//	double x = atof(argv[1]);  //文字列から浮動小数を作るにはatofを使う
//	double y = atof(argv[2]);
//
//	printf("%f\n", x + y);
//	printf("%f\n", x - y);
//	printf("%f\n", x * y);
//	printf("%f\n", x / y);
//
//
//}

//2.コンソールにLDBL_MAXの値を出力するプログラムを作ってください.

//#include<stdio.h>
//#include<float.h>
//
//int main(void)
//
//{
//
//	printf("%Lf\n", LDBL_MAX);
//
//
//}

//プリプロセッサは覚えておくと非常に便利

//#include<stdio.h>
//#define CONSUMPTION_TAX *8/100
//
//int main(void)
//
//{
//
//	int price1 = 100;
//	int price2 = 230;
//	printf("%i\n", price1 CONSUMPTION_TAX);
//	printf("%i\n", price2 CONSUMPTION_TAX);
//
//
//
//}
//

//練習問題3.11
//1.リスト3.15のプログラムを実行せずにコンソールに出力される内容を答えてください。

//　★ Hello  world!  ★2017

//2.リスト3.16のプログラムを関数的マクロを利用して可能な限りk記述量を減らして書き加えてください。

//#include<stdio.h>
//#include<stdlib.h>
//
//#define P(o) printf("%i\n",x o y);
//int main(int argc, char* argv[])
//
//{
//
//	int x = atoi(argv[1]);
//	int y = atoi(argv[2]);
//
//	P(+)
//	P(-)
//	P(*)
//	P(/)
//
//
//
//}


//
////P91練習問題3.12
////1.例3.11-2をキャスト式を使わずに別の変数を代入して同じ結果が得られるプログラムを書きなさい。
//
//#include<stdio.h>
//
//int main(void)
//{
//
//	//double d = 321.253;
//	//printf("%i\n", (int)d);
//
//	double d = 321.253;
//	int x = d;
//
//	printf("%i\n", x);
//
//
//}

//2.キャスト式を使ってINT_MINを正の整数としてコンソールに出力するプログラムをコンパイル時に警告が出ないように作成してください。

//#include<stdio.h>
//#include<limits.h>
//
//int main(void)
//{
//	//int x = INT_MIN;
//
//	printf("%lli\n",(long long)(unsigned)INT_MIN);//キャスト式をキャストする。
//	//printf("%d %d %d\n", sizeof(int), sizeof(long), sizeof(long long));
//
//	//printf("%d\n", 0xfffffffE);
//	//printf("%d\n", 0x0);
//
//}

//第4章　制御文：真偽と条件分岐

////前章の復讐問題
////1.次のプログラムを実行するとコンソールに「123」と「456」の2行を出力するように空欄a,bを埋めてください。
//
//#include<stdio.h>
//#define ONE_TWO_THREE "123"   //ここに""がつくのはputsだからつけないとだめ　　　　putsとprintfの違いは、putsは""の中に入ってるやつはなんでも表示させる。printfは%dとか必要だから、実際使うのはprintfのが便利だね。
//#define FOUR_FIVE_SIX 456
//
//
//int main(void)
//{
//	//printf("%d\n",ONE_TWO_THREE);
//	puts(ONE_TWO_THREE);
//	printf("%d\n", FOUR_FIVE_SIX);
//
//
//
//
//

//}

////2.intの最小値と最大値、doubleの最小値と最大値をコンソールに出力するプログラムを作成してください。
//
//
//#include<stdio.h>
//#include<limits.h>
//#include<float.h>
//
//int main(void)
//{
//	printf("%i\n", INT_MIN);
//	printf("%i\n", INT_MAX);
//	printf("%f\n", -DBL_MAX); //doubleにおいては正負が別で用意されているためDBL_MINと書けば正の数の最小値になる。つまり0。そのため、-をつけてやる必要がある。
//	printf("%f\n", DBL_MAX); //%eで表示させれば、指数表示で出してくれる。
//
//}

////3.　Cで扱える最大の整数と最小の整数をコンソールに出力してくださ。
//
//#include<stdio.h>
//#include<limits.h>
//
//
//int main(void)
//{
//
//	printf("%llu\n", ULLONG_MAX);
//	printf("%lli\n", LLONG_MIN);
//
//
//}

////4. 8ビット符号付き整数型の変数を定義して-1で初期化してくださ。次に16ビット整数の変数に最初の変数、32ビット整数の変数に16ビットの変数、64ビット整数に32ビットの変数と、順に符号拡張させながら代入して、最後にそれぞれの変数の値をコンソールに出力するプログラムを作成してください。
//
//
////-1をii8に代入。
////8ビットの-1をi16に代入
////16ビットの-1をi32に代入
////32ビットの-1をi64に代入
//
//
//#include<stdio.h>
//#include<stdint.h>
//
//
//int main(void)
//
//{
//
//	int8_t i8 = -1;			
//	int16_t i16 = i8;		
//	int32_t i32 = i16;	
//	int64_t i64 =i32;		
//
//	printf("%i,%i,%i,%lli\n", i8, i16, i32, i64);
//
//
//}