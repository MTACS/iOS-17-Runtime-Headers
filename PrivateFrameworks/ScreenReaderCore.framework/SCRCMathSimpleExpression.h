
@interface SCRCMathSimpleExpression : SCRCMathExpression {
    NSString * _content;
}

@property (nonatomic, copy) NSString *content;

- (void).cxx_destruct;
- (id)_functionNames;
- (bool)canBeUsedWithBase;
- (id)content;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (long long)integerValue;
- (bool)isFunctionName;
- (bool)isInteger;
- (bool)isWordOrAbbreviation;
- (id)latexMathModeDescription;
- (void)setContent:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;

@end
