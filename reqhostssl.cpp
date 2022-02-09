#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main() {
    int ret = system("/usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/privkey.pem /etc/letsencrypt/live/$HOSTNAME/cert.pem > /var/cpanel/ssl/cpanel/cpanel.pem && /usr/bin/chown cpanel:cpanel /var/cpanel/ssl/cpanel/cpanel.pem && /usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/privkey.pem > /var/cpanel/ssl/exim/exim.key && /usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/cert.pem > /var/cpanel/ssl/exim/exim.crt && /usr/bin/chown mailnull:mail /var/cpanel/ssl/exim/exim.* && /usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/privkey.pem > /var/cpanel/ssl/ftp/ftpd-rsa-key.pem && /usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/cert.pem > /var/cpanel/ssl/ftp/ftpd-rsa.pem && /usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/privkey.pem /etc/letsencrypt/live/$HOSTNAME/cert.pem > /var/cpanel/ssl/ftp/pure-ftpd.pem && /usr/bin/chown root:wheel /var/cpanel/ssl/ftp/* && /usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/privkey.pem > /var/cpanel/ssl/dovecot/dovecot.key && /usr/bin/cat /etc/letsencrypt/live/$HOSTNAME/cert.pem > /var/cpanel/ssl/dovecot/dovecot.crt && /usr/bin/chown root:wheel /var/cpanel/ssl/dovecot/dovecot.* && /usr/bin/systemctl restart cpanel.service && /usr/bin/systemctl restart exim.service && /usr/bin/systemctl restart pure-ftpd.service && /usr/bin/systemctl restart dovecot.service");
    return 0;
}
