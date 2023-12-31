
@interface SCRCMathUnderOverExpression : SCRCMathExpression {
    SCRCMathExpression * _base;
    SCRCMathExpression * _over;
    SCRCMathExpression * _under;
}

@property (nonatomic, retain) SCRCMathExpression *base;
@property (nonatomic, retain) SCRCMathExpression *over;
@property (nonatomic, retain) SCRCMathExpression *under;

- (void).cxx_destruct;
- (id)base;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (unsigned long long)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (bool)isRangeSubSuperscript;
- (id)latexMathModeDescription;
- (id)mathMLString;
- (id)over;
- (void)setBase:(id)arg1;
- (void)setOver:(id)arg1;
- (void)setUnder:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)under;

@end
