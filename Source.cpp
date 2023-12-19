#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Enter(vector <double> &val, int k)
{
	for (int i = 0; i < k; i++)
	{
		double temp;
		cin >> temp;
		val.push_back(temp);
	}
}
void Output(vector <double> &value)
{
	for (int i = 0; i < value.size(); i++)
	{	
		cout << fixed << setprecision(3) << value[i] << ' ';
	}
	cout << endl;
}
void Sum(vector <double> &temp) 
{
	double sum = 0;
	for (int i = 0; i < temp.size(); i++)
	{
		sum += temp[i];
	}
	temp.push_back(sum);
}
void MiddleArifmetic(vector <double>& temp)
{
	double sum = 0;
	for (int i = 0; i < temp.size()-1; i++)
	{
		sum += temp[i];
	}
	double result = sum / (temp.size()-1);
	temp.push_back(result);
}

void MinSum(vector <double>& temp)
{
	double sum = 0;
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] < 0)
		{
			sum += temp[i];
		}
	}
	sum = sum / 2;
	for (int i = 0; i < temp.size(); i++)
	{
		temp[i] += sum;
	}
}

void Add(vector <double>& temp)
{
	double num;
	cin >> num;
	temp.push_back(num);
}

void Delete(vector <double>& temp)
{
	temp.pop_back();
}



void Commands(vector <double>& temp)
{
	bool fl = true;
	while (fl) 
	{
		int num;
		cin >> num;
		switch (num) {
		case 1:
			cout << "+:"<<temp.size()+1<<endl;
			Add(temp);
			Output(temp);
			Sum(temp);
			MiddleArifmetic(temp);

			Output(temp);

			MinSum(temp);
			Output(temp);
			break;
		case 2:
			cout << "-:" << temp.size() - 1<<endl;
			Delete(temp);
			Output(temp);
			Sum(temp);
			MiddleArifmetic(temp);

			Output(temp);

			MinSum(temp);
			Output(temp);
			break;
		case 0:
			fl = false;
			break;

		}

	}

}

int main() 
{
	int count;
	vector <double> Conteiner;
	cin >> count;
	cout << count<<endl;
	Enter(Conteiner, count);
	Output(Conteiner);

	Sum(Conteiner);
	MiddleArifmetic(Conteiner);
	Output(Conteiner);

	MinSum(Conteiner);
	Output(Conteiner);

	Commands(Conteiner);

	return 0;
}
