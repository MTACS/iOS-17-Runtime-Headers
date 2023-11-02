
@protocol SBProximitySensorManagerObserver <NSObject>

@optional

- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 crudeProximityDidChange:(bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 objectWithinProximityDidChange:(bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 objectWithinProximityDidChange:(bool)arg2 detectionMode:(int)arg3;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 proximityDetectionEnabledDidChange:(bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 proximityDetectionPermittedDidChange:(bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 shouldSuppressBacklightChanges:(bool)arg2;

@end
