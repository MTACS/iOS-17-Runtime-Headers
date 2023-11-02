
@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _currency;
    long long  _exponent;
    NSString * _preformattedString;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic) long long exponent;
@property (nonatomic, copy) NSString *preformattedString;

+ (id)maximumCurrencyAmount:(id)arg1 otherCurrencyAmount:(id)arg2;
+ (id)minimumCurrencyAmount:(id)arg1 otherCurrencyAmount:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)absoluteValue;
- (id)amount;
- (id)amountByConvertingToSmallestCommonCurrencyUnit;
- (long long)compareToCurrencyCode:(id)arg1 amount:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)currencyAmountByAddingCurrencyAmount:(id)arg1;
- (id)currencyAmountBySubtractingCurrencyAmount:(id)arg1;
- (bool)currencyAmountEqualToCurrencyAmount:(id)arg1;
- (bool)currencyAmountGreaterThanCurrencyAmount:(id)arg1;
- (bool)currencyAmountLessThanCurrencyAmount:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)exponent;
- (id)formattedStringValue;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 currency:(id)arg2;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 exponent:(long long)arg3;
- (id)initWithAmount:(id)arg1 exponent:(long long)arg2 preformattedString:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrency;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCurrencyAmount:(id)arg1;
- (id)minimalFormattedStringValue;
- (id)minimalFormattedStringValueInLocale:(id)arg1;
- (id)negativeValue;
- (id)preformattedString;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setExponent:(long long)arg1;
- (void)setPreformattedString:(id)arg1;

@end
