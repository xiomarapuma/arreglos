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
int invertirRecursiva(int arr[],int tam){
    if(tam==1){
        return arr[0];
    }
    else{
        int a = arr[0];
        arr[0]= arr[tam-1];
        arr[tam-1]= a;
        return  arr[tam-1] + invertirRecursiva(arr,tam-1);
    }
}
int main()
{
    int x[]={1,2,3,4,5};

    imprimir(x,5);
    cout << endl << "La suma de los elementos es: " << suma(x,3) <<endl ;
    invertir(x,5);
    imprimir(x,5);

    cout << sumaRecursiva(x,5);

    invertirRecursiva(x,5);
    cout << endl ;
    imprimir(x,5);

    return 0;
}
//ordenamiento burbuja,quicksort ,insercccion (swap)
