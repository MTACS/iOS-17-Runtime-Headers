
@interface HKRatioValue : NSObject <NSCopying, NSSecureCoding> {
    HKCodedQuantity * _denominator;
    HKCodedQuantity * _numerator;
}

@property (nonatomic, readonly, copy) HKCodedQuantity *denominator;
@property (nonatomic, readonly, copy) HKCodedQuantity *numerator;

+ (id)ratioValueWithNumerator:(id)arg1 andDenominator:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNumerator:(id)arg1 denominator:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denominator;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)numerator;

@end
