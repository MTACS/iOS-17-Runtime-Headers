
@interface HKFeatureAvailabilityRequirementCapabilityIsSupportedOnAnyWatch : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement> {
    NSUUID * _nanoRegistryCapability;
    bool  _supportedOnLocalDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *nanoRegistryCapability;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;
@property (getter=isSupportedOnLocalDevice, nonatomic, readonly) bool supportedOnLocalDevice;

+ (id)requirementIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNanoRegistryCapability:(id)arg1 supportedOnLocalDevice:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (bool)isSupportedOnLocalDevice;
- (id)nanoRegistryCapability;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (id)requirementDescription;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;

@end
