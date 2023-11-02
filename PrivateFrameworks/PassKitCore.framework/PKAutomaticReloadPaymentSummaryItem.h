
@interface PKAutomaticReloadPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _thresholdAmount;
}

@property (nonatomic, retain) NSDecimalNumber *thresholdAmount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutomaticReloadPaymentSummaryItem:(id)arg1;
- (void)setThresholdAmount:(id)arg1;
- (id)thresholdAmount;

@end
