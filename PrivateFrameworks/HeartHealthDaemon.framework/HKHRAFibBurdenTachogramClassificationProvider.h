
@interface HKHRAFibBurdenTachogramClassificationProvider : NSObject <NSSecureCoding> {
    ABTachogramClassification * _computedTachogramClassification;
    HKHRSampleClassification * _sampleClassification;
}

@property (nonatomic, readonly) HKHRSampleClassification *sampleClassification;
@property (nonatomic, readonly) ABTachogramClassification *tachogramClassification;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleClassification:(id)arg1;
- (id)initWithSampleClassification:(id)arg1 tachogramClassification:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sampleClassification;
- (id)tachogramClassification;

@end
