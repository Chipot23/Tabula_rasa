/*
 * =====================================================================================
 *
 *       Filename:  pictoSortie.hpp
 *
 *    Description:  Tabula Rasa : Classe representant un item de Sortie
 *
 *        Version:  1.0
 *        Created:  15/08/2011 03:41:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Erebe (), erebe@erebe.eu
 *        Company:  Erebe corporation
 *
 * =====================================================================================
 */
#ifndef PICTOSORTIE_HPP
#define PICTOSORTIE_HPP

#include "pictogramme.hpp"

class PictoSortie: public Pictogramme {

     public:
          enum { Type = UserType + 6 };

          PictoSortie( QGraphicsItem* parent = 0,
                       QGraphicsScene* scene = 0 );
          PictoSortie( const QDomElement& node,
                       QGraphicsScene* scene = 0 );


          /*-----------------------------------------------------------------------------
           *  Méthodes
           *-----------------------------------------------------------------------------*/
          void paint( QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget );
          QRectF boundingRect() const;
          virtual int type() const { return Type; }

          void updateDimension();
          void toXml( QDomDocument& doc, QDomNode& node ) const;

};

#endif // PICTOSORTIE_HPP
