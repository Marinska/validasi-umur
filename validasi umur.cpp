#include <stdio.h>
int main()
{
	int tgl,bln,thn,tgl1,bln1,thn1,tgl2,bln2,thn2;
	tgl1=28;
	bln1=10;
	thn1=2018;
	printf("Masukan tanggal lahir : ");
	scanf("%d",&tgl);
	printf("Masukan bulan lahir : ");
	scanf("%d",&bln);
	printf("Masukan tahun lahir : ");
	scanf("%d",&thn);
	if(bln>bln1)
	{
		thn2=thn1-thn-1;
		if(tgl>tgl1)
		{
			bln2=12-bln+bln1;
			tgl2=30-tgl+tgl1;
			printf("Umur anda adalah %d tahun %d bulan %d hari",thn2,bln2,tgl2);
		}
	}else{
		thn2=thn1-thn;
		bln2=bln1-bln;
		tgl2=tgl1-tgl;
		printf("Umur anda adalah %d tahun %d bulan %d hari",thn2,bln2,tgl2);
	}
}
