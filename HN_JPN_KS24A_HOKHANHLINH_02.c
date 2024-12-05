
#include <stdio.h>
#include <stdlib.h>
#define N 100000
#include <math.h>
int main(void){
    int
    Arr[N],menu,currentlength,tong,max=Arr[0],min=Arr[0],uoc,exame,scout,index,value;
    printf("ho_khanh_linh_Baikiemtra_Hackathon_Đề2_\n");
    while(1){
        printf("1. nhap va gan gia tri choo mang.\n");
        printf("!1. thoat!!!.\n");
        printf(" lua chon cua ban: ");
        scanf("%d",&menu);
        if(menu==1){
            printf("nhap so phan tu cua mang: ");
            scanf("%d",&currentlength);
            for(int i=0;i<currentlength;i++){
                scanf("%d",&Arr[i]);
            }
            while(1){
                printf("\n");
                printf("MENU\n");
                printf("1. Nhap so phan tu va gia tri cho mang.\n");
                printf("2.In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5 …) .\n");
                printf("3.Dem so luong cac phan tu chan le trong mang .\n");
                printf("4.Tim gia tri lon thu hai trong mang .\n");
                printf("5.Them mot phan tu vao dau mang,phan tu moi them vao mang phai do nguoi dung nhap vao .\n");
                printf("6.Xoa phan tu tai mot vi tri cu the(nguoi dung nhap vi tri .\n");
                printf("7.Sap xep mang theo thu tu giam dan(Insertion sort) !!\n.");
                printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu đo co ton tai trong mang hay khong (Binary search).\n");
                printf("9.In ra toan bo so nguyen to trong mang da đuoc binh phuong.\n");
                printf("a.Neu khong co so nguyen to nao thi hien thi ra la khong co so nguyen to nao trong mang.\n");
                printf("b.Neu co so nguyen to trong mang thi hien thi toan bo so nguyen to đo va binh phuong chung len.\n");
                printf("10.Sap xep mang theo thu tu giam dan (Bubble sort).\n");
                printf("11.Thoat chuong trinh.\n");
                printf(" Lua chon cua ban la: ");
            }
        }
    }
}
                intintscanf("%d",&menuvoid);
            switch(menu){
            case 1:
                printf("\n");
            for(int i=0; i<currentlength;i++){
                printf("%d ",Arr[i]);
           }
                printf("\n");
            break;
                case 3:
                printf("\n");
                tong=0;
                printf("Cac phan tu chan va gia tri tong cua chung la:\n");
            for(int i=0; i<currentlength;i++){
            if(Arr[i]%2==0){
                printf("%d ",Arr[i]);
                tong+=Arr[i];
         }
      }
                printf("\nTong cac phan tu chan la: %d.",tong);
                printf("\n");
                case 5:
                printf("\n");
                printf("Nhap vi tri muon them: ");
                    scanf("%d",&index);
                printf("Nhap gia tri can them: ");
                    scanf("%d",&value);
            for(int i=currentlength;i>index;i--){
                Arr[i]=Arr[i-1];
                    }
                Arr[index]=value;
            for(int i=0;i<=currentlength;i++){
                printf("%d ",Arr[i]);
    }
                printf("\n");
                case 7:
                    if(arr, n){
                    printf("Mang sau khi sap xep theo thu tu giam dan (Insertion sort):\n");
                        break;
 }
                case 8:
                printf("Nhap phan tu can tim: ");
                    scanf("%d", &value);
                index = giatri(arr, n, value);
                    if (index != -1) {
                printf("Phan tu %d co trong mang tai vi tri %d.\n", value, index);
                    } else {
                printf("Khong tim thay phan tu %d trong mang.\n", value);
}
                    break;
                case 9:
                    index=(arr, n);
                    break;
                case 10:
                sapXepGiamDan(arr, n);
                printf("Mang sau khi sap xep theo thu tu giam dan (Bubble sort):\n");
                     inMang(arr, n);
                        break;
                case 11:
                printf("Thoat chuong trinh.\n");
                        break;
                    default:
                printf("Lua chon khong hop le. Ket thuc!.\n");
                           }
                 } while (choice != 0);
                return 0;
    }
                 
