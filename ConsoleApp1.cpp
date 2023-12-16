// ConsoleApp1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>;//подключаем библиотеку для ввода и вывода данных
#include <cmath>; //подключаем библиотеку для математических функций
using namespace std; //используем пространство имен ‘std’
int main() {
	int speed; //объявляем переменную для хранения скорости автомобиля
	cout << "Enter the vehicle speed(km / h) ";
	cin >> speed; //считываем значения с клавиатуры
	int lenght; //объявляем переменную для хранения длины дороги
	cout <<" Enter the length of ring road(km)";
	cin >> lenght; 
	int timec;
	cout<<" Enter the time(h)";
	cin>> timec; //считываем значения с клавиатуры
	int distance = speed * timec; //рассчитываем расстояние, которое проехал автомобиль
	//номер отметки, с учетом направления автомобиля(положительное/отрицательное)
	int marker = (distance % lenght + lenght) % lenght;
	//Выводим результат с указанием направления
	cout<<" the car will be at the mark" << marker << "km" << endl;
	return 0;
}

// Это Трофимова А.В.
