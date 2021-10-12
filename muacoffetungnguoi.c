#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int i, chon, sokhach, loai[5];
	int n, tong=0, nauda=25000, truyenthong=25000, bacxiu=30000, capu=35000, trasua=25000;
	int khachhang[sokhach];
	printf("Chao mung cac ban den voi Coffee House !\n");
	printf("Menu : \n");
	printf("1.Coffee truyen thong : %d\n", truyenthong);
	printf("2.Nau da : %d\n", nauda);
	printf("3.Bac xiu : %d\n", bacxiu);
	printf("4.Capuccino : %d\n", capu);
	printf("5.Tra sua random cac loai : %d\n", trasua);
	printf("Cac ban di tong cong bao nhieu nguoi ? \n");
	scanf("%d", &n);
	for(i=1;i<=5;i++)
	loai[i]=0;
	for(sokhach=0;sokhach<n;sokhach++)
	{
		printf("\nVui long nhap do uong cua nguoi thu %d : \n", sokhach+1);
		scanf("%d", &chon);
		switch(chon)
		{
			case 1 : printf("\nQuy khach so %d da mua coffee truyen thong voi gia : %d ", sokhach, truyenthong);
			tong+=truyenthong;
			loai[1]++;
			break;
			case 2 : printf("\nQuy khach so %d da mua nau da voi gia : %d ", sokhach+1, nauda);
			tong+= nauda;
			loai[2]++;
			break;
			case 3 : printf("\nQuy khach so %d da mua bac xiu voi gia : %d ", sokhach+1, bacxiu);
			tong+=bacxiu;
			loai[3]++;
			break;
			case 4 : printf("Quy khach so %d da mua capuccino voi gia : %d ", sokhach+1, capu);
			tong+=capu;
			loai[4]++;
			break;
			case 5 : printf("\nQuy khach so %d da mua tra sua voi gia : %d ", sokhach+1, trasua);
			tong+=trasua;
			loai[5]++;
			break;
			default : printf("\nKhong co mon quy khach chon trong menu, vui long kiem tra lai ! ");
			break;
		}
	}
	printf("\nSo coffee truyen thong quy khach da mua la : %d", loai[1]);
	printf("\nSo nau da quy khach da mua la : %d", loai[2]);
	printf("\nSo bac xiu quy khach da mua la : %d", loai[3]);
	printf("\nSo capuccino quy khach la mua la : %d", loai[4]);
	printf("\nSo tra sua quy khach da mua la : %d", loai[5]);
	printf("\nTong so tien trong hoa don cua quy khach la : %d", tong);
	printf("\nThue VAT 10%% : %f", tong*0.1);
	printf("\nTong so tien quy khach phai thanh toan la : %f", tong*1.1);
}
