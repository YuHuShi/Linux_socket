#pragma once
#include <string>


class linux_server
{
public:
    ~linux_server();
    void addGun(Gun *ptr_gun);
    void addBulletToGun(int num);
    bool fire();
private:
    std::string _name;
    Gun *_ptr_gun;
};