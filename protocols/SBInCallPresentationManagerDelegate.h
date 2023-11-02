
@protocol SBInCallPresentationManagerDelegate <NSObject>

@required

- (SBInCallPresentationSession *)inCallPresentationManager:(SBInCallPresentationManager *)arg1 createPresentationSessionWithSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (long long)inCallPresentationManager:(SBInCallPresentationManager *)arg1 interfaceOrientationForBannerPresentationInWindowScene:(SBWindowScene *)arg2;
- (long long)inCallPresentationManager:(SBInCallPresentationManager *)arg1 interfaceOrientationForTransientOverlayPresentationInWindowScene:(SBWindowScene *)arg2;
- (void)inCallPresentationManagerRequestsHandlingOfDeferredUILock:(SBInCallPresentationManager *)arg1;

@end
