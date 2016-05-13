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
		scanf("%s",string_1);
		scanf("%s",string_2);
		// strcpy(string_1,"***GH***juk*U*H*******JKIK*FYFG*RT*Ta");
		// strcpy(string_2,"ABT**FRT***G*H*DFWFFGG****G****f****A");
		to_up(string_1);
		to_up(string_2);
		flag = verifica_string(string_1,string_2);
		if (flag == 1)
		{
			printf("Uma das strinsgs esta errada, digite corretamente\n");
		}
	}while (flag == 1);
}
int encoontra_sub_string(char string_fim[],char sub_string[])
{
	

}
int main ()
{
	char string_1[100], string_2[100], string_fim[100];
	memset(string_fim,'\0',100*sizeof(char));
	ler_string (string_1,string_2);

	printf("string1:\t%s\n",string_1 );
	printf("string2:\t%s\n",string_2 );
	
	concatena (string_1,string_2,string_fim);
	printf("string fim:\t%s\n",string_fim );

	return 0;
}