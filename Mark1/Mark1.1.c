////P58�@3�͂���X�^�[�g
////���͂̕��Q���
//
//
////���s����ƃR���\�[���u[C is nice!�v�ƕ\�������v���O�������쐬�����������B
//
//#include<stdio.h>
//
//int main(void)	//int main(int argc,char* argv[])�ł������֐��{�̂�argc,argv�̂�����̃p�����[�^���g���ĂȂ�����void�̂������B
//
//{
//
//	puts("C is nice!");
//			//return�֐��͏ȗ���
//
//}



////���2�@���̃v���O�����̊ԈႢ���C�����Đ������R���p�C���A���s���Ȃ����B
//
//#include(stdio.h)
//int Main(void)
//[
//	puts('hello')
//	return 0
//
//]
//

////��
//#include<stdio.h>
//int main(void)
//{
//	puts("hello");
//	return 0;
//
//}

//���K���3.1�@�����琳�����P�����Z�����߂�
//
//a.-3			�Z
//b.- 3			�Z
//c.- - - -3	�Z
//d.---3		�~

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
//P63 ���K���3.2


////[1]�R�}���h���C�������ŗ^����ꂽ2�̐��l�̍��������v���O����������Ă��������B
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



//P65�@���K���3.3�@
//1.���̂����������L�q��I��ł��������B�Ȃ��Ax��y��int�^�̕ϐ��Afunc��int�^�̈���������
//�@int�^�̒l��Ԃ��֐��Ƃ��܂��B�@�@
//
//a.  x = 8;			�������B
//b.  funk(x = 8);		�������B�֐��̈�����8�ɂȂ�Bx�ɂ�8�͓���B
//c.  funk(3) = 80;		�ԈႢ�B�֐��Ăяo���ɂ͑���ł��Ȃ��B
//d.  8=8;				�ԈႢ�B���w�Ƃ͈Ⴄ���Ӗ�
//e.  x=funk(10);		�������Bx�ɂ�funk(10)�̌��ʂ�����ł���B
//f.  x=3*y=8;			�ԈႢ�B


//2.���̃��X�g�����������Ȃ���

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



////P657  ���K���3.4
////1.�ϐ�x�������l8�Ő錾���Ă��������B����x��5���悶��40�����ł��Ă��������B���̂Ƃ��P���ȑ�����Z�q�u���v�͗��p���Ȃ��ł��������B
//
//#include<stdio.h>
//
//int main(int argc, char* argv[])
//
//{
//
//	//int x = 8;�E�E�E�E�E�E�����̎l�����Z
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
//2.����(1)�`(5)�����ꂼ����s�����ꍇ�A�ϐ�x�̒l�𓚂��Ă��������B

//(1) x=13  (2)x=7 (3)x=30 (4)x=3 (5)x=1�E�E�E�E�E��]�Z

//���K���3.5
//1.�ϐ�x���ϐ�x�̌��݂̒l��1���������l�ƂȂ�悤�ɁA�ȉ��̂��ꂼ��ɂ��Ďw�肵�����Z�q�𗘗p���ĕ��������Ă��������B

//(1)x=x+1 (2)x�@+=1 (3)++x (4)x--

//2.�ȉ���(1)�`(3)�̂��ꂼ��3�̕������s�������Ƃ̕ϐ�z�̒l�𓚂��Ă��������B
//(1) 11�@�i2�j10�@�i3�j9

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



//3.�ȉ���(1)�`(5)���ꂼ��ɂ��Đ������R�[�h���ǂ��������Ă��������B�������R�[�h�̏ꍇ�A���s��̕ϐ�x�̒l�𓚂��Ă��������B

//(1) ---x;�@�E�E�E�E�E ---�̂悤�ȉ��Z�q�͂Ȃ��B
//(2)- --x;	 �E�E�E�E�E�Z -9

//#include<stdio.h>
//
//int main(int argc, char* argv[])
//{
//
//	int x = 10;
//	int y = - --x;
//
//	printf("%d�ł��B", y);
//



//(3)-x--;�@�@�E�E�E�E�E�Z -10

//int main(int argc, char* argv[])
//{
//
//	int x = 10;
//		int y = -x--;
//	
//		printf("%d�ł��B", y);
//	
//}

//P72 ���K���3.6
//1.���̃v���O���������s������R���\�[���Ɂu61�v�ł͂Ȃ��A�u49�v���o�͂���܂����B�Ȃ��Ȃ̂������Ă��������B
// y��8�i��������

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


////P74 ���K���3.7
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
////P75�@��3.7
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



////P77�@���K���3.8
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


