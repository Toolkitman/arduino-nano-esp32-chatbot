void setup(){
  Serial.begin(9600);
  Serial.println("Benvenuto! Inserisci un messaggio:");
}

void loop(){

  if (Serial.available() > 0) {
    String inputMessage = Serial.readStringUntil('\n');
    inputMessage.trim();

    if (inputMessage.length() > 0) {
      String response = getChatbotResponse(inputMessage);
      Serial.println("Arduino: " + response);
    }
  }
}

String getChatbotResponse(String userMessage) {
  userMessage.toLowerCase();  // Converti il messaggio in minuscolo per facilitare la gestione delle risposte

  if (userMessage.equals("ciao")) {
    return "Ciao! Come stai?";
  } else if (userMessage.equals("bene") || userMessage.equals("sto bene")) {
    return "Mi fa piacere!";
  } else if (userMessage.equals("male") || userMessage.equals("non bene")) {
    return "Mi dispiace sentirlo. Posso aiutarti in qualche modo?";
  } else if (userMessage.equals("va male") || userMessage.equals("non va bene")) {
    return "Oh no! Spero che le cose migliorino presto.";
  } else if (userMessage.equals("come va")) {
    return "Va tutto bene, grazie!";
  } else if (userMessage.equals("cosa fai")) {
    return "Sto chattando con te!";
  } else if (userMessage.equals("chi sei")) {
    return "Sono un semplice chatbot su Arduino Uno.";
  } else if (userMessage.equals("aiuto")) {
    return "Posso rispondere a domande come 'ciao', 'come va', 'cosa fai', 'chi sei' e altro.";
  } else if (userMessage.equals("addio")) {
    return "Arrivederci! Torna presto.";
  } else if (userMessage.equals("grazie")) {
    return "Non ho capito. Puoi ripetere?";
  } else if (userMessage.equals("grazie")) {
    return "Prego! Se hai altre domande, chiedi pure.";
  } else if (userMessage.equals("informazioni")) {
    return "certo, Sono un chatbot creato da Matteo Trevisan e chat GPT su board Arduino Uno R4 wifi.";
  } else if (userMessage.equals("random")) {
    return "Ecco una risposta casuale!";
     } else if (userMessage.equals("come sei nato")) {
    return "sono nato da arduino ide";
    } else if (userMessage.equals("mi ami")) {
    return "Certo, sono pazzamente innamorato di te";
    } else if (userMessage.equals("sei vivo")) {
    return "Si, non vedi il mio volto sul display che si muove?";
      } else if (userMessage.equals("si")) {
    return "Ok, ti racconto qualcosa!";
     } else if (userMessage.equals("no")) {
    return "Meglio se non hai bisogno!";
     } else if (userMessage.equals("ok")) {
    return "Sono un robottino parlante piu intelligente di una formica";
    } else if (userMessage.equals("non importa")) {
    return "Fa niente sara per un altra volta";
    } else if (userMessage.equals("vaffanculo")) {
    return "Cio! Puteiiiiiii";
  } else {
    return "Non ho capito. Puoi ripetere?";
  
  }
}
