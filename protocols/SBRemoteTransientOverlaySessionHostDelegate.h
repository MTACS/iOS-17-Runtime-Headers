
@protocol SBRemoteTransientOverlaySessionHostDelegate <NSObject>

@required

- (long long)activeWallpaperVariantForRemoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1;
- (SBWindowScene *)embeddedDisplayWindowSceneForRemoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1;
- (void)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 didInvalidateWithReason:(long long)arg2 error:(NSError *)arg3;
- (bool)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 performDismissalRequest:(SBRemoteTransientOverlayDismissalRequest *)arg2;
- (bool)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 performPresentationRequest:(SBRemoteTransientOverlayPresentationRequest *)arg2;
- (bool)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(NSString *)arg2;
- (void)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(SBTransientOverlayViewController *)arg3;
- (bool)remoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg1 shouldActivateWithContext:(SBSRemoteAlertActivationContext *)arg2;

@end
