
@interface SCRCMathTableRowExpression : SCRCMathArrayExpression

- (bool)canBeWrappedInLatexMathIndicators;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexDescriptionInMathMode:(bool)arg1;
- (id)mathMLTag;

@end
