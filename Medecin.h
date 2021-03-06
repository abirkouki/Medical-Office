/*
 * Medecin.h
 *
 *  Created on: 8 nov. 2018
 *      Author: François COURTIN
 *      		Louison FRESNAIS
 */

#ifndef MEDECIN_H_
#define MEDECIN_H_
#include<iostream>
#include<string>
#include "Prescription.h"
#include "DataBase.h"

using namespace std;

class Medecin : public DataBase {

public:
	//Méthodes
	Medecin();
	virtual ~Medecin();
	static int affichage_sql(void *p_data, int argc, char **argv, char **azColName);
	static int affichage_all_sql(void *p_data, int argc, char **argv, char **azColName);
	void ajouter_medecin();
	void sauvegarder_medecin();
	void afficher_info_medecin();
	void afficher_info_all_medecin();
	void edition_medecin(bool);

private:
	//Attributs
	struct data_med
	{
		string nom;
		string prenom;
		string specialite;
		string ID;
	};
	data_med data;

};

#endif /* MEDECIN_H_ */
