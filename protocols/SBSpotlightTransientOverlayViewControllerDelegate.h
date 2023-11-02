
@protocol SBSpotlightTransientOverlayViewControllerDelegate <NSObject>

@optional

- (void)spotlightTransientOverlayViewControllerDidPresent:(SBSpotlightTransientOverlayViewController *)arg1;
- (void)spotlightTransientOverlayViewControllerRequestsDismissal:(SBSpotlightTransientOverlayViewController *)arg1;
- (void)spotlightTransientOverlayViewControllerWillDismiss:(SBSpotlightTransientOverlayViewController *)arg1;

@end
