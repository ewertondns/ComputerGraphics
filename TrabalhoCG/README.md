<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Triangle%20-%204.png" align="right" border="10">

<h1>Introdução</h1>
<p align="justify">A atividade que foi proposta nesse trabalho era a implementação de 03(três) funções, que são elas: PutPixel, DrawLine e DrawTriangle. Para fazer a implementação das mesmas, foi imposto a condição de apenas fazer o manuseio dos bytes RGBA do monitor em uma tela especifica do OpenGL.</p>
 
<h2>PutPixel</h2>
<p align="justify">A função PutPixel, faz o recebimento de um “Pixel”, ou seja, ele recebe uma variável do tipo pixel, através da Struct declarada para receber uma coordenada X e uma coordenada Y, além de receber um valor para cada tipo R, G, B e A. 
Implementar essa função não foi um trabalho muito complicado e seu funcionamento é feito da seguinte maneira: cada pixel possui 4 bytes, referentes a o RGBA, então para achar o endereço do próximo pixel seguindo em X foi preciso multiplicar a coordenada que recebemos por 4, já com a coordenada Y nós fazemos de maneira parecida, porém fazemos a multiplicação da IMAGE_WIDTH por 4 e por Y, pois as linhas da imagem estão sendo dispostas uma após a outra na memória.</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%201.png">

<p align="justify">O resultado dessa função, foi esse aqui:</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Pixels.png">

<h2>DrawLine</h2>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Linhas%20-%202.png">

<p align="justify">Agora vamos falar sobre o método DrawLine, esse foi o mais trabalhoso de ser implementado. Para fazer o mesmo foi preciso usar o algoritmo de Bresenham, mas também foram feitas algumas alterações para que seu funcionamento fosse em todos os 8 octantes:</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/8%20Octantes.png">

<p align="justify">Primeiro nós precisamos calcular os Deltas, entre o pixel inicial e o pixel final, além de definir algumas auxiliares que iram nos ajudar a ir colorindo os pixels entre o ponto 1 até o ponto 2.</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%202.png">

<p align="justify">Também foi preciso corrigir os valores negativos dos deltas, pois precisamos nos mover em todas direções do plano, então fazemos o uso do valor absoluto deles, para que possamos prosseguir com o algoritmo de Bresenham.</p>	

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%203.png">

<p align="justify">Também foi feito a interpolação das cores nas linhas, para que construíssemos esse novo conjunto de dados para as cores foi preciso fazer uma modificação no recebimento dos valores RGBA nas Structs, os valores recebidos anteriormente eram do tipo “int”, então foi modificado para o tipo “float”, para que não perdêssemos nenhum valor de transição entre uma cor e outra.</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%204.png">

<p align="justify">Aqui começamos a usar as variáveis que criamos acima. Nesse caso se a nAux for menor que zero (nAux < 0), nós vamos selecionar o pixel que está nas coordenadas (x+1, y), entre tanto se a nAux for maior ou igual a zero (nAux >= 0) será preciso aumentar o “y auxiliar” que serve como referência as coordenadas dos pixels que serão coloridos somando o valor do delta. Caso o programa não entre no “if”, ou seja, deltaX for menor que deltaY (dX < dY) é preciso fazer uma troca de valores e aqueles que se relacionam com x iram agora se relacionar com y e vice-versa. A interpolação das cores é feita entre a escolha de um pixel e outro, então quando nós temos certeza de que aquele é o pixel a ser colorido, nós fazemos a transição entre uma cor e outra.</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%205.png">

<p align="justify">Agora podemos representar os 8 octantes com esse método.</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Linhas%20-%201.png">

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Linhas%20-%203.png">

<h2>DrawTriangle</h2>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Triangle%20-%203.png">

<p align="justify">Agora que já conseguimos criar uma linha com a função DrawLine, nós podemos criar a função DrawTriangle, ela vai receber um total de 03(três) pixels e a partir das coordenadas deles, nós iremos chamar a função DrawLine do pixel 01 ao pixel 02, do pixel 02 ao pixel 03 e do pixel 03 ao pixel 01.</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%206.png">

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Triangle%20-%201.png">

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/Triangle%20-%202.png">

<h2>DrawTriangleColor</h2>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TriangleColor.png">

<p align="justify">Para fazer o desenho de um triângulo totalmente preenchido, foi preciso alterar um pouco mais o algoritmo de Bresenham. Primeiro criamos uma nova função chamada DrawLineColor, ela possui todas as características que a DrawLine normal, porém ela faz uma chamada para a própria DrawLine sempre que ela for colorir um pixel para a criação de uma linha entre o pixel 01 e o pixel 02, para cada pixel criado entre esses dois pontos também é criado uma linha do pixel atual para o pixel 03.</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%207.png">

<p align="justify">Agora que criamos a DrawLineColor, foi preciso criar uma função chamada de DrawTriangleColor, que segue os mesmos procedimentos para criar a DrawTriangle, porém agora nós passamos também um terceiro parâmetro nas chamadas de linha:</p>

<img src="https://github.com/ewertondns/ComputerGraphics/blob/master/TrabalhoCG/Imagens/TrechosDoCodigo/Trecho%20-%208.png">

<p align="justify">Pronto, assim nós podemos fazer a criação de triângulos totalmente coloridos.</p>

<h2>Desenvolvimento e Eventuais Problemas</h2>
<ul>
<li><p align="justify">Foi possível fazer a implementação de todas as funções propostas, entre tanto, também foi preciso fazer a alteração em algumas delas para que pudéssemos chegar ao resultado final deste trabalho, além da criação de outras funções.</li></p>

<li><p align="justify">A função que certamente apresentou maior nível de dificuldade foi a criação da DrawLine, pois primeiro é preciso entender o funcionamento do algoritmo de Bresenham apresentado em aula e depois é preciso adaptá-lo para que funcione nos 8 octantantes, com toda certeza foi a parte mais demorada do desenvolvimento do trabalho.</li></p>

<li><p align="justify">Na hora de criar a interpolação de cores, os valores RGBA eram do tipo int e ficou difícil criar formas para desenvolver essa mudança de cores, para isso nós precisamos alterar o tipo delas para float, assim ficou mais fácil pegar cada um dos dados decimais na mudança de cor, para criar um efeito mais suave de mudança nas cores.</li></p>

<li><p align="justify">Ao criarmos a função DrawTriangleColor, ela apresentava falhas, aqueles pixels mais distantes do terceiro ponto deixavam algumas aberturas. De início apenas mudamos uma das DrawLine da função DrawTriangle, até percebermos que seria necessário criar uma nova função para gerar um triângulo totalmente preenchido.</li></p>
</ul>
<h2>Referências</h2>

https://www.cs.helsinki.fi/group/goa/mallinnus/lines/bresenh.html

http://icgjustathing.blogspot.com.br/2016/08/implementacao-do-algoritmo-de-bresenham.html

http://www.frankmarcel.com/pro/programacao/desenhar-reta-java-bresenham-ddainteiro


