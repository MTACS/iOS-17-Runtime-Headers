
@interface SCRCMathRadicalExpression : SCRCMathExpression {
    SCRCMathExpression * _radicand;
    SCRCMathExpression * _rootIndex;
}

@property (nonatomic, retain) SCRCMathExpression *radicand;
@property (nonatomic, retain) SCRCMathExpression *rootIndex;

- (void).cxx_destruct;
- (bool)_isCubeRoot;
- (bool)_isSquareRoot;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)radicand;
- (id)rootIndex;
- (void)setRadicand:(id)arg1;
- (void)setRootIndex:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;

@end
