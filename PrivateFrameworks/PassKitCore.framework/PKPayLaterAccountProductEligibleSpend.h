
@interface PKPayLaterAccountProductEligibleSpend : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _availableToSpend;
    NSDate * _expirationDate;
    NSArray * _financingOptions;
}

@property (nonatomic, retain) PKCurrencyAmount *availableToSpend;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) NSArray *financingOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableToSpend;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)financingOptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAvailableToSpend:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFinancingOptions:(id)arg1;

@end
