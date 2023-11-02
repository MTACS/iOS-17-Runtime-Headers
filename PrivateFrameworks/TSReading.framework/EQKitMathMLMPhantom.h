
@interface EQKitMathMLMPhantom : EQKitMathMLUnaryNode <EQKitLayoutSchemataPhantom, EQKitMathMLNode>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (bool)isEmbellishedOperator;
- (struct Schemata { int (**x1)(); int x2; id x3; id x4; })layoutSchemata;
- (id)operatorCore;
- (id)schemataChild;

@end
