
@protocol COIDSPresenceObserver <NSObject>

@optional

- (void)didAddDevice:(COIDSDiscoveryRecord *)arg1;
- (void)didRemoveDevice:(COIDSDiscoveryRecord *)arg1;

@end
