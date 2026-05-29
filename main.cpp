#include <iostream>
#include <string>

int main()
{
  std::cout << "Group  5130904/50003 emails" << '\n';

  std::string emails[] {
  // добавлять корпоративные email здесь
  "altynbaeva.af@edu.spbstu.ru"
  "malevanaya.ms@edu.spbstu.ru",
  "yuriev.dl@edu.spbstu.ru",
  "koropov.vo@edu.spbstu.ru",
  "chervinskij_ap@spbstu.ru",
  "tsuremichev.ga@edu.spbstu.ru",
  "tomilova2.em@edu.spbstu.ru",
  "barzhin.yaa@edu.spbstu.ru",
  "rtitshev.gs@edu.spbstu.ru",
};

  for (const auto & e : emails)
  {
    std::cout << e << '\n';
  }

  return 0;
}
