#include <iostream>

using namespace std;

void imprimir(int arr[],int tam){
    for(int i=0;i< tam; i++){
        cout << arr[i];
    }
}
int suma(int arr[],int tam){ //iterativa y recursiva
    int suma=0;
    for(int i=0;i<tam ;i++){
        suma=suma+arr[i];
    }
    return suma;
}
int invertir(int arr[], int tam){ //iterativa y recursiva
    tam=tam-1;
    for (int i=0 ;i<(tam/2);i++){
        int b = arr[i];
        arr[i]=arr[tam];
        arr[tam]=b;
        tam=tam-1;
    }
}
int sumaRecursiva(int arr[],int tam){
    if (tam==1){
        return arr[0];
    }
    else{
        return arr[tam-1]+sumaRecursiva(arr,tam-1);
    }
}
void invertirRecursiva(int arr[],int x,int y){
    if(tam==1){
        return arr[0];
    }
    else{
        int a = arr[x];
        arr[x]= arr[y];
        arr[y]= a;
        return  invertirRecursiva(arr,x++,y--);
    }    
}
int main()
{
    int x[]={2,3,4,5};

    imprimir(x,4);
    cout << endl << "La suma de los elementos es: " << suma(x,3) <<endl ;
    invertir(x,4);
    imprimir(x,4);

    cout << sumaRecursiva(x,4);

    //invertirRecursiva(x,2,5);
    cout << endl ;
    imprimir(x,4);

    return 0;
}
//ordenamiento burbuja,quicksort ,insercccion (swap)
