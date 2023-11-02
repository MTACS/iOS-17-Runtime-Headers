
@protocol SBTransientOverlayPresenting <NSObject, SBButtonEventsHandler>

@required

- (bool)activePresentationPreventsDragAndDrop;
- (bool)canActivePresentationBecomeLocalFirstResponder;
- (bool)canHandleButtonEvents;
- (UIStatusBarStyleRequest *)currentStatusBarStyleRequest;
- (bool)handleDoubleHeightStatusBarTap;
- (bool)hasActivePresentation;
- (bool)hasActivePresentationFromBundleIdentifier:(NSString *)arg1;
- (bool)hasActivePresentationFromProcess:(BSProcessHandle *)arg1;
- (bool)hasActiveSpotlightPresentation;
- (bool)hasPresentationAboveWindowLevel:(double)arg1;
- (bool)hasVisibleStatusBar;
- (bool)isPresentingViewController:(SBTransientOverlayViewController *)arg1;
- (bool)isTopmostPresentationFromSceneWithIdentityTokenString:(NSString *)arg1;
- (bool)isTopmostPresentedViewController:(SBTransientOverlayViewController *)arg1;
- (<BSInvalidatable> *)newContentStatusBarHiddenAssertionWithReason:(NSString *)arg1;
- (bool)ownsHomeGesture;
- (long long)preferredGestureDismissalStyle;
- (NSNumber *)preferredWhitePointAdaptivityStyleValue;
- (bool)prefersStatusBarActivityItemVisible;
- (long long)presentedViewControllerCount;
- (NSArray *)presentedViewControllers;
- (void)setFluidDismissalState:(SBFluidDismissalState *)arg1 forViewController:(SBTransientOverlayViewController *)arg2;
- (bool)shouldDisableControlCenter;
- (bool)shouldDisableCoverSheetGesture;
- (bool)shouldDisableSiri;
- (bool)shouldUseSceneBasedKeyboardFocusForActivePresentation;
- (SBTransientOverlayViewController *)topmostPresentedViewController;
- (long long)topmostViewControllerInterfaceOrientation;
- (double)topmostWindowLevel;
- (SBTransientOverlayViewController *)viewControllerForGestureDismissal;
- (SBWindowScene *)windowScene;

@end
