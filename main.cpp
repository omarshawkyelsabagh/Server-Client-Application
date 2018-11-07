//
//  main.cpp
//  HTTPServer
//
//  Created by mac on 11/3/18.
//  Copyright © 2018 mac. All rights reserved.
//

#include <iostream>
#include "types.h"
#include "HTTP_Server.h"
#include "Request_Parser.h"
#include "Response_Builder.h"

using namespace std;


int main(int argc, const char * argv[]) {
    /*
    if(argc < 2){
       cout<<"The server port number is not specified"<<endl;
       exit(0);
    }
    Port server_Port = atoi(argv[1]);
     */
    
    /*
    HTTP_Server server;
    Port server_Port = 7799;
    if(!server.initialize_Conn(LOCALHOST,server_Port)){
        cout<<"Socket Creation Error"<<endl;
        exit(0);
    }else{
        cout<<"Socket Created Successfully"<<endl;
        while(1);
    }
     */
    
    /*
    Request_Parser p;
    string req = "Get /home/omar.html HTTP1.1\r\nContent_Type:txt\r\nContent_Lenght:anything";
    vector<string> v = p.parse_Request(req);
    for(string s : v){
        cout<<s<<endl;
    }
    cout<<p.get_File_Extention();
     */
    
    
    Response_Builder r;
    r.set_Status(true);
    r.set_Content("<p> The paragraph in an HTML FILE returned from the server <p>");
    r.set_HTTP_Vesion(HTTP_ONE);
    r.set_Content_Type("html");
    string s = r.build_Response();
    cout<<s<<endl;
    
    
    return 0;
}
//this port number is used only for testing
//Port server_Port = 7799;
// cout<<LOCALHOST<<endl;
