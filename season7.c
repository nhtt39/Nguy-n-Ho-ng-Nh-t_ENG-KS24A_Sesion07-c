#include <stdio.h>

int main() {
	//Bai tap1
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Do dai cua mang la: %d\n", length);
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("%d\t ", arr[i]);
    }
    
    //Bai tap2
    int ar[5];
    printf("\nNhap 5 phan tu cho mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &ar[i]);
    }
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t ", ar[i]);
    }
    
    //Bai tap3
    int number[5] = {1,9,3,7,5};
    int count = 1;
    for(int i = 0; i < 5; i++){
    	if(number[i] % 2 == 0){
    		printf("\nSo chan trong mang la: %d\n",number[i]);
    		count++;
	   }
	   }if(count==1){
	   	printf("\nKhong co so chan nao trong mang\n");
	}

	//Bai tap4
	int n;
    printf("\nNhap so phan tu cua mang:\n ");
    scanf("%d", &n);
    int arr1[n];
    printf("\nNhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nNhap phan tu %d:\n ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

	//Bai tap5
	int arr2[5] = {9,3,4,12,5};
	int max = arr2[0];
	for (int i=0; i < 5; i++){
		if(arr2[i] > max){
			max = arr2[i];
		}
	}
	printf("\nSo lon nhat trong chuoi la: %d\n",max);
	
	//Bai tap6
	int arr3[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        if (arr3[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr3[i] += 2;
        }
    }
    printf("Mang sau khi thay doi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr3[i]);
    }
	 
	//Bai tap7
	int n1;
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d", &n1);
    int arr4[n1];
    for (int i = 0; i < n1; i++) {
        do {
            printf("\nNhap phan tu %d phai la so le: ", i + 1);
            scanf("%d", &arr[i]);

            if (arr4[i] % 2 == 0) {
                printf("\nNhap sai! Phan tu phai la so le. Vui long nhap lai.\n");
            }
        } while (arr4[i] % 2 == 0);
    }
    
    //Bai tap10
	int n2;
    printf("Nhap so phan tu cua mang:\n ");
    scanf("%d", &n2);
    int arr5[n2];
    printf("Nhap %d phan tu cho mang:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr5[i]);
    }
    for (int i = 0; i < n2; i++){
    		if (arr5[i]==1 || arr5[i]==2){
    			printf("%d la so nguyen to\n",arr5[i]);
			}
    	for (int o = 2; o < arr5[i]; o++){
    		if (arr5[i] % o == 0){
    			printf("%d la ko phai so nguyen to\n",arr5[i]);
    			break;
			}else{
				printf("%d la so nguyen to\n",arr5[i]);
				break;
			}
		}
	}
    
    return 0;
}

