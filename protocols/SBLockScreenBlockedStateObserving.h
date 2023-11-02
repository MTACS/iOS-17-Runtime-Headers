
@protocol SBLockScreenBlockedStateObserving <NSObject>

@required

- (void)noteDeviceBlockedStatusUpdated;
- (void)noteResetRestoreStateUpdated;

@end
