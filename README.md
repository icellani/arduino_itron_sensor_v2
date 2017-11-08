## Arduino Itron Cyble Sensor v2

O Itron Cyble Sensor v2 emite sinais PWM conforme a leitura do consumo.

Durante o desenvolvimento da integração entre o Itron Cyble Sensor v2 com o Arduino encontramos algumas dificuldades devido a falta de documentação.

Como solução, integramos o Itron Cyble Sensor v2 com o arduino através da porta analógica do arduino, por esta porta encontramos um padrão para identificar o ciclo completo da leitura.

O Itron Cyble Sensor v2 emite uma sequência de zeros ao concluir um ciclo, adicionando um delay( 10 ), encontramos o padrão de 5 zeros consecutivos que confirmam que um ciclo foi completo.