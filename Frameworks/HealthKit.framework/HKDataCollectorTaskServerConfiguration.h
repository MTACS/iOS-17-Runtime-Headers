
@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration {
    NSString * _bundleIdentifier;
    bool  _canResumeFromLastDatum;
    HKQuantityType * _quantityType;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool canResumeFromLastDatum;
@property (nonatomic, copy) HKQuantityType *quantityType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (bool)canResumeFromLastDatum;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantityType:(id)arg1 bundleIdentifier:(id)arg2 canResumeFromLastDatum:(bool)arg3;
- (id)quantityType;
- (void)setBundleIdentifier:(id)arg1;
- (void)setQuantityType:(id)arg1;

@end
