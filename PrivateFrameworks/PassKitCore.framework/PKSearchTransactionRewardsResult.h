
@interface PKSearchTransactionRewardsResult : NSObject <PKSearchAutocompleteToken> {
    NSDecimalNumber * _rewardsValue;
    unsigned long long  _rewardsValueUnit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDecimalNumber *rewardsValue;
@property (nonatomic) unsigned long long rewardsValueUnit;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rewardsValue;
- (unsigned long long)rewardsValueUnit;
- (void)setRewardsValue:(id)arg1;
- (void)setRewardsValueUnit:(unsigned long long)arg1;
- (unsigned long long)tokenType;

@end
