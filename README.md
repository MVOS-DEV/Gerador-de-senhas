🔐 Password Generator (Gerador de Senhas)

Um gerador de senhas robusto escrito em C, que utiliza entropia baseada em tempo para criar sequências alfanuméricas seguras e símbolos especiais.
🚀 Funcionalidades
    Divisão por Categorias: Gera senhas equilibradas contendo letras maiúsculas, minúsculas, números e símbolos.
    Segurança Anti-Erro: Filtra caracteres problemáticos (como espaços e aspas) para garantir que a senha seja aceita em qualquer site.
    Semente Dinâmica: Utiliza a biblioteca time.h para garantir que uma senha nunca seja igual à anterior.
    
📋 Estrutura do Código
O código divide o tamanho total da senha em 4 partes iguais para garantir a presença de:
    Uppercase: A-Z
    Lowercase: a-z
    Numbers: 0-9
    Symbols: ! @ # $ - + * ( )

🛡️ Por que este gerador é seguro?
O projeto foi desenhado seguindo as melhores práticas de segurança de caracteres:
    Exclusão de Caracteres Perigosos: Não utiliza espaços, aspas (') ou barras invertidas (\), prevenindo erros de sintaxe em bancos de dados ou ataques de injeção acidentais.
    Complexidade: Ao misturar os 4 tipos de caracteres, a senha gerada atinge um nível de força que levaria séculos para ser quebrada por força bruta (brute force).

📊 Estimativa de Segurança (Força Bruta)
 Comprimento	Tempo para Quebrar
  8 caracteres	  -8 horas
  12 caracteres	  -3.000 anos
  16 caracteres	  -1 bilhão de anos

🛠️ Como Compilar
No Linux (Ubuntu, Fedora, Debian, etc.)
O Linux geralmente já vem com o compilador gcc instalado. Se não tiver, instale com sudo apt install build-essential.

    Abra o terminal na pasta do arquivo.

    Compile o código:
    Bash

    gcc Gerador_de_senhas.c -o gerador

    (Note que no Linux não usamos o .exe no final do nome).

    Dê permissão de execução (opcional, mas boa prática):
    Bash

    chmod +x gerador

    Execute:
    Bash

    ./gerador

🍎 No macOS
O processo é idêntico ao Linux, mas você precisa ter o Xcode Command Line Tools instalado.

    Se nunca compilou nada, digite no terminal: xcode-select --install.

    Compile:
    Bash

    gcc Gerador_de_senhas.c -o gerador

    Execute:
    Bash

    ./gerador



📝 Licença
Este projeto é para fins educacionais. Sinta-se à vontade para clonar e melhorar!
