
@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {
    long long  _fontStyle;
}

@property (nonatomic, readonly) long long fontStyle;

- (bool)_isPrime;
- (bool)canFormWordStartingWithExpression:(id)arg1;
- (id)description;
- (long long)fontStyle;
- (id)initWithDictionary:(id)arg1;
- (bool)isNaturalSuperscript;
- (bool)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2 isPartOfWord:(bool)arg3;

@end
