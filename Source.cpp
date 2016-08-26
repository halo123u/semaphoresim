//Oswaldo Almazo
//simulation of semaphore concenpt
//There are only two available spaces for the readers who want to gain access
//if a write takes over the file, it takes up both spaces.
//I will simulate context switch by adding various switch statements.

# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

typedef int Semaphore;
//available resources
Semaphore s=2;
//counters for writers and readers
//must be global in order to simulate asynchronous behaviour
	int rc1 = 0, rc2 = 0, rc3 = 0, wc1 = 0, wc2 = 0;
	int writercount = 0,readercount=0;
//functions representing readers/writers
void reader1(int);
void reader2(int);
void reader3(int);
void writer1(int);
void writer2(int);


int main(){
	int T;
	srand(static_cast<unsigned int>(time(0)));
	
	//the loop generates a random number and iterates 5000  times
	//until all switch statements are exhausted
	for (int i = 0; i < 5000; i++){
		T = (rand() % 5);
		switch (T)
		{
		case 0: reader1(rc1); break;

		case 1: reader2(rc2); break;

		case 2: reader3(rc3); break;

		case 3: writer1(wc1); break;

		default: writer2(wc2); break;
		}
	}
	system("pause");
	return 0;
}
void reader1(int x){

	switch (x){
	case 0: cout << "Reader 1 initializes.\n"; rc1++; break;
	case 1: cout << "Reader 1 is preparing to enter CS\n"; rc1++; break;
	case 2: cout << "Reader 1 is preparing to enter CS\n"; rc1++; break;
	case 3: cout << "Reader 1 is preparing to enter CS\n"; rc1++; break;
	case 4: cout << "Reader 1 is preparing to enter CS\n"; rc1++; break;
	case 5: cout << "Reader 1 is preparing to enter CS\n"; rc1++; break;
	case 6: cout << "Reader 1 is preparing to enter CS\n"; rc1++; break;
	case 7: if (s < 2){
		if (writercount == 1&&s==-1)
				cout << "Reader1 cannot enter CS since 1 writer is on the critical section\n"; break;
		if (s == 0)
			cout << "R1 cannot enter CS since there are two readers inside\n"; break;
	}
			else

				cout << "reader 1 has entered CS***************************\n"; rc1++; s--; readercount++;
		if (s == 1 && readercount == 1)
			cout << "Reader 1 is reading alone\n"; 
		break;

	case 8: cout << "reader1 is in the critical section\n"; rc1++; break;
	case 9: cout << "reader1 is in the critical section\n"; rc1++; break;
	case 10: cout << "reader1 is in the critical section\n"; rc1++; break;
	case 11: cout << "reader1 is in the critical section\n"; rc1++; break;
	case 12: cout << "reader1 is in the critical section\n"; rc1++; break;
	case 13: cout << "reader1 is in the critical section\n"; rc1++; break;
	case 14:cout << "Reader is getting ready to exit its critical section\n"; rc1++; break;
	case 15: cout << "R1 has exited the critical sectionxxxxxxxxxxxxxxxxx\n"; s++; rc1++; readercount--; break;
	
	case 16: cout << "Reader1 is working outside of its critical section\n"; rc1++; break;
	case 17: cout << "Reader1 is working outside of its critical section\n"; rc1++; break;
	case 18: cout << "Reader1 is working outside of its critical section\n"; rc1++; break;
	case 19: cout << "Reader1 is working outside of its critical section\n"; rc1++; break;
	case 20: cout << "Reader1 is working outside of its critical section\n"; rc1++; break;
	case 21: cout << "Reader1 is working outside of its critical section\n"; rc1++; break;
	case 22: cout << "Reader1 is working outside of its critical section\n"; rc1++; break;
	case 23: cout << "Reader1 is terminating its process\n"; rc1++; break;
	default: break;
	}
}

