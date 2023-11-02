
@protocol SBSpotlightPresentableViewControllerDelegate <NSObject>

@required

- (void)spotlightPresentableViewControllerShouldDismiss:(SBSpotlightPresentableViewController *)arg1;

@optional

- (UIView<SBSpotlightBackgroundWeighting> *)backgroundViewForSpotlightPresentableViewController:(SBSpotlightPresentableViewController *)arg1;
- (UIView<SBHSearchAffordance> *)searchAffordanceViewForSpotlightPresentableViewController:(SBSpotlightPresentableViewController *)arg1;
- (bool)wantsHomeAffordanceForSpotlightPresentableViewController:(SBSpotlightPresentableViewController *)arg1;

@end
