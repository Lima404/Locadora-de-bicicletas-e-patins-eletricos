#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///     Projeto Sistema de de aluguel de patins elétricos e bicicletas      ///
///         Developed by @lima_g23 / @erick_bzrs -- since Mar, 2022         ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 1                                 ///
///////////////////////////////////////////////////////////////////////////////

int main(){

/// Funções
char tela_inicial (void);
void menu_usuario(void);
void menu_veiculos (void);
void menu_estoque (void);
void menu_aluguel (void);
void menu_vendas (void);
void menu_sobre (void);
void menu_adm (void);


/// Navegação principal
int main(void){
    char opcao;

    do {
        opcao = tela_inicial();
        switch (opcao){
        case '1': menu_aluguel();
            break;
        
        case '2': menu_veiculos();
            break;
        
        case '3': menu_estoque();
            break;

        case '4': menu_aluguel();
            break;

        case '5': menu_vendas();
            break;

        case '6': menu_sobre();
            break;

        case '7': menu_adm();
            break;
        }
    }   while (opcao != "0");
        return 0
;}



/// crud tela inicial

char tela_inicial(void){
    char op;

    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("=============    Universidade Federal do Rio Grande do Norte    ===============\n");
    printf("=============       Centro de Ensino Superior do Seridó         ===============\n");
    printf("=============        Disciplina DCT1106 -- Programação          ===============\n");
    printf("=============  Projeto Locadora de bicicletas e patins elétricos===============\n");
    printf("=============    Developed by @lima_g99 @erick_bzrs - 2022.2    ===============\n");
    printf("~~~                                                                         ~~~\n");
    printf("===============================================================================\n");
    printf("/// = = = = Sistema de Aluguel de bicicletas e patinetes elétricos = = = =  ///\n");
    printf("===============================================================================\n");
    printf("///            1. Menu Usuário:                                             ///\n");
    printf("///            2. Menu Veicúlos:                                            ///\n");
    printf("///            3. Menu Estoque:                                             ///\n");
    printf("///            4. Menu Aluguel:                                             ///\n");
    printf("///            5. Menu Vendas:                                              ///\n");
    printf("///            6. Menu Administração:                                       ///\n");
    printf("///            7. Menu Sobre:                                               ///\n");
    printf("///            0. Sair                                                      ///\n");
<<<<<<< Updated upstream
    printf("///                                                                         ///\n");
=======
    printf("///            Escolha por onde você quer navegar:                          ///\n");
    scanf("%c", &op);
    getchar();
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\twaiting...\n");
    sleep(1);
    return op;
}


/// CRUD MENU USUÁRIO:

char menu_usuario(void){
    char op;

    system("clear||cls");
    setlocale(LC_ALL,"");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("=============    Universidade Federal do Rio Grande do Norte    ===============\n");
    printf("=============       Centro de Ensino Superior do Seridó         ===============\n");
    printf("=============        Disciplina DCT1106 -- Programação          ===============\n");
    printf("=============  Projeto Locadora de bicicletas e patins elétricos===============\n");
    printf("=============    Developed by @lima_g99 @erick_bzrs - 2022.2    ===============\n");
    printf("~~~                                                                         ~~~\n");
    printf("===============================================================================\n");
    printf("/// = = = = Sistema de Aluguel de bicicletas e patinetes elétricos = = = =  ///\n");
    printf("===============================================================================\n");
    printf("///            1. Cadastro de Usuário:                                      ///\n");
    printf("///            2. Lista Usuário:                                            ///\n");
    printf("///            3. Apagar Usuário:                                           ///\n");
    printf("///            4. Editar Usuário:                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///            Escolha por onde você quer navegar:                          ///\n");
    scanf("%c", &op);
    getchar();
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\twaiting...\n");
    sleep(1);
    return op;
}



/// crud menu veiculos:

char menu_veiculos(void){
    char op;

    system("clear||cls");
    setlocale(LC_ALL,"");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("=============    Universidade Federal do Rio Grande do Norte    ===============\n");
    printf("=============       Centro de Ensino Superior do Seridó         ===============\n");
    printf("=============        Disciplina DCT1106 -- Programação          ===============\n");
    printf("=============  Projeto Locadora de bicicletas e patins elétricos===============\n");
    printf("=============    Developed by @lima_g99 @erick_bzrs - 2022.2    ===============\n");
    printf("~~~                                                                         ~~~\n");
    printf("===============================================================================\n");
    printf("/// = = = = Sistema de Aluguel de bicicletas e patinetes elétricos = = = =  ///\n");
    printf("===============================================================================\n");
    printf("///            1. Cadastro de Veículos :                                    ///\n");
    printf("///            2. Lista Veicúlos:                                           ///\n");
    printf("///            3. Apagar Veículo:                                           ///\n");
    printf("///            4. Editar Veículo:                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///            Escolha por onde você quer navegar:                          ///\n");
    scanf("%c", &op);
    getchar();
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\twaiting...\n");
    sleep(1);
    return op;
}


/// Crud menu estoque:

char menu_estoque(void){
    char op;

    system("clear||cls");
    setlocale(LC_ALL,"");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("=============    Universidade Federal do Rio Grande do Norte    ===============\n");
    printf("=============       Centro de Ensino Superior do Seridó         ===============\n");
    printf("=============        Disciplina DCT1106 -- Programação          ===============\n");
    printf("=============  Projeto Locadora de bicicletas e patins elétricos===============\n");
    printf("=============    Developed by @lima_g99 @erick_bzrs - 2022.2    ===============\n");
    printf("~~~                                                                         ~~~\n");
    printf("===============================================================================\n");
    printf("/// = = = = Sistema de Aluguel de bicicletas e patinetes elétricos = = = =  ///\n");
    printf("===============================================================================\n");
    printf("///            1. Cadastro de Produto:                                      ///\n");
    printf("///            2. Lista de Produto:                                         ///\n");
    printf("///            3. Editar produto:                                           ///\n");
    printf("///            4. Apagar produto:                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
>>>>>>> Stashed changes
    printf("///            Escolha por onde você quer navegar:                          ///\n");
    scanf("%c", &op);
    getchar();
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\twaiting...\n");
    sleep(1);
    return op;
}
<<<<<<< Updated upstream
=======

// Crud menu Aluguel:

char menu_aluguel(void){
    char op;

    system("clear||cls");
    setlocale(LC_ALL,"");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("=============    Universidade Federal do Rio Grande do Norte    ===============\n");
    printf("=============       Centro de Ensino Superior do Seridó         ===============\n");
    printf("=============        Disciplina DCT1106 -- Programação          ===============\n");
    printf("=============  Projeto Locadora de bicicletas e patins elétricos===============\n");
    printf("=============    Developed by @lima_g99 @erick_bzrs - 2022.2    ===============\n");
    printf("~~~                                                                         ~~~\n");
    printf("===============================================================================\n");
    printf("/// = = = = Sistema de Aluguel de bicicletas e patinetes elétricos = = = =  ///\n");
    printf("===============================================================================\n");
    printf("///            1. Cadastrar Aluguel:                                        ///\n");
    printf("///            2. Lista de aluguéis:                                        ///\n");
    printf("///            3. Editar Aluguel:                                           ///\n");
    printf("///            4. Apagar Aluguel:                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///            Escolha por onde você quer navegar:                          ///\n");
    scanf("%c", &op);
    getchar();
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\twaiting...\n");
    sleep(1);
    return op;
}


cchar menu_vendas(void){
    char op;

    system("clear||cls");
    setlocale(LC_ALL,"");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("=============    Universidade Federal do Rio Grande do Norte    ===============\n");
    printf("=============       Centro de Ensino Superior do Seridó         ===============\n");
    printf("=============        Disciplina DCT1106 -- Programação          ===============\n");
    printf("=============  Projeto Locadora de bicicletas e patins elétricos===============\n");
    printf("=============    Developed by @lima_g99 @erick_bzrs - 2022.2    ===============\n");
    printf("~~~                                                                         ~~~\n");
    printf("===============================================================================\n");
    printf("/// = = = = Sistema de Aluguel de bicicletas e patinetes elétricos = = = =  ///\n");
    printf("===============================================================================\n");
    printf("///            1. Cadastrar Venda:                                          ///\n");
    printf("///            2. Lista de Vendas:                                          ///\n");
    printf("///            3. Editar Venda:                                             ///\n");
    printf("///            4. Apagar Venda:                                             ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///            Escolha por onde você quer navegar:                          ///\n");
    scanf("%c", &op);
    getchar();
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\twaiting...\n");
    sleep(1);
    return op;
}

char menu_adm(void){
    char op;

    system("clear||cls");
    setlocale(LC_ALL,"");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("=============    Universidade Federal do Rio Grande do Norte    ===============\n");
    printf("=============       Centro de Ensino Superior do Seridó         ===============\n");
    printf("=============        Disciplina DCT1106 -- Programação          ===============\n");
    printf("=============  Projeto Locadora de bicicletas e patins elétricos===============\n");
    printf("=============    Developed by @lima_g99 @erick_bzrs - 2022.2    ===============\n");
    printf("~~~                                                                         ~~~\n");
    printf("===============================================================================\n");
    printf("/// = = = = Sistema de Aluguel de bicicletas e patinetes elétricos = = = =  ///\n");
    printf("===============================================================================\n");
    printf("///            1. Gastos da Empresa:                                        ///\n");
    printf("///            2. Fluxo de Caixa:                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///            Escolha por onde você quer navegar:                          ///\n");
    scanf("%c", &op);
    getchar();
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("\t\t\twaiting...\n");
    sleep(1);
    return op;
}
>>>>>>> Stashed changes
