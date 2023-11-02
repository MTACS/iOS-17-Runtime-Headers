
@protocol SBRemoteTransientOverlayViewControllerDelegate <NSObject>

@required

- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (bool)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(NSString *)arg2;
- (SBUIRemoteAlertButtonAction *)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (void)remoteTransientOverlayViewControllerDidInvalidate:(SBRemoteTransientOverlayViewController *)arg1;
- (void)remoteTransientOverlayViewControllerRequestsDeactivation:(SBRemoteTransientOverlayViewController *)arg1;
- (void)remoteTransientOverlayViewControllerRequestsInvalidation:(SBRemoteTransientOverlayViewController *)arg1;

@optional

- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didAppearAnimated:(bool)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 didDisappearAnimated:(bool)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 willAppearAnimated:(bool)arg2;
- (void)remoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 willDisappearAnimated:(bool)arg2;

@end
