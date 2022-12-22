# Jaqueta de Proteção Pessoal

Repositório criado para a documentação do projeto Jaqueta de Proteção Pessoal, criado para a matéria de Computação Física e 
Aplicações, ministrada pelo Professor Doutor Fábio Nakano na Universidade de São Paulo. Projeto visa implementar componentes
eletrônicos numa jaqueta para ajudar na proteção pessoal.


## 1. Introdução

- Revisão Bibliográfica
    - Conceitos e Terminologia
        - Tecnologia Wearable são itens vestíveis, como roupas e diferentes tipos de acessórios, 
          que possuem algum tipo de tecnologia que permite criar, processar, armazenar, recuperar e trocar algum tipo de dado e/ou informação. 
          Ou também permite a conexão com a internet. 
        - LED, sigla em inglês, para um componente eletrônico semicondutor, ou seja, um diodo emissor de luz;
        - GPS, sigla em inglês para Global Positioning System. É o nome do sistema utilizado para navegação e 
          aquisição de medidas precisas de localização geográfica e geodésica.
        - Buzzer é um componente eletrônico que emite som.
        - Controlador é um componente eletrônico tecnológico desenvolvido para conectar projetos robóticos à Internet.

## 2. Objetivos

### I. Objetivos específicos
A jaqueta para defesa pessoal tem como objetivo trazer uma maior segurança para mulheres que frequentam locais perigosos, como ruas escuras, 
com pouco movimento ou qualquer outro ambiente que faça a mulher se sentir vulnerável a qualquer tipo de violência. 

Por conta disso, desenvolvemos um wearable focando sempre na discrição, para não deixar evidente que é um item de segurança para não gerar 
situações adversas, como o assediador perceber a sua funcionalidade e agir de maneira mais bruta por conta disso.  

Por possuir dispositivos que emitem luz forte e barulhos altos eles terão, caso eles sejam acionados, a função de assustar e distrair o 
possível agressor, permitindo a fuga da vítima para um local seguro. Além disso, também contará com um dispositivo de compartilhamento de                   localização, que quando acionado algum contato de segurança pré estabelecido receberá um sinal da localização.  

## 3. Materiais e Métodos

### I. Modelagem da Jaqueta
- Para entendermos melhor como funcionaria o produto, optamos por primeiro fazer um protótipo da jaqueta em algodão cru,
para analisarmos como e onde os dispositivos eletrônicos ficariam dispostos na jaqueta. E também avaliar se seria necessário fazer alguma 
modificação na peça.

Para a criação deste protótipo da jaqueta anti-assédio nos baseamos na modelagem da jaqueta jeans tradicional de tamanho 42
desenvolvida pela Marlene Mukai. E também, para auxílio nesta etapa utilizamos o livro 
“Moldes Femininos: noções básicas" da autora Rosa Lúcia de Almeida Silva.  

<p align="center">
Figura 1 - Modelagem de jaqueta jeans tradicional tamanho 42 de Marlene Mukai. <br/>
  <img src="https://github.com/Raposo4/jaqueta_protecao_pessoal/blob/main/imgs/sketch.jpg" width="300" /><br/>
</p>

Assim, primeiramente passamos para um papel kraft - conhecido também como papel pardo - os moldes de cada parte necessária para montar uma jaqueta. Essa etapa foi feita com auxílio de réguas de modelagens que possuem curvatura que se encaixam nos recortes do corpo, como na gola. Vale ressaltar também que esses moldes passados para o papel já são feitos com a margem de costura necessária, no nosso caso foi de 1,5 cm (menos na gola). Em seguida, marcamos cada molde em um tecido, por se tratar de uma peça piloto, usamos o algodão cru. Para a confecção da peça piloto optamos pelo uso de um tecido de brim em uma cor mais neutra. 

Um outro ponto importante nessa etapa da modelagem é a organização dos moldes feitos no papel kraft. Então, depois de desenhar nele todas as partes da jaqueta, é de extrema importância especificar nos moldes: 
- Nomear a parte que ele representa;
- Especificar se é a parte da frente/dianteira ou se é a parte das costas;
- Atentar-se a molde que possui tanto parte das costas como da frente em um mesmo molde, como é o caso da manga. 
- Indicar onde fica a linha das costas ou  a linha da lateral do corpo;
- Indicar quantas vezes precisar recortar no tecido final. 
- Os moldes não nomeados da imagem são a parte da frente da jaqueta, que é o primeiro da esquerda, e é necessário cortar duas vezes ele no tecido. O molde do meio é a parte das costas, esse adaptamos ele de modo que ficasse apenas um corte na hora de marcar no tecido e corta-ló. O molde da esquerda é o da manga, e por se tratar de uma jaqueta o punho é aberto e possui fecho de botão, então lembrar de marcar no molde esse detalhe. Também indiciar e cortar duas partes no tecido, já que as mangas de ambos braços são iguais.

