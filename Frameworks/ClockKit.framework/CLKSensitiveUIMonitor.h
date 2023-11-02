
@interface CLKSensitiveUIMonitor : NSObject

+ (id)sharedMonitor;

- (bool)_isVendorRelease;
- (void)addSensitiveUIObserver:(id)arg1;
- (bool)considersUISensitivitySensitive:(long long)arg1;
- (bool)isSensitiveUIEnabled;
- (void)removeSensitiveUIObserver:(id)arg1;
- (bool)shouldHideForSensitivity:(long long)arg1;

@end
