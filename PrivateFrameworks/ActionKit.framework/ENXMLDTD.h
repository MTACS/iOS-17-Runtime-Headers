
@interface ENXMLDTD : NSObject {
    NSString * _docTypeDeclaration;
    struct _xmlDtd { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlDoc {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; void *x10; void *x11; void *x12; void *x13; char *x14; char *x15; void *x16; } * _dtd;
}

@property (nonatomic, retain) NSString *docTypeDeclaration;

+ (id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2;
+ (id)enexDTD;
+ (id)enml2dtd;
+ (void)initialize;
+ (id)lat1DTD;
+ (id)specialDTD;
+ (id)symbolDTD;

- (void).cxx_destruct;
- (void)dealloc;
- (id)docTypeDeclaration;
- (id)initWithContentsOfFile:(id)arg1;
- (bool)isAttributeLegal:(id)arg1 inElement:(id)arg2;
- (bool)isElementLegal:(id)arg1;
- (id)sanitizedAttributes:(id)arg1 forElement:(id)arg2;
- (void)setDocTypeDeclaration:(id)arg1;
- (struct _xmlElement { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlDtd {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; struct _xmlElementContent {} *x11; struct _xmlAttribute {} *x12; char *x13; struct _xmlRegexp {} *x14; }*)xmlElementNamed:(id)arg1;
- (struct _xmlEntity { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlDtd {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; char *x10; char *x11; int x12; int x13; char *x14; char *x15; struct _xmlEntity {} *x16; char *x17; int x18; int x19; }*)xmlEntityNamed:(id)arg1;

@end
