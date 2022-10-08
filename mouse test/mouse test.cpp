#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

string option;
string text_social1;
string text_social2;
string text_social3;
string text_social4;
string text_social5;
string text_art1;
string text_art2;
string text_art3;
string text_art4;
string text_art5;
string text_sport1;
string text_sport2;
string text_sport3;
string text_sport4;
string text_sport5;

//functions of follow\unfollow and show news
void art();
void social();
void sport();
//the first struct is for admin login
struct admin
{
	string name;
	int password = 0;
};


//the second struct is for user sign up
struct user
{
	string name;
	int password = 0;
};

void addtotextfile(string text, string filebath)
{
	ofstream myfile;
	myfile.open(filebath, ios::out | ios::app);
	myfile << text << endl;
	myfile.close();

}

int main()
{
	int ans1, ans2, ans3;
	int data;
	int f1;
	cout << "To login as admin press 1 / To login as user press 2" << endl;
	cin >> data;
	if (data == 1)
	{
		admin x;
		x.name = "boss";
		x.password = 405060;


		string name;
		int pass;
		cout << "enter your username" << endl;
		cin >> name;

		cout << "enter your password" << endl;
		cin >> pass;

		if (name == x.name && pass == x.password)
		{
			char chois;
			cout << "You are logged in as admin\n " << endl;
			cout << " \n If you want to edit news press e / If you want to read news press r \n" << endl;
			cin >> chois;
			if (chois == 'e')
			{
				string edit_choise;
				cout << "\n what type of news you want to edit \n (1)incase you want social write social \n (2)incase you want art write art \n (3)and incase sport write sport  " << endl;
				string typeofnews;
				cin >> typeofnews;
				if (typeofnews == "social")
				{
					cout << "which article do you want to edit? 1 / 2 / 3 / 4 / 5\n" << endl;
					cin >> ans1;

					if (ans1 == 1)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/social/social1.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{

							std::ifstream myFile("Debug/social/social1.txt");

							std::string str;
							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile, text_social1))
							{
								std::cout << str << "\n";
								// Output the text from the file
								cout << text_social1;
							}

							//edit text by admin


							cout << "\n \n enter your edit words" << endl;

							do
							{
								getline(cin, text_social1);

								addtotextfile(text_social1, "Debug/social/social1.txt");

							} while (text_social1 != "..");
						}

					}
					else if (ans1 == 2)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/social/social2.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_social2;
							std::ifstream myFile("Debug/social/social2.txt");

							std::string str;
							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile, text_social2))
							{
								std::cout << str << "\n";
								// Output the text from the file
								cout << text_social2;
							}

							//edit text by admin


							cout << "\n \n enter your edit words" << endl;

							do
							{
								getline(cin, text_social2);

								addtotextfile(text_social2, "Debug/social/social2.txt");

							} while (text_social2 != "..");
						}

					}
					else if (ans1 == 3)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/social/social3.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_social3;
							std::ifstream myFile("Debug/social/social3.txt");

							std::string str;
							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile, text_social3))
							{
								std::cout << str << "\n";
								// Output the text from the file
								cout << text_social3;
							}

							//edit text by admin


							cout << "\n \n enter your edit words" << endl;

							do
							{
								getline(cin, text_social3);

								addtotextfile(text_social3, "Debug/social/social3.txt");

							} while (text_social3 != "..");
						}

					}
					else if (ans1 == 4)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/social/social4.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_social4;
							std::ifstream myFile("Debug/social/social4.txt");

							std::string str;
							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile, text_social4))
							{
								std::cout << str << "\n";
								// Output the text from the file
								cout << text_social4;
							}

							//edit text by admin


							cout << "\n \n enter your edit words" << endl;

							do
							{
								getline(cin, text_social4);

								addtotextfile(text_social4, "Debug/social/social4.txt");

							} while (text_social4 != "..");
						}

					}
					else if (ans1 == 5)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/social/social5.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_social5;
							std::ifstream myFile("Debug/social/social5.txt");

							std::string str;
							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile, text_social5))
							{
								std::cout << str << "\n";
								// Output the text from the file
								cout << text_social5;
							}

							//edit text by admin


							cout << "\n \n enter your edit words" << endl;

							do
							{
								getline(cin, text_social5);

								addtotextfile(text_social5, "Debug/social/social5.txt");

							} while (text_social5 != "..");
						}
					}
				}
				else if (typeofnews == "art")
				{
					cout << "which article do you want to edit? 1 / 2 / 3 / 4 / 5\n" << endl;
					cin >> ans2;
					if (ans2 == 1)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/art/art1.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_art1;
							ifstream myFile2("Debug/art/art1.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_art1))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_art1;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_art1);

								addtotextfile(text_art1, "Debug/art/art1.txt");

							} while (text_art1 != "..");
						}

					}
					if (ans2 == 2)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/art/art2.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_art2;
							ifstream myFile2("Debug/art/art2.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_art2))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_art2;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_art2);

								addtotextfile(text_art2, "Debug/art/art2.txt");

							} while (text_art2 != "..");
						}
					}
					if (ans2 == 3) {
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/art/art3.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string  text_art3;
							ifstream myFile2("Debug/art/art3.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_art3))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_art3;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_art3);

								addtotextfile(text_art3, "Debug/art/art3.txt");

							} while (text_art3 != "..");
						}
					}
					if (ans2 == 4)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/art/art4.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string  text_art4;
							ifstream myFile2("Debug/art/art4.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_art4))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_art4;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_art4);

								addtotextfile(text_art4, "Debug/art/art4.txt");

							} while (text_art4 != "..");
						}
					}
					if (ans2 == 5)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/art/art5.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_art5;
							ifstream myFile2("Debug/art/art5.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_art5))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_art5;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_art5);

								addtotextfile(text_art5, "Debug/art/art5.txt");

							} while (text_art5 != "..");
						}
					}
				}
				else
				{
					cout << "which article do you want to edit? 1 / 2 / 3 / 4 / 5\n" << endl;
					cin >> ans3;
					if (ans3 == 1)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/sport/sport1.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_sport1;
							ifstream myFile2("Debug/sport/sport1.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_sport1))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_sport1;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_sport1);

								addtotextfile(text_sport1, "Debug/sport/sport1.txt");

							} while (text_sport1 != "..");
						}

					}
					if (ans3 == 2)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/sport/sport2.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_sport2;
							ifstream myFile2("Debug/sport/sport2.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_sport2))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_sport2;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_sport2);

								addtotextfile(text_sport2, "Debug/sport/sport2.txt");

							} while (text_sport2 != "..");
						}

					}
					if (ans3 == 3)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/sport/sport3.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string text_sport3;
							ifstream myFile2("Debug/sport/sport3.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_sport3))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_sport3;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_sport3);

								addtotextfile(text_sport3, "Debug/sport/sport3.txt");

							} while (text_sport3 != "..");
						}

					}
					if (ans3 == 4)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/sport/sport4.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string  text_sport4;
							ifstream myFile2("Debug/sport/sport4.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_sport4))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_sport4;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_sport4);

								addtotextfile(text_sport4, "Debug/sport/sport4.txt");

							} while (text_sport4 != "..");
						}

					}
					if (ans3 == 5)
					{
						cout << "what type of edit you want to apply \n (1) incase add news for a specific article write add  \n (2) incase remove a specific article write remove " << endl;
						cin >> edit_choise;
						if (edit_choise == "remove")
						{
							remove("Debug/sport/sport5.txt");
							cout << "Article has been deleted successfully" << endl;
						}
						else if (edit_choise == "add")
						{
							//string  text_sport5;
							ifstream myFile2("Debug/sport/sport5.txt");
							string str2;

							// Use a while loop together with the getline() function to read the file line by line
							while (getline(myFile2, text_sport5))
							{
								//split lines from others 
								cout << str2 << "\n";
								// Output the text from the file
								cout << text_sport5;

							}

							//edit text by admin
							cout << "\n enter your edit words" << endl;

							do
							{
								getline(cin, text_sport5);

								addtotextfile(text_sport5, "Debug/sport/sport5.txt");

							} while (text_sport5 != "..");
						}

					}
				}
				system("pause");
			}
			else if (chois == 'r')
			{
				do
				{
					string cateogry;
					cout << "\n what type of news you want to read? \n (1)incase you want social write social \n (2)incase you want art write art \n (3)and incase sport write sport  " << endl;
					cin >> cateogry;
					if (cateogry == "social")
					{
						//string text_social1;
						std::ifstream myFile_social1("Debug/social/social1.txt");

						std::string str_social1;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_social1, text_social1))
						{
							std::cout << str_social1 << "\n";
							// Output the text from the file
							cout << text_social1;
						}

						//string text;
						std::ifstream myFile_social2("Debug/social/social2.txt");

						std::string str_social2;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_social2, text_social2))
						{
							std::cout << str_social2 << "\n";
							// Output the text from the file
							cout << text_social2;
						}

						//string text;
						std::ifstream myFile_social3("Debug/social/social3.txt");

						std::string str_social3;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_social3, text_social3))
						{
							std::cout << str_social3 << "\n";
							// Output the text from the file
							cout << text_social3;
						}

						//string text;
						std::ifstream myFile_social4("Debug/social/social4.txt");

						std::string str_social4;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_social4, text_social4))
						{
							std::cout << str_social4 << "\n";
							// Output the text from the file
							cout << text_social4;
						}

						//string text;
						std::ifstream myFile_social5("Debug/social/social5.txt");

						std::string str_social5;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_social5, text_social5))
						{
							std::cout << str_social5 << "\n";
							// Output the text from the file
							cout << text_social5;
						}

					}
					else if (cateogry == "art")
					{
						//string text2;
						ifstream myFile_art1("Debug/art/art1.txt");
						string str_art1;

						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_art1, text_art1))
						{
							//split lines from others 
							cout << str_art1 << "\n";
							// Output the text from the file
							cout << text_art1;

						}

						//string text2;
						ifstream myFile_art2("Debug/art/art2.txt");
						string str_art2;

						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_art2, text_art2))
						{
							//split lines from others 
							cout << str_art2 << "\n";
							// Output the text from the file
							cout << text_art2;

						}

						//string text2;
						ifstream myFile_art3("Debug/art/art3.txt");
						string str_art3;

						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_art3, text_art3))
						{
							//split lines from others 
							cout << str_art3 << "\n";
							// Output the text from the file
							cout << text_art3;

						}

						//string text2;
						ifstream myFile_art4("Debug/art/art4.txt");
						string str_art4;

						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_art4, text_art4))
						{
							//split lines from others 
							cout << str_art4 << "\n";
							// Output the text from the file
							cout << text_art4;

						}

						//string text2;
						ifstream myFile_art5("Debug/art/art5.txt");
						string str_art5;

						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_art5, text_art5))
						{
							//split lines from others 
							cout << str_art5 << "\n";
							// Output the text from the file
							cout << text_art5;

						}
					}
					else if (cateogry == "sport")
					{
						//string text3 = "Debug/sport/sport1.txt";
						std::ifstream myFile_sport1("Debug/sport/sport1.txt");

						std::string str_sport1;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_sport1, text_sport1))
						{
							std::cout << str_sport1 << "\n";
							// Output the text from the file
							cout << text_sport1;
						}

						//string text3 = "Debug/sport/sport2.txt";
						std::ifstream myFile_sport2("Debug/sport/sport2.txt");

						std::string str_sport2;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_sport2, text_sport2))
						{
							std::cout << str_sport2 << "\n";
							// Output the text from the file
							cout << text_sport2;
						}

						//string text3 = "Debug/sport/sport3.txt";
						std::ifstream myFile_sport3("Debug/sport/sport3.txt");

						std::string str_sport3;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_sport3, text_sport3))
						{
							std::cout << str_sport3 << "\n";
							// Output the text from the file
							cout << text_sport3;
						}

						//string text3 = "Debug/sport/sport4.txt";
						std::ifstream myFile_sport4("Debug/sport/sport4.txt");

						std::string str_sport4;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_sport4, text_sport4))
						{
							std::cout << str_sport4 << "\n";
							// Output the text from the file
							cout << text_sport4;
						}

						//string text3 = "Debug/sport/sport5.txt";
						std::ifstream myFile_sport5("Debug/sport/sport5.txt");

						std::string str_sport5;
						// Use a while loop together with the getline() function to read the file line by line
						while (getline(myFile_sport5, text_sport5))
						{
							std::cout << str_sport5 << "\n";
							// Output the text from the file
							cout << text_sport5;
						}
					}

					cout << " \n \n do you want to read any another news ?" << endl;

					cin >> option;

				} while (option == "yes");
				 cout << "thank you" << endl;
			}
		}
		else if (name != x.name || pass != x.password)
		{
			cout << "invalid login! \n please try again" << endl;
		}
	}
	else if (data == 2)
	{

		cout << "welcome to our app as user \n \n " << endl;
		user u1;

		u1.name = "mike";
		u1.password = 1111;

	         string name;
	           int pass;
			   cout << "enter the username" << endl;
			   cin >> name;
			   cout << "enter the password" << endl;
			   cin >> pass;

		if (name == u1.name && pass == u1.password)
		{
			cout << "\n welcome: " << name << endl;
			// make a code that empliment a read news!


			char c;
			int arr[4];
			cout << " \n Would you like to follow / unfollow news or would you like to read news? \n If you want to follow / unfollow type (f) \n if you want to read news type (r)" << endl;
			cin >> c;
			if (c == 'f')
			{
				cout << "if you want to follow a specific category prees (1), and if you want to unfollow press(0): \n";
				cout << "sport: "; cin >> arr[0]; cout << endl;
				cout << "art: "; cin >> arr[1]; cout << endl;
				cout << "social: "; cin >> arr[2]; cout << endl;
				//1
				if (arr[0] == 1 && arr[1] == 1 && arr[2] == 1)
				{
					cout << "Sport :" << endl;
					sport();
					
					cout << "Social :" << endl;
					social();
					
					cout << "Art :" << endl;
					art();
					
					system("pause");
				}
				//2
				else if (arr[0] == 1 && arr[1] == 1 && arr[2] == 0)
				{
					cout << "Sport :" << endl;
					sport();
					
					cout << "Art :" << endl;
					art();
					
					system("pause");
				}
				//3
				else if (arr[0] == 1 && arr[1] == 0 && arr[2] == 0)
				{
					cout << "Sport :" << endl;
					sport();
					
					system("pause");
				}
				//4
				else if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
				{
					cout << "sorry, there are no news to show\n";
				}
				//5
				else if (arr[0] == 0 && arr[1] == 1 && arr[2] == 1)
				{
					cout << "Social :" << endl;
					social();
					
					cout << "Art :" << endl;
					art();
					
					system("pause");

				}
				//6
				else if (arr[0] == 0 && arr[1] == 0 && arr[2] == 1)
				{
					cout << "Social :" << endl;
					social();
				
					system("pause");
				}
				//7
				else if (arr[0] == 0 && arr[1] == 1 && arr[2] == 0)
				{
					cout << "Art :" << endl;
					art();
					
					system("pause");
				}
				//8
				else if (arr[0] == 1 && arr[1] == 0 && arr[2] == 1)
				{
					cout << "Sport :" << endl;
					sport();
					
					cout << "Social :" << endl;
					social();
					
					system("pause");
				}
			}
			else if (c == 'r')
			{
				sport();
				
				social();
				
				art();
				
				system("pause");

			}
		}
		else if (name != u1.name || pass != u1.password)
		{
			cout << "Error! please enter a valid username and password" << endl;

		}

	}
	return 0;
}

