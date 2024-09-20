# COMMENT-FABRIQUER-UN-EFFAROUCHEUR-VERSION-02-DFTA143
Dispositif basé sur l'utilisation d'un DFPlayer PRO et d'un Seeeduino XIAO
Ce petit montage est dans la continuité de mes systèmes « Effaroucheurs de pigeons » toujours en restant dans des dispositifs « softs » cad non létaux, il est complémentaire à mon système répulsif générant toutes sortes de bruits désagréables en cas de détection d’intrusion dans mon grenier.
Par contre, dans le cas présent, il s’agit d’un dispositif visant à éloigner les volatiles qui causent, en cas de surpopulation, des dégâts considérables sur nos toitures, nos gouttières et nos terrasses tout simplement en émettant des sons correspondants à leurs prédateurs (éperviers, aigles etc..), des exemples de sons se trouvent dans le github correspondant à cette vidéo, mais on en trouve pléthore sur le web (sound bank).
Ici je n’ai pas créé de PCB et mon circuit est monté sur une petite plaquette pastillée. A vous de le réaliser selon vos préférences.
J’utilise un DFPlayer PRO dans lequel j’ai téléversé des fichiers contenant les cris de ces prédateurs les sorties DACR et DACL sont connectées à un amplificateur externe de puissance assez élevée, les oiseaux étant censés être à l’extérieur de l’habitation au niveau de la toiture. Ce DF Player PRO est piloté par un petit MCU Seeeduino XIAO.
Le bouton poussoir SW1 a été prévu pour permettre une possibilité de « manager » manuellement le MCU, de même J4 pour une gestion par des conditions externes mais ne sont pas utilisés pour l’instant.
Le DFPlayer PRO a le gros avantage de ne pas nécessiter de micro carte SD, la partie mémoire se comporte un peu comme une clé USB je vous renvoie à ma vidéo tutorielle DFT_#A119 :
https://youtu.be/PkXhwwlUT0w

