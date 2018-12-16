#include <stdio.h>

int main(int argc, char** argv)
{
	float buf1[156],buf2[7800],buf3[125100],buf4[1010];	
	int nblus;
	FILE * f1 = fopen("lw1.wei","rb");
	FILE * f2 = fopen("lw2.wei","rb");
	FILE * f3 = fopen("lw3.wei","rb");
	FILE * f4 = fopen("lw4.wei","rb");

	FILE * t1 = fopen("lw1.h","w");

	int i = 0;
	fprintf(t1,"float Layer1_Weights_CPU[156] = {");
	for(i = 0 ; i < 156 ; i ++)
	{
		fread(&buf1[i],sizeof(float),1,f1);
		printf("%f\n",buf1[i]);
		fprintf(t1,"%f,",buf1[i]);
	}
	fprintf(t1,"};\n\n");

	fprintf(t1,"float Layer2_Weights_CPU[7800] = {");
	fread(&buf2,sizeof(float),7800,f2);
	for(i = 0 ; i < 7800 ; i ++)
	{
		//fread(&buffer[i],sizeof(float),1,f2);
		printf("%f\n",buf2[i]);
		fprintf(t1,"%f,",buf2[i]);
	}
	fprintf(t1,"};\n\n");

	fprintf(t1,"float Layer3_Weights_CPU[125100] = {");
	fread(&buf3,sizeof(float),125100,f3);
	for(i = 0 ; i < 125100 ; i ++)
	{
		//fread(&buffer[i],sizeof(float),1,f3);
		printf("%f\n",buf3[i]);
		fprintf(t1,"%f",buf3[i]);
		fprintf(t1,", ");
	}
	fprintf(t1,"};\n\n");

	fprintf(t1,"float Layer4_Weights_CPU[1010] = {");
	fread(&buf4,sizeof(float),1010,f4);
	for(i = 0 ; i < 1010 ; i ++)
	{
		//fread(&buffer[i],sizeof(float),1,f4);
		printf("%f\n",buf4[i]);
		fprintf(t1,"%f,",buf4[i]);
	}
	fprintf(t1,"};\n");


	return 0;
}
