
@interface HKFeatureAvailabilityStoreServerConfiguration : HKTaskConfiguration {
    NSString * _featureIdentifier;
}

@property (nonatomic, readonly, copy) NSString *featureIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1;

@end
