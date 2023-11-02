
@interface HFTimeConditionNaturalLanguageOptions : HFConditionNaturalLanguageOptions {
    unsigned long long  _timeContext;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long timeContext;
@property (nonatomic) unsigned long long type;

- (id)initWithFormattingContext:(long long)arg1 formattingStyle:(long long)arg2;
- (id)initWithFormattingContext:(long long)arg1 formattingStyle:(long long)arg2 type:(unsigned long long)arg3;
- (void)setTimeContext:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)timeContext;
- (unsigned long long)type;

@end
