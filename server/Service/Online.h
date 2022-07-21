#pragma once

#include <json/json.h>
#include <string>
#include "../Util/MyTime.h"
#include <unordered_map>
#include <utility>

using namespace std;

class Online {
private:
    struct user {
        int account;
        string username;
        string loginTime;
    };
    unordered_map<int, int> writeFdToReadFd;// 读文件描述符
    unordered_map<int, int> accountToFd;    // 写文件描述符
    unordered_map<int, user> userMap;
public:
    string getOnlineListStr();

    bool appendUser(int account, string username);

    bool removeUser(int account);

    bool appendUser(pair<int, string> &user);

    int getReadFd(int writeFd);

    vector<int> getAllReadFd();

    bool appendWriteFd(int account, int fd);

    bool appendReadFd(int account, int fd);

    string getUserJsonStr(int account);

    string getUserName(int account);

    bool isLogin(int account);

};