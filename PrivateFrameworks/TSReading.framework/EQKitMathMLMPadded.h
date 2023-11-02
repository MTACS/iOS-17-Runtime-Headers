
@interface EQKitMathMLMPadded : EQKitMathMLUnaryNode <EQKitLayoutSchemataPadded>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (bool)isEmbellishedOperator;
- (struct Schemata { int (**x1)(); int x2; id x3; id x4; })layoutSchemata;
- (const void*)mathMLAttributes;
- (id)operatorCore;
- (id)schemataNode;

@end
