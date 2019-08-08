//mastodon-cpp
#include <iostream>
#include <string>
#include <ifstream>
#include <mastodon-cpp/mastodon-cpp.hpp>

int main(int argc, char *argv[]){
        std:ifstream file("token.txt");
        std:string domain,token;
        file>>domain;
        file>>token;
        std::cout << "changing name..."<<std::endl;
        Mastodon::API masto(domain, token);
        masto.patch(Mastodon::API::v1::accounts_update_credentials,{{"display_name",{name}}});
}
