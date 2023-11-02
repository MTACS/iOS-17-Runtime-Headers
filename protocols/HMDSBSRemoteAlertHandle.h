
@protocol HMDSBSRemoteAlertHandle <NSObject>

@required

- (void)activate;
- (void)invalidate;
- (bool)isActive;
- (bool)isValid;
- (void)registerObserver:(id <HMDSBSRemoteAlertHandleObserver>)arg1;
- (void)unregisterObserver:(id <HMDSBSRemoteAlertHandleObserver>)arg1;

@end
