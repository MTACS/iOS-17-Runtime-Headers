
@protocol SBRemoteTransientOverlaySessionObserver <NSObject>

@optional

- (void)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 didInvalidateWithReason:(long long)arg2 error:(NSError *)arg3;
- (void)remoteTransientOverlaySessionDidActivate:(SBRemoteTransientOverlaySession *)arg1;
- (void)remoteTransientOverlaySessionDidDeactivate:(SBRemoteTransientOverlaySession *)arg1;

@end
