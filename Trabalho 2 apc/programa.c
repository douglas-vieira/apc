#include"programa.h"
void to_up(char string []){
	for (int i = 0;string [i]!= '\0' && string [i]!= '\n'&& string [i]!= '\r';string[i] = toupper(string[i]),i++)
	{}
}
void concatena (char string_1[], char string_2[], char string_fim[]){
	int flag[2] = {0,0};
	for (int i = 0;flag[0] == 0 || flag[1] == 0;i++)
	{
		if(string_1[i] == '\n' || string_1[i] == '\0' || string_1[i] == '\r')
			flag[0] = 1;
		if(string_2[i] == '\n' || string_2[i] == '\0' || string_2[i] == '\r')
			flag[1] = 1;
		if (flag[0] != 1 || flag[1] != 1)
			((string_1[i]>string_2[i]) ? (string_fim[i]=string_1[i]):(string_fim[i]=string_2[i]));
	}
}
int verifica_string (char string_1[], char string_2[]){
	for (int i = 0 ; string_1[i]!='\n' && string_1[i] != '\0' && string_1[i]!='\r'; i++)
	{
		if  (
				string_1[i]!='A'
			&&	string_1[i]!='B'
			&&	string_1[i]!='D'
			&&	string_1[i]!='E'
			&&	string_1[i]!='F'
			&&	string_1[i]!='G'
			&&	string_1[i]!='H'
			&&	string_1[i]!='I'
			&&	string_1[i]!='J'
			&&	string_1[i]!='K'
			&&	string_1[i]!='L'
			&&	string_1[i]!='M'
			&&	string_1[i]!='N'
			&&	string_1[i]!='O'
			&&	string_1[i]!='P'
			&&	string_1[i]!='Q'
			&&	string_1[i]!='R'
			&&	string_1[i]!='S'
			&&	string_1[i]!='T'
			&&	string_1[i]!='U'
			&&	string_1[i]!='V'
			&&	string_1[i]!='W'
			&&	string_1[i]!='X'
			&&	string_1[i]!='Y'
			&&	string_1[i]!='Z'
			&&	string_1[i]!='*'
			)
		{	
			return(1);
		}
	}
	for (int i = 0 ; string_2[i]!='\n' && string_2[i] != '\0' && string_2[i]!='\r'; i++)
	{
			if  (
				string_1[i]!='A'
			&&	string_1[i]!='B'
			&&	string_1[i]!='D'
			&&	string_1[i]!='E'
			&&	string_1[i]!='F'
			&&	string_1[i]!='G'
			&&	string_1[i]!='H'
			&&	string_1[i]!='I'
			&&	string_1[i]!='J'
			&&	string_1[i]!='K'
			&&	string_1[i]!='L'
			&&	string_1[i]!='M'
			&&	string_1[i]!='N'
			&&	string_1[i]!='O'
			&&	string_1[i]!='P'
			&&	string_1[i]!='Q'
			&&	string_1[i]!='R'
			&&	string_1[i]!='S'
			&&	string_1[i]!='T'
			&&	string_1[i]!='U'
			&&	string_1[i]!='V'
			&&	string_1[i]!='W'
			&&	string_1[i]!='X'
			&&	string_1[i]!='Y'
			&&	string_1[i]!='Z'
			&&	string_1[i]!='*'
			)
		{	
			return(1);
		}
	}
	return(0);
}
void ler_string(char string_1[], char string_2[]){
	int flag = 0;
	do

	{
		memset(string_1,'\0',100*sizeof(char));
		memset(string_2,'\0',100*sizeof(char));
		// scanf("%s",string_1);
		// scanf("%s",string_2);
		strcpy(string_1,"***GH***juk*U*H*******JKIK*FYFG*RT*TaTCCTGCCATG");
		strcpy(string_2,"ABT**FRT***G*H*DFWFFGG****G****f****ATCCTGCCATG");
		to_up(string_1);
		to_up(string_2);
		// flag = verifica_string(string_1,string_2);
		flag = 0;
		if (flag == 1)
		{
			printf("Uma das strinsgs esta errada, digite corretamente\n");
		}
	}while (flag == 1);
}
int encoontra_sub_string(char string_fim[],char sub_string[])
{
	// int tamanho=0;
	// for (tamanho = 0 ; sub_string[i]!='\n' && sub_string[i] != '\0' && sub_string[i]!='\r'; tamanho++)
	// {}
	return(strstr(string_fim,sub_string)?1:0);
}
int main ()
{
	int genes[24];
	char gen[24][11]; 
	char string_1[100], string_2[100], string_fim[100];
	memset(string_fim,'\0',100*sizeof(char));
	memset(gen,'\0',24*11*sizeof(char));
	memset(genes,0,24*sizeof(int));
//--------------------------------------------------------------------------------+
strcpy (&gen  [0][0],  "TCCTGCCATG");	//MENBRANA EXTERNA DE NADADEIRAS	//	1 |
strcpy (&gen  [1][0],  "TTCTACGTAC");	//BRANQUIAS							//	1 |
strcpy (&gen  [2][0],  "CTGGAGCTGT");	//MENBRANA VÍTRA					//	1 |
strcpy (&gen  [3][0],  "ACTCAC");		//ORIGEM AQUATICA					//	1 |
strcpy (&gen  [4][0],  "GAGTTTATAA");	//CARTILAGEM						//	1 |
strcpy (&gen  [5][0],  "TTGATCG");		//ESCAMAS							//	1 |
//--------------------------------------------------------------------------------+
strcpy (&gen  [6][0],  "TGACGGCG");		//POLEGADA IMPERIAL					//	2 |
strcpy (&gen  [7][0],  "GAGGTGGG");		//POLEGADA IMPERIAL					//	2 |
strcpy (&gen  [8][0],  "TTGAGGCA");		//POLEGADA IMPERIAL					//	2 |
strcpy (&gen  [9][0],  "TTGGCCGG");		//POLEGADA IMPERIAL					//	2 |
//--------------------------------------------------------------------------------+
strcpy (&gen [10][0],  "CTCGAAATTA");	//POLEGARES OPOSITORES				//	3 |
strcpy (&gen [11][0],  "TTAGATACGG");	//PULMOES							//	3 |
strcpy (&gen [12][0],  "TGAAGGGA");		//CARDIOVASCULAR					//	3 |
strcpy (&gen [13][0],  "AGAGTCATGC");	//OSSOS								//	3 |
strcpy (&gen [14][0],  "CTGGGTCG");		//PELOS								//	3 |
strcpy (&gen [15][0],  "TGACGGCG");		//MAMIFERO							//	3 |
strcpy (&gen [16][0],  "CTACGG");		//MAMIFERO							//	3 |
strcpy (&gen [17][0],  "TATGACTC");		//PERNAS							//	3 |
strcpy (&gen [18][0],  "TACATA");		//SISTEMA NERVOSO MUITO COMPLEXO	//	3 |
//--------------------------------------------------------------------------------+
strcpy (&gen [19][0],  "TGTATGAAGT");	//GARRAS DE AVES					//	5 |
//--------------------------------------------------------------------------------+
strcpy (&gen [20][0],  "CACATA");		//REPTEIS							//	6 |
strcpy (&gen [21][0],  "AGCCCGGC");		//SISTEMA CIRCULATORIO ABERTO		//	6 |
strcpy (&gen [22][0],  "GAGCGG");		//SISTEMA NERVOSO SIMPLES			//	6 |
strcpy (&gen [23][0],  "CATATA");		//SISTEMA NERVOSO COMPLEXO			//	6 |
//--------------------------------------------------------------------------------+
/*
	
	strcpy (&gen [0][0],  "TCCTGCCATG"	);	//MENBRANA EXTERNA DE NADADEIRAS
	strcpy (&gen [1][0],  "TGTATGAAGT"	);	//GARRAS DE AVES
	strcpy (&gen [2][0],  "CTCGAAATTA"	);	//POLEGARES OPOSITORES
	strcpy (&gen [3][0],  "TTCTACGTAC"	);	//BRANQUIAS
	strcpy (&gen [4][0],  "TTAGATACGG"	);	//PULMOES
	strcpy (&gen [5][0],  "TGAAGGGA"	);	//CARDIOVASCULAR
	strcpy (&gen [6][0],  "AGAGTCATGC"	);	//OSSOS
	strcpy (&gen [7][0],  "CTGGGTCG"	);	//PELOS
	strcpy (&gen [8][0],  "TGACGGCG"	);	//MAMIFERO
	strcpy (&gen [9][0],  "TGACGGCG"	);	//POLEGADA IMPERIAL
	strcpy (&gen[10][0],  "GAGGTGGG"	);	//POLEGADA IMPERIAL
	strcpy (&gen[11][0],  "TTGAGGCA"	);	//POLEGADA IMPERIAL
	strcpy (&gen[12][0],  "TTGGCCGG"	);	//POLEGADA IMPERIAL
	strcpy (&gen[13][0],  "CACATA"		);	//REPTEIS
	strcpy (&gen[14][0],  "AGCCCGGC"	);	//SISTEMA CIRCULATORIO ABERTO
	strcpy (&gen[15][0],  "CTACGG"		);	//MAMIFERO
	strcpy (&gen[16][0],  "CTGGAGCTGT"	);	//MENBRANA VÍTRA
	strcpy (&gen[17][0],  "GAGCGG"		);	//SISTEMA NERVOSO SIMPLES
	strcpy (&gen[18][0],  "ACTCAC"		);	//ORIGEM AQUATICA
	strcpy (&gen[19][0],  "GAGTTTATAA"	);	//CARTILAGEM
	strcpy (&gen[20][0],  "CATATA"		);	//SISTEMA NERVOSO COMPLEXO
	strcpy (&gen[21][0],  "TATGACTC"	);	//PERNAS
	strcpy (&gen[22][0],  "TTGATCG"		);	//ESCAMAS
	strcpy (&gen[23][0],  "TACATA"		);	//SISTEMA NERVOSO MUITO COMPLEXO*/
 
	printf("gen[00] = %s\n", gen[0] );
	printf("gen[01] = %s\n", gen[1] );
	printf("gen[02] = %s\n", gen[2] );
	printf("gen[03] = %s\n", gen[3] );
	printf("gen[04] = %s\n", gen[4] );
	printf("gen[05] = %s\n", gen[5] );
	printf("gen[06] = %s\n", gen[6] );
	printf("gen[07] = %s\n", gen[7] );
	printf("gen[08] = %s\n", gen[8] );
	printf("gen[09] = %s\n", gen[9] );
	printf("gen[10] = %s\n", gen[10]);
	printf("gen[11] = %s\n", gen[11]);
	printf("gen[12] = %s\n", gen[12]);
	printf("gen[13] = %s\n", gen[13]);
	printf("gen[14] = %s\n", gen[14]);
	printf("gen[15] = %s\n", gen[15]);
	printf("gen[16] = %s\n", gen[16]);
	printf("gen[17] = %s\n", gen[17]);
	printf("gen[18] = %s\n", gen[18]);
	printf("gen[19] = %s\n", gen[19]);
	printf("gen[20] = %s\n", gen[20]);
	printf("gen[21] = %s\n", gen[21]);
	printf("gen[22] = %s\n", gen[22]);
	printf("gen[23] = %s\n", gen[23]);

	ler_string (string_1,string_2);
	printf("string1:\t%s\n",string_1 );
	printf("string2:\t%s\n",string_2 );
	concatena (string_1,string_2,string_fim);
	printf("string fim:\t%s\n",string_fim );

	genes [0]  = encoontra_sub_string (string_fim, gen [0] );
	genes [1]  = encoontra_sub_string (string_fim, gen [1] );
	genes [2]  = encoontra_sub_string (string_fim, gen [2] );
	genes [3]  = encoontra_sub_string (string_fim, gen [3] );
	genes [4]  = encoontra_sub_string (string_fim, gen [4] );
	genes [5]  = encoontra_sub_string (string_fim, gen [5] );
	genes [6]  = encoontra_sub_string (string_fim, gen [6] );
	genes [7]  = encoontra_sub_string (string_fim, gen [7] );
	genes [8]  = encoontra_sub_string (string_fim, gen [8] );
	genes [9]  = encoontra_sub_string (string_fim, gen [9] );
	genes [10] = encoontra_sub_string (string_fim, gen [10]);
	genes [11] = encoontra_sub_string (string_fim, gen [11]);
	genes [12] = encoontra_sub_string (string_fim, gen [12]);
	genes [13] = encoontra_sub_string (string_fim, gen [13]);
	genes [14] = encoontra_sub_string (string_fim, gen [14]);
	genes [15] = encoontra_sub_string (string_fim, gen [15]);
	genes [16] = encoontra_sub_string (string_fim, gen [16]);
	genes [17] = encoontra_sub_string (string_fim, gen [17]);
	genes [18] = encoontra_sub_string (string_fim, gen [18]);
	genes [19] = encoontra_sub_string (string_fim, gen [19]);
	genes [20] = encoontra_sub_string (string_fim, gen [20]);
	genes [21] = encoontra_sub_string (string_fim, gen [21]);
	genes [22] = encoontra_sub_string (string_fim, gen [22]);
	genes [23] = encoontra_sub_string (string_fim, gen [23]);
	printf("genes[00] = %d\n", genes[0] );
	printf("genes[01] = %d\n", genes[1] );
	printf("genes[02] = %d\n", genes[2] );
	printf("genes[03] = %d\n", genes[3] );
	printf("genes[04] = %d\n", genes[4] );
	printf("genes[05] = %d\n", genes[5] );
	printf("genes[06] = %d\n", genes[6] );
	printf("genes[07] = %d\n", genes[7] );
	printf("genes[08] = %d\n", genes[8] );
	printf("genes[09] = %d\n", genes[9] );
	printf("genes[10] = %d\n", genes[10]);
	printf("genes[11] = %d\n", genes[11]);
	printf("genes[12] = %d\n", genes[12]);
	printf("genes[13] = %d\n", genes[13]);
	printf("genes[14] = %d\n", genes[14]);
	printf("genes[15] = %d\n", genes[15]);
	printf("genes[16] = %d\n", genes[16]);
	printf("genes[17] = %d\n", genes[17]);
	printf("genes[18] = %d\n", genes[18]);
	printf("genes[19] = %d\n", genes[19]);
	printf("genes[20] = %d\n", genes[20]);
	printf("genes[21] = %d\n", genes[21]);
	printf("genes[22] = %d\n", genes[22]);
	return 0;
}