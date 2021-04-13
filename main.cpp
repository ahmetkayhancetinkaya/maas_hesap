#include <stdio.h>
#include <conio.h>
#include "isci_fonk.cpp"
#include "ofis_cal_fonk.cpp"
#include "yonetici_fonk.cpp"
	
int main()
{

	
	int ktgr_say;

	printf("\n\nHesaplayacaginiz kategorinin rakamini belirtiniz : \n 1. Isci  2. Ofis caliaani  3. Yönetici ");
	printf("\nGirisiniz: ");
	scanf("%d",&ktgr_say);
	
	switch (ktgr_say)
	{
	case 1: isci_tbl(); break;
	case 2: ofis_cal_tbl(); break;
	case 3: yonetici_tbl(); break;
	default: printf("\nGeçerli giris yapmadiniz!"); break;
    }
	
	
	getch();
	
}
