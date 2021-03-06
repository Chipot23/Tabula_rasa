#ifndef PICTOPARSER_H
#define PICTOPARSER_H

#include <QString>

class Pictogramme;
class QDomElement;
class QDomNode;
class Algorithm;

class PictoParser
{
public:
    PictoParser();
    virtual Pictogramme* parse(const QDomElement & element, Algorithm* algorithm = 0 ) = 0;
    virtual ~PictoParser();
protected:
    QString readText(const QDomNode & node, const QString name);
};

#endif // PICTOPARSER_H
