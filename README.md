# Projet Calcul parallele --- ENSEIRB-MATMECA
# Auteurs : FR Hammer, A Kien et M Praud

------------------------------
* 'main.cpp' : programme pour la resolution de l'equation de diffusion par decompostion de domaine
	* pour compiler, lancer 'make all'
	* pour compiler en mode debug, lancer 'make DEBUG=1'
	* pour executer, lancer './exec'
* 'parameters.dat' contient les informations pour le systeme et la resolution, dans l'ordre suivant:
(valeurs par defaut)
	* Nx (6), Ny (6) : nombre de noeuds du maillage en x et en y
	* Lx (1), Ly (1) : taille du domaine rectangulaire
	* D (1) : coefficient de diffusion
	* dt (0.01) : pas de temps
	* mode (1) : choix pour les fonctions f,g,h (3 modes actuellement)
	* h_part (2) : parametre de recouvrement, ie nombre de lignes communes aux deux domaines
	* alpha (1) : coefficient pour la condition de Neumann
	* beta (1) : coefficient pour la condition de Dirichlet 
* Arguments facultatifs pour l'executable
	* h_part, parametre de recouvrement: nombre de lignes communes aux deux domaines
	* Nt, nombre d'iterations en temps
------------------------------
