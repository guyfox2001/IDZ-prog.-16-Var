#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <Windows.h>
#include <filesystem>
#include <time.h>

#define START_STRING "�������� ��������� ��� ���������� � ���������� �������� ��� ���������� ��������:"
#define EVEN_SUM " ����� ������ ���������" //1
#define UNEVEN_SUM " ����� �������� ���������" //2
#define DIFFIRENCE_OF_EACH_MAX " �������� ������� �������� � �������������" //3
#define DIFFIRENCE_OF_EACH_MIN " �������� ������� �������� � ������������" //4
#define FIB_NUMBERS " ��������� n ����� ���������. F_0 = 1 F_1 = 1. ������ �� ������� F_n = F_n-1 + F_n-2."//5
#define FIB_END_NUM " ������ ��������� ����� n-�� ����� ���������. F_0 = 1 F_1 = 1. ������ �� ������� F_n = F_n-1 + F_n-2."//6
#define SORT_ARRAY_MIN " ������������� ������ �� �����������"//7
#define SORT_ARRAY_MAX " ������������� ������ �� ��������"//8
#define GEOM_PROGRESSIVE " ���������� �������������� ����������, ��� ��������� - b_1 , q - ��� ����������, n - ����������" //9
#define ALGEB_PROGRESSIVE " ���������� �������������� ����������, ��� ��������� - a_1 , d - ��� ����������, n - ����������"//10

