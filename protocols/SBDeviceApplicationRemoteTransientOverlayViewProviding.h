
@protocol SBDeviceApplicationRemoteTransientOverlayViewProviding <NSObject>

@required

- (void)dismissRemoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1;
- (bool)isPresentingOnBehalfOfApplication:(SBApplication *)arg1;
- (bool)isPresentingTransientOverlay:(SBRemoteTransientOverlayViewController *)arg1;
- (void)presentRemoteTransientOverlayViewController:(SBRemoteTransientOverlayViewController *)arg1 presentationRequest:(SBRemoteTransientOverlayPresentationRequest *)arg2;
- (SBWindowScene *)windowScene;

@end
