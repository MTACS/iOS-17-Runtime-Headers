
@interface SCRCMathTableExpression : SCRCMathArrayExpression

- (unsigned long long)_numberOfColumns;
- (bool)canBeWrappedInLatexMathIndicators;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;
- (bool)isMultiRowTable;
- (id)latexDescriptionInMathMode:(bool)arg1;
- (id)mathMLTag;
- (unsigned long long)numberOfTables;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;

@end
