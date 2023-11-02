
@interface ONOXMLDocument : NSObject <NSCoding, NSCopying, ONOSearching> {
    NSDateFormatter * _dateFormatter;
    NSMutableDictionary * _defaultNamespaces;
    NSNumberFormatter * _numberFormatter;
    ONOXMLElement * _rootElement;
    unsigned long long  _stringEncoding;
    NSString * _version;
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } * _xmlDocument;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSMutableDictionary *defaultNamespaces;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic, retain) ONOXMLElement *rootElement;
@property (nonatomic) unsigned long long stringEncoding;
@property (nonatomic, copy) NSString *version;
@property (nonatomic) struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*xmlDocument;

+ (id)HTMLDocumentWithData:(id)arg1 error:(id*)arg2;
+ (id)HTMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;
+ (id)XMLDocumentWithData:(id)arg1 error:(id*)arg2;
+ (id)XMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)CSS:(id)arg1;
- (id)XPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormatter;
- (void)dealloc;
- (id)defaultNamespaces;
- (void)definePrefix:(id)arg1 forDefaultNamespace:(id)arg2;
- (id)description;
- (id)elementWithNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateElementsWithCSS:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateElementsWithCSS:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateElementsWithXPath:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateElementsWithXPath:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)enumeratorWithXPathObject:(struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*)arg1;
- (id)firstChildWithCSS:(id)arg1;
- (id)firstChildWithXPath:(id)arg1;
- (id)functionResultByEvaluatingXPath:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)numberFormatter;
- (id)rootElement;
- (void)setDateFormatter:(id)arg1;
- (void)setDefaultNamespaces:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setRootElement:(id)arg1;
- (void)setStringEncoding:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (void)setXmlDocument:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1;
- (unsigned long long)stringEncoding;
- (id)version;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)xmlDocument;

@end
