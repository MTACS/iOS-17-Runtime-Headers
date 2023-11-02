
@interface EQKitMathMLMTr : EQKitMathMLNode <EQKitLayoutSchemataTr, EQKitMathMLNode> {
    NSArray * mChildren;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1;
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (bool)isBaseFontNameUsed;
- (struct Schemata { int (**x1)(); int x2; id x3; id x4; })layoutSchemata;
- (id)layoutStyleNode;
- (const void*)mathMLAttributes;
- (id)schemataChildren;

@end
