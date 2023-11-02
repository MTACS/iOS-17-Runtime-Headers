
@interface PKAppleBalanceDirectTopUpConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _denominations;
    NSDecimalNumber * _maxAmount;
    NSDecimalNumber * _maxBalance;
    NSDecimalNumber * _minAmount;
    NSURL * _termsURL;
}

@property (nonatomic, copy) NSArray *denominations;
@property (nonatomic, copy) NSDecimalNumber *maxAmount;
@property (nonatomic, copy) NSDecimalNumber *maxBalance;
@property (nonatomic, copy) NSDecimalNumber *minAmount;
@property (nonatomic, copy) NSURL *termsURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denominations;
- (id)description;
- (id)displayableDenominations;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAMSResponseDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maxAmount;
- (id)maxBalance;
- (id)minAmount;
- (void)setDenominations:(id)arg1;
- (void)setMaxAmount:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMinAmount:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (id)termsURL;

@end
