#include <stdlib.h>
#include <stdio.h>
#define password "senhafoda"
#define password2 "admin"

verifica(){
char pw[400];
               printf("Digite a senha\n");
              gets(pw);
              if (strcmp(pw, password2) == 0)
                         printf("Senha Incorreta.\n");
             else if(strcmp(pw, password) == 0)
                        acessa();
             else
                        printf("Acesso Negado\n");
             return 0;
}

acessa(){
               printf("Logado Com Sucesso\n");
               return 0;
}

int main (int argc, char *argv[])
{
                if(argc > 1){
                             printf("Recusado\n");
                             exit(1);}
               verifica();
               return 0;
}
