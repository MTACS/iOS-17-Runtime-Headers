
@interface PKPayLaterFinancingAmount : NSObject <NSCopying, NSSecureCoding> {
    PKCurrencyAmount * _currencyAmount;
    PKCurrencyAmount * _merchantCurrencyAmount;
}

@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (nonatomic, retain) PKCurrencyAmount *merchantCurrencyAmount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrencyAmount:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)merchantCurrencyAmount;
- (void)setCurrencyAmount:(id)arg1;
- (void)setMerchantCurrencyAmount:(id)arg1;

@end