void reader2(int x){

	switch (x){
	case 0: cout << "Reader 2 initializes.....\n"; rc2++; break;
	case 1: cout << "Reader 2 is preparing to enter its critical section\n"; rc2++; break;
	case 2: cout << "Reader 2 is preparing to enter its critical section\n"; rc2++; break;
	case 3: cout << "Reader 2 is preparing to enter its critical section\n"; rc2++; break;
	case 4: cout << "Reader 2 is preparing to enter its critical section\n"; rc2++; break;
	case 5: cout << "Reader 2 is preparing to enter its critical section\n"; rc2++; break;
	case 6: cout << "Reader 2 is preparing to enter its critical section\n"; rc2++; break;
	case 7: if (s < 2){
		
		if (writercount == 1&&s==-1)
				cout << "Reader2 cannot enter CS since 1 writer is on the critical section\n"; break;
		if (s == 0)
			cout << "R2 cannot enter CS since there are two readers inside\n"; break;
	}
			else
			cout << "reader2 entered the CS*************************\n"; rc2++; s--; readercount++;
				if (s == 1 && readercount == 1)
					cout << "Reader2 is reading alone\n";
				break;

	case 8: cout << "reader 2 is in the critical section\n"; rc2++; break;
	case 9: cout << "reader 2 is in the critical section\n"; rc2++; break;
	case 10: cout << "reader 2 is in the critical section\n"; rc2++; break;
	case 11: cout << "reader 2 is in the critical section\n"; rc2++; break;
	case 12: cout << "reader 2 is in the critical section\n"; rc2++; break;
	case 13: cout << "reader 2 is in the critical section\n"; rc2++; break;
	case 14:cout << "Reader 2 is getting ready to exit its critical section\n"; rc2++; break;
	case 15: cout << "Reader 2 has exited the CSxxxxxxxxxxxxxxxxxxxxxxxxxx\n"; s++; rc2++; readercount--; break;

	case 16: cout << "Reader 2 is working outside of its critical section\n"; rc2++; break;
	case 17: cout << "Reader 2 is working outside of its critical section\n"; rc2++; break;
	case 18: cout << "Reader 2 is working outside of its critical section\n"; rc2++; break;
	case 19: cout << "Reader 2 is working outside of its critical section\n"; rc2++; break;
	case 20: cout << "Reader 2 is working outside of its critical section\n"; rc2++; break;
	case 21: cout << "Reader 2 is working outside of its critical section\n"; rc2++; break;
	case 22: cout << "Reader 2 is working outside of its critical section\n"; rc2++; break;
	case 23: cout << "Reader 2 is terminating its process\n"; rc2++; break;
	default: break;
	}
}
void reader3(int x){

	switch (x){
	case 0: cout << "Reader 3 initializes.\n"; rc3++; break;
	case 1: cout << "Reader 3 is preparing to enter its critical section\n"; rc3++; break;
	case 2: cout << "Reader 3 is preparing to enter its critical section\n"; rc3++; break;
	case 3: cout << "Reader 3 is preparing to enter its critical section\n"; rc3++; break;
	case 4: cout << "Reader 3 is preparing to enter its critical section\n"; rc3++; break;
	case 5: cout << "Reader 3 is preparing to enter its critical section\n"; rc3++; break;
	case 6: cout << "Reader 3 is preparing to enter its critical section\n"; rc3++; break;
	case 7: if (s < 2){
		if (writercount == 1 && s == -1)
			cout << "Reader3 cannot enter CS since 1 writer is on the critical section\n"; break;
		if (s == 0)
			cout << "R3 cannot enter CS since there are two readers inside\n"; break;
	}
			else
				cout << "reader3 entered the CS*****************8\n"; rc3++; s--; readercount++;
		if (s == 1 && readercount == 1)
			cout << "Reader3 is reading alone\n";
		break;

	case 8: cout << "reader 3 is in the critical section\n"; rc3++; break;
	case 9: cout << "reader 3 is in the critical section\n"; rc3++; break;
	case 10: cout << "reader 3 is in the critical section\n"; rc3++; break;
	case 11: cout << "reader 3 is in the critical section\n"; rc3++; break;
	case 12: cout << "reader 3 is in the critical section\n"; rc3++; break;
	case 13: cout << "reader 3 is in the critical section\n"; rc3++; break;
	case 14:cout << "Reader 3 is getting ready to exit its critical section\n"; rc3++; break;
	
	case 15: cout << "Reader3 has exited the critical sectionxxxxxxxxxxxxxxxxxx\n"; s++; rc3++; readercount--; break;
	case 16: cout << "Reader 3  is working outside of its critical section\n"; rc3++; break;
	case 17: cout << "Reader 3 is working outside of its critical section\n"; rc3++; break;
	case 18: cout << "Reader 3 is working outside of its critical section\n"; rc3++; break;
	case 19: cout << "Reader 3 is working outside of its critical section\n"; rc3++; break;
	case 20: cout << "Reader 3 is working outside of its critical section\n"; rc3++; break;
	case 21: cout << "Reader 3 is working outside of its critical section\n"; rc3++; break;
	case 22: cout << "Reader 3 is working outside of its critical section\n"; rc3++; break;
	case 23: cout << "Reader 3 is terminating its process\n"; rc3++; break;
	default: break;
	}
}
void writer1(int x){

		switch (x)
		{
		case 0: cout << "Writer1 is initializing\n"; wc1++; break;
		case 1: cout << "writer1 is preparing to enter CS\n"; wc1++; break;
		case 2: cout << "writer1 is preparing to enter CS\n"; wc1++; break;
		case 3: cout << "writer1 is preparing to enter CS\n"; wc1++; break;
		case 4: cout << "writer1 is preparing to enter CS\n"; wc1++; break;
		case 5: cout << "writer1 is preparing to enter CS\n"; wc1++; break;
		case 6: if (s < 2)
		{
			if (readercount>0)
				cout << "writer1 cannnot enter the critical section since there are readers inside CS\n"; break;
			if (writercount > 0)
				cout << "there is another writer inside the CS\n"; break;
		}
				else
					cout << "writer1 has entered the critical section****************************8\n";s=s - 3; wc1++; writercount; break;

		case 7:cout<<"writer1 is currently modifying data\n"; wc1++; break;
		case 8:cout << "writer1 is currently modifying data\n"; wc1++; break;
		case 9:cout << "writer1 is currently modifying data\n"; wc1++; break;
		case 10:cout << "writer1 is currently modifying data\n"; wc1++; break;
		case 11:cout << "writer1 is currently modifying data\n"; wc1++; break;
		case 12:cout << "writer1 is currently modifying data\n"; wc1++; break;
		case 13:cout << "writer1 is currently modifying data\n"; wc1++; break;
		case 14:cout << "writer1 is getting ready to exit the critical section"; wc1++; break;
		
		case 15:cout << "writer1 has exited the critical sectionxxxxxxxxxxxxxxx"; s = s + 3; wc1++; break;
		case 16:cout << "writer1 is working outside the critical section\n"; wc1++; break;
		case 17:cout << "writer1 is working outside the critical section\n"; wc1++; break;
		case 18:cout << "writer1 is working outside the critical section\n"; wc1++; break;
		case 19:cout << "writer1 is working outside the critical section\n"; wc1++; break;
		case 20:cout << "writer1 is working outside the critical section\n"; wc1++; break;
		case 21:cout << "writer1 is working outside the critical section\n"; wc1++; break;
		case 22:cout << "writer1 is terminating\n"; wc1++; break;
		default: break;

		}
	}
