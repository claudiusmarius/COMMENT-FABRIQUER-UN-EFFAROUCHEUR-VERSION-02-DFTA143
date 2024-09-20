
  //  DFT_#A143 COMMENT FABRIQUER UN EFFAROUCHEUR VERSION 02 https://youtu.be/t51ohe4OOGo
  // https://github.com/claudiusmarius/COMMENT-FABRIQUER-UN-EFFAROUCHEUR-VERSION-02-DFTA143
  // www.youtube.com/@ClaudeDufourmont n'hésitez pas à m'encourager à poursuivre en likant, paratageant, commentant, et en vous abonnant
  // github.com/claudiusmarius
  // https://www.facebook.com/claude.dufourmont
  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  #include <DFRobot_DF1201S.h>
  #define MonDF1201SSerial Serial1
  DFRobot_DF1201S MonDFPLayerPro;
  #define MonDF1201SSerial Serial1
  
  void setup(void) 
  {
  Serial.begin(115200);
  Serial1.begin(115200);
 
  while (!MonDFPLayerPro.begin(MonDF1201SSerial))
  {
  Serial.println("Patientez en attente de la connection SVP");
  delay(1000);
  }
  
  MonDFPLayerPro.setVol(18);
  MonDFPLayerPro.switchFunction(MonDFPLayerPro.MUSIC);
  delay(2000);
  MonDFPLayerPro.setPlayMode(MonDFPLayerPro.FOLDER);
  MonDFPLayerPro.setPrompt(false);
  }

  void loop() 
  {
  Demo01();
  }

  void Demo01() 
  { 
  Serial.println("----------------------------------------DEMO1-----------------------------------------------");
  MonDFPLayerPro.setVol(30);
  Serial.print("VOL:");
  Serial.println(MonDFPLayerPro.getVol());
  Serial.println("PREMIER MORCEAU DU DOSSIER");
  MonDFPLayerPro.playFileNum(1);
  MonDFPLayerPro.setPlayTime(0);
  delay(2000);
  }

   