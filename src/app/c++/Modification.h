/****************************************************************************
 *  Classe: 			Modification     																					*
 *  Auteur: 			Mariane Maynard 																					*
 *	Description:	Representation d'une modification de l'utilisateur      	*
 ****************************************************************************/

#ifndef MODIFICATION
#define MODIFICATION

#include "Fichier.h"

using boost::shared_ptr;

class Modification
{
	private:
		uint _position;
    size_t _taille;
    //uint _versionID;
    shared_ptr<Fichier> _fichier;
    
	public:
    Modification() = default;

    Modification(uint position, size_t taille, const shared_ptr<Fichier>& fichier)
      : _position{position}
      , _taille{taille}
			, _fichier{fichier}
    {}

		virtual ~Modification() = default;
		virtual uint getPosition() const noexcept {return _position;}
    virtual size_t getTaille() const noexcept {return _taille;}
		virtual shared_ptr<Fichier> getFichier() const {return _fichier;}
		virtual void effectuerModification() = 0;
};

#endif //MODIFICATION
