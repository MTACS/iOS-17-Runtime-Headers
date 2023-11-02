
@interface PKSearchAmountResult : NSObject <PKSearchAutocompleteToken> {
    PKCurrencyAmount * _amount;
    long long  _comparison;
}

@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic) long long comparison;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (long long)comparison;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setComparison:(long long)arg1;
- (unsigned long long)tokenType;

@end
