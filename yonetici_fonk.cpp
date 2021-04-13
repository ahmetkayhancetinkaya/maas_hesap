void yonetici_tbl()
	{
	struct kriterler{
		int diploma;
		int cocuk_say;
		int medeni_hal;
		int rapor_say;
		int mesai;
	}kategori;
	
	int i=20000;
	int evlilik;
	int cs;
	int isci_say;
	int alinan_rap;
	int mesai_gunu;
	
		
	 printf("\n\nMudurun diploma turu nedir :  1.Onlisans 2.Lisans");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.diploma);
	 
	 switch (kategori.diploma)
	 {
	 	case 1: i+=((i*1.5)/100); printf("++++Onlisans diplomasi eklentisi yeni maas = %d",i); break;
	 	case 2: i+=((i*1.7)/100); printf("++++Lisans diplomasi eklentisi yeni maas = %d",i); break;
	 }
	 
	 
	 printf("\n\nMudurun kac cocugu var? :  1 / 2 / 3 / 4.(3+) ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.cocuk_say);
	
	 switch (kategori.cocuk_say)
	 {
	 	case 1: i+=100; printf("++++1 cocuk eklentisi yeni maas = %d",i); break;
	 	case 2: i+=150; printf("++++2 cocuk eklentisi yeni maas = %d",i); break;
	 	case 3: i+=250; printf("++++3 cocuk eklentisi yeni maas = %d",i); break;
	 	case 4:
		 {
		  printf("Mudurun kac cocugu var? = "); 
	      scanf("%d",&cs);	
	      i+=(150*cs);
	      printf("++++ %d cocuk eklentisi yeni maas = %d",cs,i);
		  } 
		  break;
	 	
	 }
	 
	 printf("\n\nMudurun medeni hali nedir:  1.Bekar 2.Evli ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.medeni_hal);
	 
	 switch (kategori.medeni_hal)
	 {
	 	case 1: i+=500; printf("++++Bekarlik eklentisi yeni maas = %d",i); break;
	 	case 2:
		 {
	 		printf("Es calisiyor mu?: 1.Evet 2.Hayir"); 
	 		printf("\nGirisiniz: ");
	 		scanf("%d",&evlilik);
	 		if (evlilik == 1 )
	 		{
	 		 i-=100;
	 		 printf("----Calisan es kesintisi yeni maas = %d",i);
	 	    }
	 	    else
	 	    {
	 	     i+=700;
	 		 printf("++++Calismayan es eklentisi yeni maas = %d",i);
			 }
			
		 } 
		 break;
		
	}
	 
	 
	 printf("\n\nMudur rapor aldi mi? 1. Evet 2. Hayir ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.rapor_say);
	 
	 switch (kategori.rapor_say)
	 {
	 	case 1:
		 {
		 	printf("Mudur kac gun rapor almistir?"); 
		 	printf("\nGirisiniz: ");
		 	scanf("%d",&alinan_rap);
		 	i+=alinan_rap*-200;
		 	printf("----Alinan rapor kesintisi yeni maas = %d",i);
		}
		  break;
	 	case 2: printf("Mudur rapor almadigi icin kesinti yapilmamistir."); break;
	 }
	 
	 i+= -((20000*5)/100) -635;
	 printf("\n\n----Gelir vergisi, damga vergisi ve SGK kesintisi yeni maas = %d",i);
	 
	 
	  printf("\n\nMudur mesai yapti mi? 1. Evet 2. Hayir ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&kategori.mesai);
	 
	 switch (kategori.mesai)
	 {
	 	case 1:
		 {
		 	printf("Mudur kac gun mesai yapmistir?"); 
		 	printf("\nGirisiniz: ");
		 	scanf("%d",&mesai_gunu);
		 	i+=mesai_gunu*500;
		 	printf("++++Mesai eklentisi yeni maas = %d",i);
		}
		  break;
	 	case 2: printf("Mudur mesai yapmadigi icin eklenti yapilmamistir."); break;
	 }
	 
	 printf("\n\nMudur altýnda kac adet sendikali isci calistirmaktadir?  ");	
	 printf("\nGirisiniz: ");
	 scanf("%d",&isci_say);
	 i-= (isci_say*100);
	 printf("----Sendikali isci kesintisi yeni maas = %d",i);
	 
	 
	 
	 printf("\n\n\n\nMUDURUN UCRETI HERSEY DAHIL = %d tl'dir.",i);
	 
	 
	 		 
		 
	 
	 
	 
	
}
