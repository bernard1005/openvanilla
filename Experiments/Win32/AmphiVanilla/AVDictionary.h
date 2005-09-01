#include <string>
#include "OpenVanilla.h"
#include "tinyxml.h"
#include <sys/types.h>

class AVDictIter : protected TiXmlNode
{
public:
	const char* getName() const {	return ToElement()->Attribute("name");	}
	const char* getValue() const {	return ToElement()->Attribute("value");	}
};

class AVDictionary : public OVDictionary {
	public:
		AVDictionary();
		AVDictionary(const char *f);
		AVDictionary(const char *f, const char *dict);
		virtual ~AVDictionary();
		virtual int keyExist(const char *key);
		virtual int getInteger(const char *key);
		virtual int setInteger(const char *key, int value);
		virtual const char* getString(const char *key);
		virtual const char* setString(const char *key, const char *value);
		
		void setPath(const char *path);
		void setDict(const char *dict);
		bool createNewConfig(std::string path);
		void update();
		void save();

		// Used for iteration	2005.09.01 Added by Hong Jen Yee (PCMan)
		AVDictIter* firstIter(){	return (AVDictIter*)module->FirstChild();	}
		AVDictIter* nextIter(AVDictIter* key)
		{
			TiXmlNode* node = (TiXmlNode*)key;
			return (AVDictIter*)node->NextSibling();
		}

	private:
		std::string name;
		std::string file;
		void newDict();
		TiXmlNode *findChild(TiXmlNode *parent, const char *node, const char *name);
		TiXmlDocument doc;
		TiXmlNode *module;
};
