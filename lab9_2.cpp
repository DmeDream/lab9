//Write the function printO() here
void printO(int M,int N){
	if (M >0 && N>0)
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout<<"O";
			}
			cout<<"\n";
		}
		
	}
	else {
	cout<<"Invalid input\n";
	}
}