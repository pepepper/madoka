//mastodon-cpp
#include <iostream>
#include <string>
#include <fstream>
#include <mastodon-cpp/mastodon-cpp.hpp>

int main(int argc, char *argv[]){
	if(argc<2){
		std::cout<<"too few argument";
		return 1;
	}
	std::ifstream file("token.txt");
	std::string domain,token;
	std::getline(file,domain);
	std::getline(file,token);
	file.close();
	Mastodon::API masto(domain, token);
	masto.post(Mastodon::API::v1::statuses,{{"status",{argv[1]}},{"visibility",{"unlisted"}}});
}

