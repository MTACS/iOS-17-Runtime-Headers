
@interface HKMedicationIngredient : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _denominator;
    HKQuantity * _numerator;
    HKClinicalCodingCollection * _substanceCodingCollection;
}

@property (nonatomic, readonly, copy) HKQuantity *denominator;
@property (nonatomic, readonly, copy) HKQuantity *numerator;
@property (nonatomic, readonly, copy) HKClinicalCodingCollection *substanceCodingCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denominator;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubstanceCodingCollection:(id)arg1 numerator:(id)arg2 denominator:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)numerator;
- (id)substanceCodingCollection;

@end
