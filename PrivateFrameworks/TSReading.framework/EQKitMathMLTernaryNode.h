
@interface EQKitMathMLTernaryNode : EQKitMathMLNode <EQKitMathMLNode> {
    EQKitMathMLNode * mFirst;
    EQKitMathMLNode * mSecond;
    EQKitMathMLNode * mThird;
}

- (void)dealloc;
- (id)init;
- (id)initFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parser:(id)arg2;
- (id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3;
- (bool)isBaseFontNameUsed;
- (const void*)mathMLAttributes;

@end
