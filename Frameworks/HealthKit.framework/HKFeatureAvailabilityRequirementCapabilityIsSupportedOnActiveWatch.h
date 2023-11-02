
@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveWatch : _HKFeatureAvailabilityRequirementCapabilityIsSupportedOnActiveRemoteDevice {
    bool  _supportedOnLocalDevice;
}

@property (nonatomic, readonly) bool supportedOnLocalDevice;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureIdentifier:(id)arg1 supportedOnLocalDevice:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)requirementDescription;
- (bool)supportedOnLocalDevice;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;

@end
