
@interface HKQuantitySeriesSampleEditorTaskServerConfiguration : HKTaskConfiguration {
    HKQuantitySample * _quantitySample;
}

@property (nonatomic, copy) HKQuantitySample *quantitySample;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantitySample:(id)arg1;
- (id)quantitySample;
- (void)setQuantitySample:(id)arg1;

@end
