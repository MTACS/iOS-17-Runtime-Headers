
@interface HFPresenceConditionNaturalLanguageOptions : HFConditionNaturalLanguageOptions {
    HMHome * _home;
}

@property (nonatomic, retain) HMHome *home;

- (void).cxx_destruct;
- (id)home;
- (id)initWithFormattingContext:(long long)arg1 formattingStyle:(long long)arg2;
- (id)initWithHome:(id)arg1 formattingContext:(long long)arg2 formattingStyle:(long long)arg3;
- (void)setHome:(id)arg1;

@end
