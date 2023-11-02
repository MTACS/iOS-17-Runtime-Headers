
@interface _TPSEligibleTip : NSObject {
    NSString * _identifier;
    NSDate * _lastEligibleDate;
    NSDate * _lastOfferedDate;
    bool  _overrideFrequencyControl;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastEligibleDate;
@property (nonatomic, readonly, copy) NSDate *lastOfferedDate;
@property (nonatomic, readonly) bool overrideFrequencyControl;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (long long)eligibleDateCompare:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 lastEligibileDate:(id)arg2 lastOfferedDate:(id)arg3 overrideFrequencyControl:(bool)arg4;
- (id)lastEligibleDate;
- (id)lastOfferedDate;
- (bool)overrideFrequencyControl;
- (void)setLastEligibleDate:(id)arg1;

@end