#define IN_EVEN_UNEVEN "������� ������: N < 10000; N ����������� ����� ������� \n"
#define OUT_EVEN_UNEVEN "�������� ������: ����������� �����, ��������������� ������� \n"
#define IN_DOE_MAX_MIN "������� ������: N < 10000; N ����������� ����� ������� \n"
#define OUT_DOE_MAX_MIN "�������� ������: N ��������� �������, ����� �������� ��������, �������������� �������\n"
#define IN_FIB_NUM "������� ������ : 0 < N < 50. N ����������� \n"
#define OUT_FIB_NUM "�������� ������ : N ����� ��������� \n"
#define IN_FIB_END_NUM "������� ������ : 0 < N < 100. N ����������� \n"
#define OUT_FIB_END_NUM "�������� ������ : N ��������� ���� ����� ��������� \n"
#define IN_MIN_MAX_SORT "������� ������: N < 10000; N ����������� ����� ������� \n"
#define OUT_MIN_MAX_SORT "�������� ������: N ��������� �������, ����� c���������, �������������� �������\n"
#define IN_GEOM "������� ������ : N - ���������� ���������, b_1 - ������, q - ���. N < 100"
#define IN_ALG "������� ������ : N - ���������� ���������, a_1 - ������, d - ���. N < 1000"
#define OUT_GEOM_ALG "�������� ������ : N ��������� ���������� \n"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int operation; 
	ofstream out_task, out_input_data, out_output_data;
	cout << "Start generation\n";
	srand((unsigned)time(NULL));
	operation = rand()%10+1;
	switch ( operation)
	{
	case 1: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << EVEN_SUM << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_EVEN_UNEVEN << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_EVEN_UNEVEN << '\n';
		int n, sum;
		int* arr;
		for (int k = 1; k <= 30; ++k) {
			n = rand() % k * 100 + 10;
			arr = new int[n];
			for (int i = 0; i < n; ++i) {
				arr[i] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
			}
			out_input_data << n << '\n';
			for (int i = 0; i < n; ++i) {
				out_input_data << arr[i] << ' ';
			}
			out_input_data << "\n\n\n";
			sum = 0;
			for (int i = 0; i < n; ++i) {
				if (arr[i] % 2 == 0) sum += arr[i];
			}
			out_output_data << sum << '\n';
			n = 0;
			delete[] arr;
		}
		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 2: {
		{
			out_task.open("task.txt", ios::out);
			out_task << START_STRING << UNEVEN_SUM << '\n';
			system("mkdir in");
			out_input_data.open("in/in.txt", ios::out);
			out_input_data << IN_EVEN_UNEVEN << '\n';
			system("mkdir out");
			out_output_data.open("out/out.txt", ios::out);
			out_output_data << OUT_EVEN_UNEVEN << '\n';
			int n, sum;
			int* arr;
			for (int k = 1; k <= 30; ++k) {
				n = rand() % k * 100 + 10;
				arr = new int[n];
				for (int i = 0; i < n; ++i) {
					arr[i] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
				}
				out_input_data << n << '\n';
				for (int i = 0; i < n; ++i) {
					out_input_data << arr[i] << ' ';
				}
				out_input_data << "\n\n\n";
				sum = 0;
				for (int i = 0; i < n; ++i) {
					if (arr[i] % 2 != 0) sum += arr[i];
				}
				out_output_data << sum << '\n';
				n = 0;
				delete[] arr;
			}
			out_input_data.close();
			out_output_data.close();
			system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
			system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
			break;
		}
	}
	case 3: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << DIFFIRENCE_OF_EACH_MAX << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_DOE_MAX_MIN << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_DOE_MAX_MIN << '\n';
		int n, min_max = INT_MIN, * arr;
		for (int k = 1; k <= 30; ++k) {
			n = rand() % k * 100 + 10;
			arr = new int[n];
			for (int i = 0; i < n; ++i) {
				arr[i] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
				if (arr[i] > min_max) min_max = arr[i];
			}
			out_input_data << n << '\n';
			for (int i = 0; i < n; ++i) {
				out_input_data << arr[i] << ' ';
			}
			out_input_data << "\n\n\n";
			for (int i = 0; i < n; ++i) {
				if (arr[i] != min_max) arr[i] -= min_max;
				out_output_data << arr[i] << ' ';
			}
			out_output_data << "\n\n\n";
			n = 0; delete[] arr; min_max = INT_MIN;
		} 
		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 4:{
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << DIFFIRENCE_OF_EACH_MIN << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_DOE_MAX_MIN << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_DOE_MAX_MIN << '\n';
		int n, min_max = INT_MAX, * arr;
		for (int k = 1; k <= 30; ++k) {
			n = rand() % k * 100 + 10;
			arr = new int[n];
			for (int i = 0; i < n; ++i) {
				arr[i] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
				if (arr[i] < min_max) min_max = arr[i];
			}
			out_input_data << n << '\n';
			for (int i = 0; i < n; ++i) {
				out_input_data << arr[i] << ' ';
			}
			out_input_data << "\n\n\n";
			for (int i = 0; i < n; ++i) {
				if (arr[i] != min_max) arr[i] -= min_max;
				out_output_data << arr[i] << ' ';
			}
			out_output_data << "\n\n\n";
			n = 0; delete[] arr; min_max = INT_MAX;
		}
		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 5: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << FIB_NUMBERS << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_FIB_NUM << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_FIB_NUM << '\n';
		int n, *a;
		for (int k = 1; k <= 30; ++k) {
			if (k == 1) n = 1;
			else  n = rand() % 50;
			out_input_data << n << '\n';
			if (n != 0)
			{
				a = new int[n+1];
				a[0] = 1;
				a[1] = 1;
			}
			else
			{
				a= new int[n+1];
				a[0] = 1;
			}
			for (int i = 2; i < n + 1; i++) {
				a[i] = (a[i - 1] + a[i - 2]);
			}
			for (int i = 0; i < n; ++i) {
				out_output_data << a[i] << ' ';
			}
			out_output_data << "\n\n\n";
			n = 0; delete[]a;
		}

		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 6: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << FIB_END_NUM << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_FIB_END_NUM << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_FIB_END_NUM<< '\n';
		int n, * a;
		for (int k = 1; k <= 30; ++k) {
			if (k == 1) n = 1;
			else  n = rand() % 50;
			out_input_data << n << '\n';
			if (n != 0)
			{
				a = new int[n + 1];
				a[0] = 1;
				a[1] = 1;
			}
			else
			{
				a = new int[n + 1];
				a[0] = 1;
			}
			for (int i = 2; i < n + 1; i++) {
				a[i] = (a[i - 1] + a[i - 2]) %10;
			}
			for (int i = 0; i < n; ++i) {
				out_output_data << a[i] << ' ';
			}
			out_output_data << "\n\n\n";
		}

		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 7: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << SORT_ARRAY_MAX << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_MIN_MAX_SORT << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_MIN_MAX_SORT << '\n';
		int n, index_min;
		int* arr;
		for (int k = 1; k <= 30; ++k) {
			n = rand() % k * 100 + 10;
			arr = new int[n];
			for (int i = 0; i < n; ++i) {
				arr[i] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
			}
			out_input_data << n << '\n';
			for (int i = 0; i < n; ++i) {
				out_input_data << arr[i] << ' ';
			}
			out_input_data << '\n';
			
			for (int i = 0; i < n; ++i) {
				index_min = i;
				for (int j =i ; j <n; ++j)
					if (arr[index_min] > arr[j]) index_min = j;
				swap(arr[index_min], arr[i]);
			}
			for (int i = 0; i < n; ++i) {
				out_output_data << arr[i] << ' ';
			}
			out_output_data << "\n\n\n";
			n = 0;
			delete[] arr;
		}
		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 8: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << SORT_ARRAY_MIN << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_MIN_MAX_SORT << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_MIN_MAX_SORT << '\n';
		int n, index_min;
		int* arr;
		for (int k = 1; k <= 30; ++k) {
			n = rand() % k * 100 + 10;
			arr = new int[n];
			for (int i = 0; i < n; ++i) {
				arr[i] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
			}
			out_input_data << n << '\n';
			for (int i = 0; i < n; ++i) {
				out_input_data << arr[i] << ' ';
			}
			out_input_data << '\n';

			for (int i = 0; i < n; ++i) {
				index_min = i;
				for (int j = i; j < n; ++j)
					if (arr[index_min] < arr[j]) index_min = j;
				swap(arr[index_min], arr[i]);
			}
			for (int i = 0; i < n; ++i) {
				out_output_data << arr[i] << ' ';
			}
			out_output_data << "\n\n\n";
			n = 0;
			delete[] arr;
		}
		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 9: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << GEOM_PROGRESSIVE << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_GEOM << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_GEOM_ALG << '\n';
		long long n, a, d, * arr;
		for (int k = 1; k <= 30; ++k) {
			n = rand() % 100;
			arr = new long long[n];
			d = rand() % 9+1;
			a = arr[0] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
			out_input_data << n << ' ' << a << ' ' << d <<  '\n';
			for (int i = 1; i < n; ++i) {
				arr[i] = arr[i - 1] * d;
			}
			for (int i = 0; i < n; ++i) {
				out_output_data << arr[i] << ' ';
			}
			out_output_data << "\n\n\n";
			n = 0;
			delete[] arr;
		}
		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	case 10: {
		out_task.open("task.txt", ios::out);
		out_task << START_STRING << ALGEB_PROGRESSIVE << '\n';
		system("mkdir in");
		out_input_data.open("in/in.txt", ios::out);
		out_input_data << IN_ALG << '\n';
		system("mkdir out");
		out_output_data.open("out/out.txt", ios::out);
		out_output_data << OUT_GEOM_ALG << '\n';
		int n, a, d, * arr;
		for (int k = 1; k <= 30; ++k) {
			n = rand() % 1000;
			arr = new int[n];
			d = rand() % 20 + 1;
			a = arr[0] = (int)pow(-1, rand() % 2 + 1) * rand() % 100 + 1;
			out_input_data << n << ' ' << a << ' ' << d << '\n';
			for (int i = 1; i < n; ++i) {
				arr[i] = arr[0] + d*(i-1);
			}
			for (int i = 0; i < n; ++i) {
				out_output_data << arr[i] << ' ';
			}
			out_output_data << "\n\n\n";
			n = 0;
			delete[] arr;
		}
		out_input_data.close();
		out_output_data.close();
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A in.rar in");
		system(" \"C:\\Program Files\\WinRAR\\Rar.exe\" A out.rar out");
		break;
	}
	default:
		break;
	}
	system("pause");
	return 0;
}