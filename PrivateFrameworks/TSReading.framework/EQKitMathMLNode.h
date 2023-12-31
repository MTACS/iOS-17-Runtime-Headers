
@interface EQKitMathMLNode : NSObject <EQKitLayoutNode> {
    <EQKitLayoutNode> * mParent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <EQKitLayoutNode> *parent;
@property (readonly) Class superclass;

- (bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (bool)isBaseFontNameUsed;
- (bool)isEmbellishedOperator;
- (bool)isNumber;
- (int)isOperatorPaddingRequired;
- (bool)isSpaceLike;
- (struct Schemata { int (**x1)(); int x2; id x3; id x4; })layoutSchemata;
- (id)layoutStyleNode;
- (id)operatorCore;
- (id)parent;
- (long long)scriptLevelWithBase:(long long)arg1;
- (void)setParent:(id)arg1;

@end
