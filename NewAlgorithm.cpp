#include <iostream>
using namespace std;


void Lotto(int numbers[])
{
	srand((unsigned)time(0));

	int count = 0;
	
	while (count != 6)
	{
		int randValue = 1 + (rand() % 45);

		bool found = false;
		for (int i = 0; i < count; i++)
		{
			if (numbers[i] == randValue)
			{
				found = true;
				break;

			}

		}

		if (found == false)
		{
			numbers[count] = randValue;
			count++;

		}


	}

	rand();

}



int main()
{

	int numbers[6] = { };

	Lotto(numbers);

	//행운의 로또앱 완성
	for (int i = 0; i < 6; i++)
		cout << numbers[i] << endl;


	return 0;
}

