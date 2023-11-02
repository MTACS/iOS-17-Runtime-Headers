
@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration> {
    unsigned long long  _cursor;
    ONOXMLDocument * _document;
    struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; } * _xmlXPath;
}

@property (nonatomic) unsigned long long cursor;
@property (nonatomic, retain) ONOXMLDocument *document;
@property (nonatomic) struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*xmlXPath;

- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)cursor;
- (void)dealloc;
- (id)document;
- (id)nextObject;
- (id)objectAtIndex:(long long)arg1;
- (void)setCursor:(unsigned long long)arg1;
- (void)setDocument:(id)arg1;
- (void)setXmlXPath:(struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*)arg1;
- (struct _xmlXPathObject { int x1; struct _xmlNodeSet {} *x2; int x3; double x4; char *x5; void *x6; int x7; void *x8; int x9; }*)xmlXPath;

@end
