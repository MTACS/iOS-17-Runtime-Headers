
@interface _HKFeatureAvailabilityProvidingObserverBridge : NSObject <HKFeatureAvailabilityProvidingObserver> {
    HKObserverBridgeHandle * _handle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKObserverBridgeHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObserversWithFeatureAvailabilityProviding:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)handle;
- (id)initWithHandle:(id)arg1;

@end
