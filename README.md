# cphostssl
A script to install Let's Encrypt SSL on cPanel hostname.

## How to use it?
Make sure that "certbot" is already installed on your server. If not, run the following command to install:
> yum install epel-release -y && yum install --enablerepo=epel certbot -y

Also install Development Tools libraries on your server to compile and execute the required application.
>  yum groupinstall "Development Tools" -y --skip-broken

Once the above required libraries are installed, clone the github repository on your server.

Modify the file "application.cpp" and replace the email instead of yourname@example.com

Now compile the both files and move the compiled "reqhostssl" file to "/usr/bin" directory.

Now, if you execute the compiled "application" file, it will install an SSL certificate.