void writer2(int x){
		switch (x)
		{
		case 0: cout << "Writer2 is initializing\n"; wc2++; break;
		case 1: cout << "writer2 is preparing to enter CS\n"; wc2++; break;
		case 2: cout << "writer2 is preparing to enter CS\n"; wc2++; break;
		case 3: cout << "writer2 is preparing to enter CS\n"; wc2++; break;
		case 4: cout << "writer2 is preparing to enter CS\n"; wc2++; break;
		case 5: cout << "writer2 is preparing to enter CS\n"; wc2++; break;
		case 6: if (s < 2)
		{
			if (readercount > 0)
				cout << "writer2 cannnot enter the critical section since there are readers inside CS\n"; break;
			if (writercount > 0)
				cout << "there is another writer inside the CS\n"; break;
		}
				else
					cout << "writer 2 has entered CS******************\n";s=s - 3; wc2++; writercount++; break;

		case 7:cout<<"writer2 is currently modifying data\n"; wc2++; break;
		case 8:cout<<"writer2 is currently modifying data\n"; wc2++; break;
		case 9:cout<<"writer2 is currently modifying data\n"; wc2++; break;
		case 10:cout << "writer2 is currently modifying data\n"; wc2++; break;
		case 11:cout << "writer2 is currently modifying data\n"; wc2++; break;
		case 12:cout << "writer2 is currently modifying data\n"; wc2++; break;
		case 13:cout << "writer2 is currently modifying data\n"; wc2++; break;
		case 14:cout << "writer2 is getting ready to exit the critical section\n"; wc2++; break;
		
		case 15:cout << "writer2 has exited the critical sectionxxxxxxxxxxxxxxxxx\n"; s = s + 3; wc2++; break;
		case 16:cout << "writer2 is working outside the critical section\n"; wc2++; break;
		case 17:cout << "writer2 is working outside the critical section\n"; wc2++; break;
		case 18:cout << "writer2 is working outside the critical section\n"; wc2++; break;
		case 19:cout << "writer2 is working outside the critical section\n"; wc2++; break;
		case 20:cout << "writer2 is working outside the critical section\n"; wc2++; break;
		case 21:cout << "writer2 is working outside the critical section\n"; wc2++; break;
		case 22:cout << "writer2 is terminating\n"; wc2++; break;
		default: break;

		}
	}
			