#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main() {
    int ret = system("certbot --debug certonly -a webroot --agree-tos -m yourname@example.com --webroot-path=/usr/local/apache/htdocs --deploy-hook=/usr/bin/reqhostssl --renew-by-default -d $HOSTNAME");
    return 0;
}
