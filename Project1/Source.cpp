#include <iostream>
#include<list>
using namespace std;
class YoutubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> publishedVideoTitles;
		
	YoutubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}
	void getInfo(){
		cout << "Name " << Name << endl;
		cout << "Owner " << OwnerName << endl;
		cout << "Subs " << SubscribersCount << endl;
		cout << "Videos: ";
		for (string VideoTitle : publishedVideoTitles)
		{
			cout << VideoTitle << " ";
		}
	}
};


int main()
{
	YoutubeChannel ytChannel("Rares","Rareshdr");
	ytChannel.publishedVideoTitles.push_back("Minecraft");
	ytChannel.publishedVideoTitles.push_back("World Of Warcraft");
	YoutubeChannel ytChannel2("Rarica", "RaricaHdr");
	ytChannel2.publishedVideoTitles.push_back("Stardew Valley");


	/*ytChannel.Name = "Rares";
	ytChannel.OwnerName = "RaresHdr";
	ytChannel.SubscribersCount = 123;
	ytChannel.publishedVideoTitles = { "C++ Ep.1","HTML Ep.1","C# Ep.1" };*/

	/*cout << "Name " << ytChannel.Name<<endl;
	cout << "Owner " << ytChannel.OwnerName << endl;
	cout << "Subs " << ytChannel.SubscribersCount << endl;
	cout << "Videos: ";
	for (string VideoTitle : ytChannel.publishedVideoTitles)
	{
		cout << VideoTitle << " ";
	}*/
	/*cout << endl << endl;;
	cout << "Name " << ytChannel2.Name << endl;
	cout << "Owner " << ytChannel2.OwnerName << endl;
	cout << "Subs " << ytChannel2.SubscribersCount << endl;
	cout << "Videos: ";
	for (string VideoTitle : ytChannel2.publishedVideoTitles)
	{
		cout << VideoTitle << " ";
	}*/

	ytChannel.getInfo();
	ytChannel2.getInfo();
}