Nos moldes referentes às partes menores da jaqueta, a modelagem usada como referência já especifica qual parte é qual. Assim, só precisamos observar um jaqueta jeans de algum integrante do grupo para entender quantas vezes cada parte precisa ser cortada, com isso no final ficou: 
- Bolso: cortar duas vezes;   
- Lapela: cortar quatro vezes;    
- Punho: cortar  duas vezes (cortado também na dobra do tecido);   
- Cos: cortar uma vezes;  
- Gola: cortar duas vezes;

Após todos essas etapas, o resultado do protótipo da jaqueta anti-assédio, parte da frente e das costas, pode ser observado a seguir: 

<p align="center">
Figura 2 - Frente do protótipo <br/>
  <img src="https://github.com/Raposo4/jaqueta_protecao_pessoal/blob/main/imgs/unnamed.png" width="300" /><br/>
</p>

<p align="center">
Figura 3 - Costas do protótipo <br/>
  <img src="https://github.com/Raposo4/jaqueta_protecao_pessoal/blob/main/imgs/ziper.png" width="300" /><br/>
</p>

### II. Lista de matériais tecnológicos presentes na jaqueta
       
| Quantidade | Nome | Link para referência |
| --- | --- | --- |
| 1 | ESP8266 e cabo Micro-USB | https://www.baudaeletronica.com.br/placa-doit-esp32-bluetooth-e-wifi.html |
| 3 | LEDs de alto brilho brancos 10mm | https://www.baudaeletronica.com.br/led-de-alto-brilho10mm-branco.html |
| 1 | Botão 12mm a prova dágua | https://www.baudaeletronica.com.br/bot-o-12mm-a-prova-d-agua-sem-trava-vermelho.html |
| 1 | Buzzer sem oscilador interno | https://www.baudaeletronica.com.br/buzzer-5v-sem-oscilador-interno.html |
| N | Jumpers variados | -- |
| 1 | Protoboard | -- |
| 1 | Carregador tipo powerbank portátil a pilhas | https://www.americanas.com.br/produto/3858532657?pfm_carac=carregador-universal-pilha |
| 1 | Peça de 130cm² de Brim Leve | -- |
| 1 | Zíper de metal de 20 cm | -- |
        
#### Conexões 
| Componente | Pino da placa |
| --- | --- |
| LEDs | 4 |
| Buzzer | 15 |
| Botão | 0 |

## 4. Resultados
### I. Entregáveis previstos
A confecção da peça final foi feita seguindo os mesmo passos iniciais da peça piloto, acrescentando na modelagem as mudanças que analisamos serem necessárias. Deste modo, foram acrescentados 10 cm no comprimento da jaqueta. Também aumentamos um pouco a largura do punho da jaqueta, para ficar um acabamento melhor. Optamos por adicionar uma faixa de tecido na largura das costas por cima para cobrir o zíper.

Para adicionar os dispositivos tecnológicos na jaqueta, passamos a fiação necessária para eles funcionarem na altura do ombro na parte interna. O botão para acioná-los ficará embaixo da lapela do bolso esquerdo, por conta disso, a fiação descerá de modo interno do ombro até essa região, sendo coberto por uma faixa de tecido. Os LEDs serão dispostos de maneira exposta na parte traseira da jaqueta, na parte superior, a 7,5cm de distância da gola. O  bolso, que fica a 7cm das luzes, servirá para armazenar o programador, o GPS e também o buzzer. 

<p align="center">
Figura 4 - Tecido recortado conforme os moldes <br/>
  <img src="https://github.com/Raposo4/jaqueta_protecao_pessoal/blob/main/imgs/moldesdsdsds.jpg" width="300" /><br/>
</p>


<p align="center">
Figura 5 - Costas da jaqueta com os LEDs posicionados <br/>
  <img src="https://github.com/Raposo4/jaqueta_protecao_pessoal/blob/main/imgs/costas.jpg" width="300" /><br/>
</p>

