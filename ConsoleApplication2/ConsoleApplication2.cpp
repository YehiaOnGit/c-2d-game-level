#include <iostream>
#include <conio.h>

using namespace std;
void drawbll(char z[][150], int br, int bc, int rh, int ch, int tott2)
{

	z[br][bc] = '>';
	z[br][bc - 1] = '-';
}
void movbll(char z[][150], int& br, int& bc, int& rh, int& ch, int& tott2, int& bllflg2)
{


	if (z[br][bc + 2] == ' ')
	{
		bc += 4;
	}
	if (z[br][bc + 2] != ' ')
	{
		bc = ch + 1;
		br = rh;
		bllflg2 = 0;
	}
	if (z[br][bc + 2] == char(178) || z[br][bc + 1] == char(178) || z[br][bc + 3] == char(178) || z[br][bc + 4] == char(178))
	{
		tott2 -= 10;

	}
}
void door(char z[][150])
{
	int r, c;
	for (c = 84; c < 93; c++)
	{
		z[37][c] = '_';
	}
	for (r = 38; r < 43; r++)
	{
		z[r][84] = '|';
	}
	for (r = 38; r < 43; r++)
	{
		z[r][92] = '|';
	}
}
void ewall(char x[][150])
{
	int r, c;
	for (r = 7; r < 45; r++)
	{
		x[r][83] = (219);
	}
}
void sttic(char z[][150])////////////////////////////////////////////level3
{
	int cc = 114;
	int rr = 1;
	int r, c;
	for (r = 0; r < 45; r++)
	{
		for (c = 0; c < 150; c++)
		{
			z[r][c] = ' ';
		}

	}

	z[1][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'w';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' n';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'R';
	z[rr][cc++] = 'A';
	z[rr][cc++] = 'P';
	z[rr][cc++] = 'I';
	z[rr][cc++] = 'D';
	z[rr][cc++] = 'L';
	z[rr][cc++] = 'Y';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'j';
	z[rr][cc++] = 'u';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'p';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'i';
	z[rr][cc++] = 'g';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 't';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'w';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' n';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'q';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'R';
	z[rr][cc++] = 'A';
	z[rr][cc++] = 'P';
	z[rr][cc++] = 'I';
	z[rr][cc++] = 'D';
	z[rr][cc++] = 'L';
	z[rr][cc++] = 'Y';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'j';
	z[rr][cc++] = 'u';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'p';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 'f';
	z[rr][cc++] = 't';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'w';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'j';
	z[rr][cc++] = 'u';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'p';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'o';
	z[rr][cc++] = 'n';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'y';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'f';
	z[rr][cc++] = 'a';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'l';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'a';
	z[rr][cc++] = 'p';
	z[rr][cc++] = 'i';
	z[rr][cc++] = 'd';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'y';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'd';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'o';
	z[rr][cc++] = 'v';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'i';
	z[rr][cc++] = 'g';
	z[rr][cc++] = 'h';
	z[rr][cc++] = 't';
	rr++;
	cc = 114;
	z[rr][113] = 'P';
	z[rr][cc++] = 'r';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 's';
	z[rr][cc++] = 's';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'a';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 't';
	z[rr][cc++] = 'o';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'm';
	z[rr][cc++] = 'o';
	z[rr][cc++] = 'v';
	z[rr][cc++] = 'e';
	z[rr][cc++] = ' ';
	z[rr][cc++] = 'l';
	z[rr][cc++] = 'e';
	z[rr][cc++] = 'f';
	z[rr][cc++] = 't';

	/////////////////////////
	for (c = 113; c < 149; c++)
	{

		z[7][c] = (219);
	}
	for (r = 0; r < 45; r++)
	{
		z[r][149] = (219);
	}
	for (r = 0; r < 45; r++)
	{
		z[r][0] = (219);
	}
	for (c = 0; c < 150; c++)
	{////row
		z[43][c] = (219);
		z[0][c] = (219);
		z[8][c] = (219);
	}
	for (r = 1; r < 9; r++)
	{
		z[r][112] = (219);
	}
	///////////////////////
	for (c = 13; c < 18; c++)
	{
		z[38][c] = (219);
	}
	for (c = 5; c < 10; c++)
	{
		z[34][c] = (219);
	}
	for (c = 13; c < 18; c++)
	{
		z[20][c] = (219);
	}
	for (c = 1; c < 9; c++)
	{
		z[26][c] = (219);
	}
	z[27][4] = 'b';
	z[27][5] = 'o';
	z[27][6] = 'o';
	z[27][7] = 's';
	z[27][8] = 't';
	for (c = 13; c < 18; c++)
	{
		z[29][c] = (219);
	}
	for (r = 2; r < 7; r++)//f
	{
		z[r][3] = (219);
	}
	for (c = 4; c < 7; c++)//f
	{
		z[2][c] = (219);
	}
	for (c = 4; c < 7; c++)//f
	{
		z[4][c] = (219);
	}
	for (c = 8; c < 12; c++)//i
	{
		z[2][c] = (178);
	}
	for (r = 2; r < 7; r++)//i
	{
		z[r][9] = (178);
	}
	for (c = 8; c < 12; c++)//i
	{
		z[6][c] = (178);
	}
	for (r = 2; r < 7; r++)//n
	{
		z[r][14] = (219);
	}
	r = 2;
	c = 14;
	for (; ; r++ && c++)//n
	{
		z[r][c] = (219);
		if (r == 6)
		{
			break;
		}
	}
	for (r = 2; r < 7; r++)//n
	{
		z[r][18] = (219);
	}
	r = 2;
	c = 21;
	for (; ; r++ && c++)//a
	{
		z[r][c] = (178);
		if (r == 6)
		{
			break;
		}
	}
	for (r = 2; r < 7; r++)//a
	{
		z[r][20] = (178);
	}
	for (c = 20; c < 24; c++)//a
	{
		z[5][c] = (178);
	}
	for (r = 2; r < 7; r++)//L
	{
		z[r][27] = (219);
	}
	for (c = 27; c < 31; c++)//L
	{
		z[6][c] = (219);
	}
	for (c = 33; c < 38; c++)//s
	{
		z[2][c] = (178);
	}
	for (r = 2; r < 4; r++)//s
	{
		z[r][33] = (178);
	}
	for (c = 33; c < 38; c++)//s
	{
		z[4][c] = (178);
	}
	for (r = 4; r < 7; r++)//s
	{
		z[r][37] = (178);
	}
	for (c = 33; c < 38; c++)//s
	{
		z[6][c] = (178);
	}
	for (c = 40; c < 45; c++)//t
	{
		z[2][c] = (219);
	}
	for (r = 2; r < 7; r++)//t
	{
		z[r][42] = (219);
	}
	r = 2;
	c = 48;
	for (; ; r++ && c++)//a
	{
		z[r][c] = (178);
		if (r == 6)
		{
			break;
		}
	}
	for (r = 2; r < 7; r++)//a
	{
		z[r][47] = (178);
	}
	for (c = 47; c < 51; c++)//a
	{
		z[5][c] = (178);
	}
	for (c = 54; c < 59; c++)//g
	{
		z[2][c] = (219);
	}
	for (r = 2; r < 4; r++)//g
	{
		z[r][54] = (219);
	}
	for (c = 54; c < 59; c++)//g
	{
		z[4][c] = (219);
	}
	for (r = 3; r < 7; r++)//g
	{
		z[r][58] = (219);
	}
	for (c = 54; c < 59; c++)//g
	{
		z[6][c] = (219);
	}
	for (c = 61; c < 66; c++)//e
	{
		z[2][c] = (178);
	}
	for (c = 61; c < 66; c++)//e
	{
		z[4][c] = (178);
	}
	for (c = 61; c < 66; c++)//e
	{
		z[6][c] = (178);
	}
	for (r = 3; r < 7; r++)//e
	{
		z[r][61] = (178);
	}
	for (r = 1; r < 9; r++)/////////////
	{
		z[r][68] = (219);
	}
	for (c = 68; c < 73; c++)/////////////
	{
		z[1][c] = (219);
	}
	for (c = 68; c < 71; c++)/////////////
	{
		z[2][c] = (219);
	}
	for (c = 68; c < 71; c++)/////////////
	{
		z[5][c] = (219);
	}
	for (c = 68; c < 73; c++)/////////////
	{
		z[6][c] = (219);
		z[7][c] = (219);
		z[8][c] = (219);
	}
	for (r = 7; r < 9; r++)/////////////
	{
		z[r][75] = (219);
		z[r][78] = (219);
	}
	for (c = 81; c < 85; c++)/////////////
	{
		z[1][c] = (219);
		z[6][c] = (219);
		z[7][c] = (219);


	}
	for (r = 3; r < 5; r++)
	{
		for (c = 79; c < 82; c++)
		{
			z[r][c] = (219);
		}
		for (c = 72; c < 75; c++)
		{
			z[r][c] = (219);
		}
	}
	for (c = 83; c < 85; c++)/////////////
	{
		z[2][c] = (219);
		z[5][c] = (219);
	}
	for (c = 76; c < 78; c++)/////////////
	{
		z[5][c] = (219);
	}
	for (r = 1; r < 9; r++)/////////////
	{
		z[r][85] = (219);
	}

	for (r = 18; r < 45; r++)
	{
		for (c = 24; c < 35; c++)
		{
			z[r][c] = (219);

		}
	}
	/////////////////////////////

}
void mveb(char z[][150], int& ebr, int& ebc, int& ebsr1, int& ebsc1, int& ebsr2, int& ebsc2)
{
	if (ebr > 12)
	{
		ebr -= 5;
	}
	if (ebr < 12)
	{
		ebr = 35;
	}
	if (ebr <= 35 && ebsr1 >= 12)
	{
		ebsr1 += 7;
	}
	if (ebsr1 >= 45)
	{
		ebsr1 = 12;
	}
	if (ebsc2 >= 85)
	{
		ebsc2 -= 5;
	}
	if (ebsc2 <= 85)
	{
		ebsc2 = 145;
	}
}
void flleb(char z[][150], int ebr, int ebc, int ebsr1, int ebsc1, int ebsr2, int ebsc2)
{
	z[ebr + 2][ebc + 14] = (178);
	z[ebr + 1][ebc + 14] = (178);
	z[ebr][ebc + 14] = (178);
	z[ebr - 1][ebc + 14] = (178);
	z[ebr - 2][ebc + 14] = (178);
	z[ebr - 3][ebc + 13] = (178);
	z[ebr - 4][ebc + 13] = (178);
	z[ebr - 5][ebc + 12] = (178);
	z[ebr - 6][ebc + 11] = (178);
	z[ebr - 6][ebc + 10] = (178);
	z[ebr - 6][ebc + 11] = (178);
	z[ebr - 6][ebc + 10] = (178);
	z[ebr - 7][ebc + 9] = (178);
	z[ebr - 7][ebc + 8] = (178);
	z[ebr - 7][ebc + 7] = (178);
	z[ebr - 7][ebc + 6] = (178);
	z[ebr - 7][ebc + 5] = (178);
	z[ebr - 6][ebc + 4] = (178);
	z[ebr - 6][ebc + 3] = (178);
	z[ebr - 5][ebc + 2] = (178);
	z[ebr - 4][ebc + 1] = (178);
	z[ebr - 3][ebc + 1] = (178);
	z[ebr - 2][ebc] = (178);
	z[ebr - 1][ebc] = (178);
	z[ebr][ebc] = (178);
	z[ebr + 1][ebc] = (178);
	z[ebr + 2][ebc] = (178);
	////
	z[ebr + 1][ebc + 14] = (178);
	z[ebr + 2][ebc + 14] = (178);
	z[ebr + 3][ebc + 13] = (178);
	z[ebr + 4][ebc + 13] = (178);
	z[ebr + 5][ebc + 12] = (178);
	z[ebr + 6][ebc + 11] = (178);
	z[ebr + 6][ebc + 10] = (178);
	z[ebr + 6][ebc + 11] = (178);
	z[ebr + 6][ebc + 10] = (178);
	z[ebr + 7][ebc + 9] = (178);
	z[ebr + 7][ebc + 8] = (178);
	z[ebr + 7][ebc + 7] = (178);
	z[ebr + 7][ebc + 6] = (178);
	z[ebr + 7][ebc + 5] = (178);
	z[ebr + 6][ebc + 4] = (178);
	z[ebr + 6][ebc + 3] = (178);
	z[ebr + 5][ebc + 2] = (178);
	z[ebr + 4][ebc + 1] = (178);
	z[ebr + 3][ebc + 1] = (178);
	z[ebr - 3][ebc + 3] = (219);////
	z[ebr - 2][ebc + 4] = (219);
	z[ebr - 1][ebc + 5] = (219);
	z[ebr][ebc + 4] = (219);
	z[ebr][ebc + 5] = (219);
	z[ebr + 1][ebc + 4] = (219);
	z[ebr + 1][ebc + 5] = (219);
	z[ebr - 3][ebc + 11] = (219);////
	z[ebr - 2][ebc + 10] = (219);
	z[ebr - 1][ebc + 9] = (219);
	z[ebr][ebc + 9] = (219);
	z[ebr][ebc + 9] = (219);
	z[ebr][ebc + 10] = (219);
	z[ebr + 1][ebc + 9] = (219);
	z[ebr + 1][ebc + 10] = (219);
	z[ebr + 4][ebc + 5] = (219);
	z[ebr + 3][ebc + 6] = (219);
	z[ebr + 3][ebc + 7] = (219);
	z[ebr + 3][ebc + 8] = (219);
	z[ebr + 4][ebc + 9] = (219);
	//
	z[ebsr1][ebsc1] = 'X';
	z[ebsr1 - 1][ebsc1] = 'X';
	z[ebsr1 - 2][ebsc1] = 'X';
	z[ebsr1 - 3][ebsc1] = 'X';

	z[ebsr1][ebsc1 + 15] = 'X';
	z[ebsr1 - 1][ebsc1 + 15] = 'X';
	z[ebsr1 - 2][ebsc1 + 15] = 'X';
	z[ebsr1 - 3][ebsc1 + 15] = 'X';
	//
	z[ebsr1][ebsc1 + 30] = 'X';
	z[ebsr1 - 1][ebsc1 + 30] = 'X';
	z[ebsr1 - 2][ebsc1 + 30] = 'X';
	z[ebsr1 - 3][ebsc1 + 30] = 'X';
	z[ebsr2][ebsc2] = '<';
	z[ebsr2][ebsc2 + 1] = '*';
	z[ebsr2][ebsc2 + 2] = '*';
	z[ebsr2][ebsc2 + 3] = '*';
	z[ebsr2][ebsc2 + 4] = '*';
}
void Disp(char z[][150])
{
	system("cls");
	int r, c;
	for (r = 0; r < 45; r++)
	{
		for (c = 0; c < 150; c++)
		{
			cout << z[r][c];
		}
	}

}
///////////////////////////////////////////////////////////////////////////
void spikedrop(char z[][150], int re1, int ce1)
{
	z[re1][ce1] = '\\';
	z[re1 - 2][ce1 + 1] = '\\';
	z[re1 - 2][ce1] = '/';
	z[re1 - 1][ce1 - 1] = '<';
	z[re1][ce1 + 1] = '/';
	z[re1 - 1][ce1 + 2] = '>';
	//
	z[re1][ce1 + 20] = '\\';
	z[re1 - 2][ce1 + 21] = '\\';
	z[re1 - 2][ce1 + 20] = '/';
	z[re1 - 1][ce1 + 19] = '<';
	z[re1][ce1 + 21] = '/';
	z[re1 - 1][ce1 + 22] = '>';

}
void spikedropmove(char z[][150], int& re1, int& ce1)
{
	if (z[re1 + 1][ce1] == ' ' && z[re1 + 1][ce1 + 1] == ' ' || z[re1 + 2][ce1] == ' ' && z[re1 + 2][ce1 + 1] == ' ' || z[re1 + 3][ce1] == ' ' && z[re1 + 3][ce1 + 1] == ' ')
	{
		re1 += 3;
	}
	if (z[re1 + 2][ce1] == char(219) || z[re1 + 2][ce1 + 1] == char(219))
	{
		re1 = 11;
		ce1 = 60;
	}

}
void fle2(char z[][150], int re2, int ce2)
{
	z[re2][ce2] = '>';
	z[re2][ce2 - 1] = '*';
	z[re2][ce2 - 2] = '*';
	z[re2][ce2 - 3] = '*';
	z[re2][ce2 - 4] = '*';
	z[re2][ce2 - 5] = '>';
}
void mve2(char z[][150], int& re2, int& ce2)
{
	if (ce2 < 82)
	{
		ce2 += 3;
	}
	else
	{
		ce2 = 34;
	}
}
void fle1(char z[][150], int sre, int sce, int rs1, int cs1, int rs2, int cs2)
{
	z[sre][sce] = '_';
	z[sre][sce + 1] = (217);
	z[sre][sce + 2] = ')';
	z[sre][sce - 1] = (192);
	z[sre][sce - 2] = '(';
	z[rs1][cs1] = '#';
	z[rs2][cs2] = '#';
	sre -= 1;
	sce -= 2;
	for (int c = 0; c < 5; c++)
	{
		z[sre][sce + c] = '*';
	}
	sre += 2;
	for (int c = 0; c < 5; c++)
	{
		z[sre][sce + c] = '*';
	}
}
void mve1(char z[][150], int& sre, int& sce, int& rs1, int& cs1, int& rs2, int& cs2)
{

	if (sce > 0)
	{
		sce++;
	}
	if (sce == 32)
	{
		sce = 4;
	}
	if (z[rs1 + 1][cs1] == ' ')
	{
		rs1++;
	}

	if (z[rs1 + 1][cs1] == char(219))
	{
		rs1 = sre + 1;
		cs1 = sce - 2;
	}

	if (z[rs2 + 1][cs2] == ' ')
	{
		rs2++;
	}

	if (z[rs2 + 1][cs2] == char(219))
	{
		rs2 = sre + 1;
		cs2 = sce + 2;
	}




}
///////////////////////////////////////////////////////////////////////////
void FllHro1(char z[][150], int rh, int ch)
{
	z[rh][ch] = 'O';
	z[rh + 1][ch] = (219);
	z[rh + 1][ch - 1] = (217);
	z[rh + 1][ch + 1] = (192);
	z[rh + 2][ch - 1] = '|';
	z[rh + 2][ch + 1] = '\\';
}
void hroan(char z[][150], int rh, int ch)
{
	z[rh][ch] = 'O';
	z[rh + 1][ch] = (219);
	z[rh + 1][ch - 1] = (217);
	z[rh + 1][ch + 1] = (192);
	z[rh + 2][ch - 1] = '/';
	z[rh + 2][ch + 1] = '|';

}
////////////////////////////////////////////////////////////////////////////
void MovHro1(char z[][150], int& rh, int& ch, char o)
{

	if (z[rh + 3][ch] == char(219))
	{
		if (o == 'a' && z[rh][ch - 3] == ' ')
		{
			ch--;
		}
	}


	if (z[rh + 3][ch] == char(219))
	{
		if (o == 'd' && z[rh][ch + 3] == ' ')
		{
			ch++;
		}
	}
	if (o == 's' && z[rh + 3][ch + 2] == ' ' && z[rh + 3][ch - 2] == ' ')
	{
		for (;;)
		{
			rh++;
			if (z[rh + 3][ch] != ' ')
			{
				break;
			}
		}
	}

	if (o == 'w' && z[rh + 3][ch] == char(219) && z[rh - 4][ch] != char(219) && z[rh - 3][ch] != char(219) && z[rh - 2][ch] != char(219) && z[rh - 1][ch] != char(219))
	{

		rh -= 6;

	}
	////////////////////////////////////////////////////jump

	if (o == 'e' && z[rh + 3][ch] == ' ' && z[rh][ch + 5] != char(219) && z[rh][ch + 6] != char(219) && z[rh][ch + 7] != char(219) && z[rh][ch + 4] != char(219) && z[rh][ch + 3] != char(219))
	{
		ch += 7;
		for (;;)
		{
			rh++;
			if (z[rh + 3][ch] == char(219))
			{
				break;
			}

		}

	}



	if (o == 'q' && z[rh + 3][ch] == ' ' && z[rh][ch - 5] != char(219) && z[rh][ch - 6] != char(219) && z[rh][ch - 7] != char(219) && z[rh][ch - 4] != char(219) && z[rh][ch - 3] != char(219))
	{
		ch -= 7;
		for (;;)
		{
			rh++;
			if (z[rh + 3][ch] == char(219))
			{
				break;
			}

		}

	}

	//////////////////////////////////////////////////////////////////jump^operation
}

void main()
{

	int bllflg2 = 0;
	int tott2 = 50;
	int ebsr2 = 42;
	int ebsc2 = 145;
	int ebsr1 = 12;
	int ebsc1 = 88;
	int ebr = 35;
	int ebc = 133;
	int re1 = 11;
	int ce1 = 60;
	int re2 = 42;
	int ce2 = 34;
	int rs1 = 13;
	int cs1 = 2;
	int rs2 = 13;
	int cs2 = 6;
	char z[45][150];
	int rh = 40;
	int ch = 5;
	int sre = 11;
	int sce = 4;
	int i = 0;
	int br2 = 40;
	int bc2 = 7;
	char o;
	for (;;)
	{

		for (; !_kbhit();)
		{

			sttic(z);
			if (z[rh + 3][ch] != char(219))
			{
				rh++;
			}
			if (ch <= 85)
			{
				door(z);
			}

			if (ch >= 86)
			{
				mveb(z, ebr, ebc, ebsr1, ebsc1, ebsr2, ebsc2);
				flleb(z, ebr, ebc, ebsr1, ebsc1, ebsr2, ebsc2);
				ewall(z);
			}
			cout << "boss" << "___" << tott2;
			if (rh + 3 == 26 && ch == 9 || rh + 3 == 26 && ch == 8 || rh + 3 == 26 && ch == 7 || rh + 3 == 26 && ch == 6 || rh + 3 == 26 && ch == 10)
			{
				rh -= 10;
			}

			if (i % 2 == 0)//////////heroshape
			{
				FllHro1(z, rh, ch);
			}

			else
			{
				hroan(z, rh, ch);
			}//////////////////////////heroshape
			if (bllflg2 == 1)
			{

				drawbll(z, br2, bc2, rh, ch, tott2);
				movbll(z, br2, bc2, rh, ch, tott2, bllflg2);

			}
			fle1(z, sre, sce, rs1, cs1, rs2, cs2);
			mve1(z, sre, sce, rs1, cs1, rs2, cs2);
			fle2(z, re2, ce2);
			mve2(z, re2, ce2);
			spikedrop(z, re1, ce1);
			spikedropmove(z, re1, ce1);

			if (z[rh - 1][ch] == '#' || z[rh][ch + 1] == '#' || z[rh][ch - 1] == '#')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh - 2][ch] == '\\' || z[rh - 2][ch] == '/' || z[rh - 2][ch - 1] == '\\' || z[rh - 2][ch - 1] == '/' || z[rh - 2][ch + 1] == '\\' || z[rh - 2][ch + 1] == '/')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh - 1][ch] == 'X' || z[rh][ch + 1] == 'X' || z[rh][ch - 1] == 'X')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh + 2][ch + 2] == '<' || z[rh + 2][ch + 3] == '<' || z[rh + 2][ch + 1] == '<' || z[rh + 2][ch - 2] == '>' || z[rh + 2][ch - 3] == '>' || z[rh + 2][ch - 1] == '>')
			{
				rh = 40;
				ch = 5;
			}
			if (z[rh + 3][ch] == '*' || z[rh + 2][ch] == '*')
			{
				rh = 40;
				ch = 5;
			}

			Disp(z);

		}
		i++;
		if (tott2 == 0)
		{
			break;
		}

		o = _getch();
		MovHro1(z, rh, ch, o);

		if (o == ' ')
		{
			bllflg2 = 1;
		}


	}
}