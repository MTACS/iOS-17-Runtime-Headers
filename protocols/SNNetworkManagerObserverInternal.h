
@protocol SNNetworkManagerObserverInternal <NSObject>

@required

- (void)networkManagerLostNonWWANConnectivity:(SNNetworkManagerInternal *)arg1;
- (void)networkManagerNetworkUnreachable:(SNNetworkManagerInternal *)arg1;
- (void)networkManagerNonWWANDidBecomeAvailable:(SNNetworkManagerInternal *)arg1;

@end