////P81 ���K���3.9
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

	printf("%lli,%llu\n", 32LL, 48ULL);//�萔�ɍ��ӂ��Ȃ����߁A32��48��int�^�ŃR�[�h����������Ă���B�����w��͈�����ʂŎ��o���Ă��邩�琳�������ł��Ȃ��B



}

////���������_
////P84 ���K���3.10
//
////1.�R�}���h���C�������ŗ^����2�̐���double�^�Ɍ������ĉ����揜�̌��ʂ�\������v���O����������Ă��������B
//
//#include<stdio.h>
//#include<stdlib.h>�@�@//atof���g���̂ɕK�v
//
//int main(int argc, char* argv[])
//{
//
//	double x = atof(argv[1]);  //�����񂩂畂�����������ɂ�atof���g��
//	double y = atof(argv[2]);
//
//	printf("%f\n", x + y);
//	printf("%f\n", x - y);
//	printf("%f\n", x * y);
//	printf("%f\n", x / y);
//
//
//}

//2.�R���\�[����LDBL_MAX�̒l���o�͂���v���O����������Ă�������.

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

//�v���v���Z�b�T�͊o���Ă����Ɣ��ɕ֗�

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

//���K���3.11
//1.���X�g3.15�̃v���O���������s�����ɃR���\�[���ɏo�͂������e�𓚂��Ă��������B

//�@�� Hello  world!  ��2017

//2.���X�g3.16�̃v���O�������֐��I�}�N���𗘗p���ĉ\�Ȍ���k�L�q�ʂ����炵�ď��������Ă��������B

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
////P91���K���3.12
////1.��3.11-2���L���X�g�����g�킸�ɕʂ̕ϐ��������ē������ʂ�������v���O�����������Ȃ����B
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

//2.�L���X�g�����g����INT_MIN�𐳂̐����Ƃ��ăR���\�[���ɏo�͂���v���O�������R���p�C�����Ɍx�����o�Ȃ��悤�ɍ쐬���Ă��������B

//#include<stdio.h>
//#include<limits.h>
//
//int main(void)
//{
//	//int x = INT_MIN;
//
//	printf("%lli\n",(long long)(unsigned)INT_MIN);//�L���X�g�����L���X�g����B
//	//printf("%d %d %d\n", sizeof(int), sizeof(long), sizeof(long long));
//
//	//printf("%d\n", 0xfffffffE);
//	//printf("%d\n", 0x0);
//
//}

//��4�́@���䕶�F�^�U�Ə�������

////�O�͂̕��Q���
////1.���̃v���O���������s����ƃR���\�[���Ɂu123�v�Ɓu456�v��2�s���o�͂���悤�ɋ�a,b�𖄂߂Ă��������B
//
//#include<stdio.h>
//#define ONE_TWO_THREE "123"   //������""�����̂�puts��������Ȃ��Ƃ��߁@�@�@�@puts��printf�̈Ⴂ�́Aputs��""�̒��ɓ����Ă��͂Ȃ�ł��\��������Bprintf��%d�Ƃ��K�v������A���ێg���̂�printf�̂��֗����ˁB
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

////2.int�̍ŏ��l�ƍő�l�Adouble�̍ŏ��l�ƍő�l���R���\�[���ɏo�͂���v���O�������쐬���Ă��������B
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
//	printf("%f\n", -DBL_MAX); //double�ɂ����Ă͐������ʂŗp�ӂ���Ă��邽��DBL_MIN�Ə����ΐ��̐��̍ŏ��l�ɂȂ�B�܂�0�B���̂��߁A-�����Ă��K�v������B
//	printf("%f\n", DBL_MAX); //%e�ŕ\��������΁A�w���\���ŏo���Ă����B
//
//}

////3.�@C�ň�����ő�̐����ƍŏ��̐������R���\�[���ɏo�͂��Ă������B
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

////4. 8�r�b�g�����t�������^�̕ϐ����`����-1�ŏ��������Ă������B����16�r�b�g�����̕ϐ��ɍŏ��̕ϐ��A32�r�b�g�����̕ϐ���16�r�b�g�̕ϐ��A64�r�b�g������32�r�b�g�̕ϐ��ƁA���ɕ����g�������Ȃ��������āA�Ō�ɂ��ꂼ��̕ϐ��̒l���R���\�[���ɏo�͂���v���O�������쐬���Ă��������B
//
//
////-1��ii8�ɑ���B
////8�r�b�g��-1��i16�ɑ��
////16�r�b�g��-1��i32�ɑ��
////32�r�b�g��-1��i64�ɑ��
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