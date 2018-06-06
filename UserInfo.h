#pragma once
#include <string>
#include <vector>

struct Entry
{
  std::string name;
  std::string username;
  std::string email;
  std::string password;
  std::string url;
  std::string note;
};

struct Category
{
  std::string name;
  std::vector<Entry> entries;
};

class UserInfo
{
public:
  static std::vector<Category>& Categories();
  static void Save();
  static void ReadFromFile();
private:
  static std::vector<Category> categories_;
};