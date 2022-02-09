/********
* Fichier: monInterface.cpp
* Auteurs: C.-A. Brunet
* Date: 21 décembre 2021 (création)
* Description: Voir fichier d'entête pour informations.
*
* Copyright 2022 Département de génie électrique et génie informatique
*                Université de Sherbrooke  
********/

#include <random>
#include <sstream>
#include "monInterface.h"
#include "canevas.h"

using namespace std;

MonInterface::MonInterface(const char* theName) : GraphicusGUI(theName)
{
	/*//Fichier
	ouvrirFichier("kj");
	sauvegarderFichier("jk");

	//Operations formes
	coucheTranslater(int deltaX, int deltaY);
	ajouterCercle(int x, int y, int rayon);
	ajouterRectangle(int x, int y, int longueur, int largeur);
	ajouterCarre(int x, int y, int cote);
	modePileChange(bool mode);*/

	// Menu Canevas
	reinitialiserCanevas();
	clearInformations();
	coucheAjouter();

	coucheRetirer();
	coucheCacher();

	// Menu Formes
	retirerForme();

	// Menu navigation
	couchePremiere();
	couchePrecedente();
	coucheSuivante();
	coucheDerniere();
	formePremiere();
	formePrecedente();
	formeSuivante();
	formeDerniere();
	
}

/*
////////////// Menu Fichier //////////////
bool MonInterface::ouvrirFichier(const char*)
{
	return true;
}

bool MonInterface::sauvegarderFichier(const char*)
{
	return true;
}

////////////// Operations formes //////////////
void MonInterface::coucheTranslater(int deltaX, int deltaY)
{

}

void MonInterface::ajouterCercle(int x, int y, int rayon)
{

}

void MonInterface::ajouterRectangle(int x, int y, int longueur, int largeur)
{

}

void MonInterface::ajouterCarre(int x, int y, int cote)
{

}

void MonInterface::modePileChange(bool mode)
{

}*/


////////////// Menu navigation //////////////
void MonInterface::reinitialiserCanevas()
{

}

void MonInterface::coucheAjouter()
{

}

void MonInterface::coucheRetirer()
{
	
}

void MonInterface::coucheCacher()
{
	
}


////////////// Menu formes //////////////
void MonInterface::retirerForme()
{

}


////////////// Menu navigation //////////////
void MonInterface::couchePremiere()
{

}

void MonInterface::couchePrecedente()
{

}

void MonInterface::coucheSuivante()
{

}

void MonInterface::coucheDerniere()
{

}

void MonInterface::formePremiere()
{

}

void MonInterface::formePrecedente()
{

}

void MonInterface::formeSuivante()
{

}

void MonInterface::formeDerniere()
{

}
