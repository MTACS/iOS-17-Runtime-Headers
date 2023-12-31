
@protocol EQKitLayoutNode <NSObject>

@required

- (bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (bool)isBaseFontNameUsed;
- (bool)isEmbellishedOperator;
- (bool)isNumber;
- (int)isOperatorPaddingRequired;
- (bool)isSpaceLike;
- (struct Schemata { int (**x1)(); int x2; id x3; id x4; })layoutSchemata;
- (<EQKitLayoutNode> *)layoutStyleNode;
- (<EQKitLayoutNode><EQKitOperator> *)operatorCore;
- (<EQKitLayoutNode> *)parent;

@end
