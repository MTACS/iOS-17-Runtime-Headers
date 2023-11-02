
@protocol SBRemoteTransientOverlaySessionManagerDelegate

@required

- (long long)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 activeWallpaperVariantForSession:(SBRemoteTransientOverlaySession *)arg2;
- (SBWindowScene *)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 embeddedDisplayWindowSceneForRemoteTransientOverlaySession:(SBRemoteTransientOverlaySession *)arg2;
- (bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 performDismissalRequest:(SBRemoteTransientOverlayDismissalRequest *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;
- (bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 performPresentationRequest:(SBRemoteTransientOverlayPresentationRequest *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;
- (bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(NSString *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;
- (void)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3 viewController:(SBTransientOverlayViewController *)arg4;
- (bool)remoteTransientOverlaySessionManager:(SBRemoteTransientOverlaySessionManager *)arg1 shouldActivateOverlayWithContext:(SBSRemoteAlertActivationContext *)arg2 forSession:(SBRemoteTransientOverlaySession *)arg3;

@end