void sport()
{
	char c;
	ifstream in_sport1("Debug/sport/sport1.txt");
	while (!in_sport1.eof())
	{
		in_sport1.get(c);
		cout << c;
	}
	cout << endl;
	in_sport1.close();
	cout << endl;

	ifstream in_sport2("Debug/sport/sport2.txt");
	while (!in_sport2.eof())
	{
		in_sport2.get(c);
		cout << c;
	}
	cout << endl;
	in_sport2.close();
	cout << endl;

	ifstream in_sport3("Debug/sport/sport3.txt");
	while (!in_sport3.eof())
	{
		in_sport3.get(c);
		cout << c;
	}
	cout << endl;
	in_sport3.close();
	cout << endl;

	ifstream in_sport4("Debug/sport/sport4.txt");
	while (!in_sport4.eof())
	{
		in_sport4.get(c);
		cout << c;
	}
	cout << endl;
	in_sport4.close();
	cout << endl;

	ifstream in_sport5("Debug/sport/sport5.txt");
	while (!in_sport5.eof())
	{
		in_sport5.get(c);
		cout << c;
	}
	cout << endl;
	in_sport5.close();
	cout << endl;
	//system("pause");

}
void social()
{
	char c;
	ifstream in_social1("Debug/social/social1.txt");
	while (!in_social1.eof())
	{
		in_social1.get(c);
		cout << c;
	}
	cout << endl;
	in_social1.close();
	cout << endl;

	ifstream in_social2("Debug/social/social2.txt");
	while (!in_social2.eof())
	{
		in_social2.get(c);
		cout << c;
	}
	cout << endl;
	in_social2.close();
	cout << endl;

	ifstream in_social3("Debug/social/social3.txt");
	while (!in_social3.eof())
	{
		in_social3.get(c);
		cout << c;
	}
	cout << endl;
	in_social3.close();
	cout << endl;

	ifstream in_social4("Debug/social/social4.txt");
	while (!in_social4.eof())
	{
		in_social4.get(c);
		cout << c;
	}
	cout << endl;
	in_social4.close();
	cout << endl;

	ifstream in_social5("Debug/social/social5.txt");
	while (!in_social5.eof())
	{
		in_social5.get(c);
		cout << c;
	}
	cout << endl;
	in_social5.close();
	cout << endl;

	//system("pause");
}
void art()
{
	char c;
	ifstream in("Debug/art/art1.txt");
	while (!in.eof())
	{
		in.get(c);
		cout << c;
	}
	cout << endl;
	in.close();
	cout << endl;

	ifstream in2("Debug/art/art2.txt");
	while (!in2.eof())
	{
		in2.get(c);
		cout << c;
	}
	cout << endl;
	in2.close();
	cout << endl;

	ifstream in3("Debug/art/art3.txt");
	while (!in3.eof())
	{
		in3.get(c);
		cout << c;
	}
	cout << endl;
	in3.close();
	cout << endl;

	ifstream in4("Debug/art/art4.txt");
	while (!in4.eof())
	{
		in4.get(c);
		cout << c;
	}
	cout << endl;
	in4.close();
	cout << endl;

	ifstream in5("Debug/art/art5.txt");
	while (!in5.eof())
	{
		in5.get(c);
		cout << c;
	}
	cout << endl;
	in5.close();
	cout << endl;

	system("pause");
}