
@protocol SBInCallBannerPresentableViewControllerDelegate <NSObject>

@required

- (void)inCallBannerPresentableViewController:(SBInCallBannerPresentableViewController *)arg1 didDisappearWithReason:(NSString *)arg2;
- (void)inCallBannerPresentableViewController:(SBInCallBannerPresentableViewController *)arg1 viewWillTransitionSizeWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)inCallBannerPresentableViewController:(SBInCallBannerPresentableViewController *)arg1 willDisappearWithReason:(NSString *)arg2;
- (void)inCallBannerPresentableViewControllerCallConnectedStatusChanged:(SBInCallBannerPresentableViewController *)arg1;
- (void)inCallBannerPresentableViewControllerDidAppear:(SBInCallBannerPresentableViewController *)arg1;
- (void)inCallBannerPresentableViewControllerDidCrossDefaultDraggingThreshold:(SBInCallBannerPresentableViewController *)arg1;
- (void)inCallBannerPresentableViewControllerDidReceiveTap:(SBInCallBannerPresentableViewController *)arg1;
- (void)inCallBannerPresentableViewControllerUserInteractionDidEnd:(SBInCallBannerPresentableViewController *)arg1;
- (void)inCallBannerPresentableViewControllerUserInteractionWillBegin:(SBInCallBannerPresentableViewController *)arg1;
- (void)inCallBannerPresentableViewControllerWillAppear:(SBInCallBannerPresentableViewController *)arg1;

@end
