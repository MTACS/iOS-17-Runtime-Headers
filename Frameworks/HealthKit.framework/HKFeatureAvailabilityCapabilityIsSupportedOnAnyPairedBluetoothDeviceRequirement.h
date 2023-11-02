
@interface HKFeatureAvailabilityCapabilityIsSupportedOnAnyPairedBluetoothDeviceRequirement : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *requirementDescription;
@property (readonly) Class superclass;

- (bool)capabilityIsSupportedOnPairedBluetoothDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;

@end
