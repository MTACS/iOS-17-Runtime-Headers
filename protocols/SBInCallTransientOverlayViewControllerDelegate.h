
@protocol SBInCallTransientOverlayViewControllerDelegate <NSObject>

@required

- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 didAppearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 didDisappearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 viewWillTransitionSizeWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 willAppearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewController:(SBInCallTransientOverlayViewController *)arg1 willDisappearAnimated:(bool)arg2;
- (void)inCallTransientOverlayViewControllerDidUpdateAmbientPresentationIsAmbientPresented:(bool)arg1 ambientDisplayStyle:(long long)arg2;
- (void)inCallTransientOverlayViewControllerRequestsDismissal:(SBInCallTransientOverlayViewController *)arg1;
- (bool)inCallTransientOverlayViewControllerShouldPreventBannerPresentations:(SBInCallTransientOverlayViewController *)arg1;
- (bool)inCallTransientOverlayViewControllerShouldSupportAlwaysOnDisplay:(SBInCallTransientOverlayViewController *)arg1;

@end
