#include <stdio.h>
int main ()
{
	int islem,toplama,cikarma,carpma,bolme,num1,num2,sonuc=0;
	while(1)
	{
		printf("toplama icin [1] sec:\ncikarma icin [2] sec:\nbolme icin [3] sec:\ncarpma icin [4] sec:\n");
		scanf("%d",&islem);
		switch(islem)
		{
			case 1: printf("sayilari giriniz:\n");
			scanf("%d%d",&num1,&num2);
			sonuc=num1+num2;
			printf("sonuc:%d\n",sonuc);
			break;
			case 2: printf("sayilari giriniz:\n");
			scanf("%d%d",&num1,&num2);
			sonuc=num1-num2;
			printf("sonuc:%d\n",sonuc);
			break;
			case 3: printf("sayilari giriniz:\n");
			scanf("%d%d",&num1,&num2);
			sonuc=num1/num2;
			printf("sonuc:%d\n",sonuc);
			break;
			case 4: printf("sayilari giriniz:\n");
			scanf("%d%d",&num1,&num2);
			sonuc=num1*num2;
			printf("sonuc:%d\n",sonuc);
			break;
			default:
				printf("LUTFEN ADAM AKILLI SAYI GIR\n");
				break;
		}
	}
	
}