Detalhe da localização dos LEDs dispostos separadamente abaixo da gola. A imagem também exibe o zíper coberto por uma lapela para armazenar o micro-controlador e o buzzer. 

### II. Entregáveis não previstos

A partir do protótipo já exibido, o grupo percebeu alguns pontos que poderiam ser melhorados e modificados. Em relação a modelagem da peça, foi necessário modificar a gola, que a partir da modelagem base ela acabou ficando muito pequena e não foi possível costura-la na jaqueta. Por conta de ser um teste, acrescentamos a quantidade necessária de tecido para ela ficar de modo certo no modelo da peça

Uma outra questão foi o comprimento, que ficou um pouco mais curto do que queríamos. Em compensação, as mangas acabaram ficando com tecido a mais, e, por conta disso, ao costurar no corpo da jaqueta, resultou em franzidos na parte do ombro, como mostra a imagem

O bolso no verso da jaqueta, que servirá para acomodar os dispositivos eletrônicos, nessa versão teste achamos que chamaria muita atenção, pois nas jaquetas convencionais não costuma ter um bolso nesta região. Então para não chamar, optamos por fazer alguma mudança, como já descrita no item anterior, que priorizasse a discrição dele. 

### Montagem e Funcionamento do sistema
Seguindo a pinagem lsitada um pouco acima no relátorio e enviando o [src.ino](https://github.com/Raposo4/jaqueta_protecao_pessoal/blob/main/src.ino) ao micro-controlador via [Arduino IDE](https://www.arduino.cc/en/software) no ESP8266 o programa já esta pronto para ser utilizado.

<p align="center">
Figura 5 - Costas da jaqueta com os LEDs posicioanados <br/>
  <img src="https://github.com/Raposo4/jaqueta_protecao_pessoal/blob/main/imgs/montagem.jpg" width="300" /><br/>
</p>

### III. Organização e Arquitetura
O dispositoivo da jaqueta se conecta a internet e a principal usabilidade disso é a conexão com a api [Whatabot](https://whatabot.net/index.html), a qual envia uma mensagem pré-definida é enviada a um número de Whatsapp previamente cadastrado. Para isso é utilizada uma requisição via http.

## 5. Discussão e Conclusão

Observando o resultado final da jaqueta anti-assédio, o grupo refletiu sobre seus resultados e pensou em algumas possibilidades para potencializar sua performance. 

Um ideia que surgiu é a adição de um dispositivo que liberasse algum spray para afetar e desestabilizar o agressor, caso a situação se agravasse para algo físico, um exemplo seria o spray de gengibre que tem seu uso legal para civis e causa ardência e irritabilidade nos olhos, prejudicando a visão.
Uma outra ideia, mas que teria que ser muito bem desenvolvida por ser mais complexa é a possibilidade de um dispositivo que cause choque. Mas por ter uma legislação sobre o seu porte, como mostra o site da câmara de deputados: “(...) a aquisição e o porte de spray de pimenta e de armas de eletrochoque só poderá ocorrer por maiores de 18 anos, mediante apresentação de certidões negativas de antecedentes criminais fornecidas pela Justiça federal, estadual e militar e comprovantes de residência”

Houve também a possibilidade de implementação de um GPS ao sistema, mas não foi posssível adiciona-lo ao MVP.

Também pensamos na possibilidade de trazer  conceito central da jaqueta anti-assédio para outras peças de roupa, com o intuito de ampliar o nosso público, já que qualquer pessoa pode ser vítima de assédio. E também expandir nosso conceito, para a pessoa ter mais opções do uso de uma roupa que gera proteção, facilitando na inclusão dessas peças em seu estilo. 

## 6. Referências
HAJE, Lara. Comissão aprova regras para venda e uso do spray de pimenta e armas de eletrochoque para proteção pessoal. Agência Câmara de Notícias, 2021. Disponível em: https://www.camara.leg.br/noticias/806727-comissao-aprova-regras-para-venda-e-uso-do-spray-de-pimenta-e-armas-de-eletrochoque-para-protecao-pessoal/#:~:text=De%20acordo%20com%20o%20substitutivo,militar%20e%20comprovantes%20de%20resid%C3%AAncia

Whatabot, 2022. Disponível em: https://whatabot.net/index.html#otherdetails

HOW TO PLAY THE MUSICAL NOTES ON THE ARDUINO. Disponível em: https://samueladesola.medium.com/how-to-play-the-musical-notes-on-the-arduino-1e9505d00c60
