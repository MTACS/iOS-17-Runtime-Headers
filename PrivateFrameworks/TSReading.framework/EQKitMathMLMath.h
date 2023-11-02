
@interface EQKitMathMLMath : NSObject <EQKitExpression, EQKitMathMLNode, EQKitRootNode> {
    void * mAttributeCollection;
    EQKitEnvironmentInstance * mEnvironment;
    EQKitMathMLNode * mExpression;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EQKitLayoutNode> *parent;
@property (readonly) Class superclass;

- (struct AttributeCollection { }*)attributeCollection;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parser:(id)arg2;
- (bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (bool)isBaseFontNameUsed;
- (bool)isEmbellishedOperator;
- (bool)isNumber;
- (int)isOperatorPaddingRequired;
- (bool)isSpaceLike;
- (struct Schemata { int (**x1)(); int x2; id x3; id x4; })layoutSchemata;
- (id)layoutStyleNode;
- (const void*)mathMLAttributes;
- (id)newLayout;
- (id)operatorCore;
- (id)parent;
- (long long)scriptLevelWithBase:(long long)arg1;

@end
