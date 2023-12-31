
@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression {
    SCRCMathExpression * _divisor;
}

@property (nonatomic, retain) SCRCMathExpression *divisor;

- (void).cxx_destruct;
- (id)divisor;
- (id)initWithDictionary:(id)arg1;
- (void)setDivisor:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;

@end
