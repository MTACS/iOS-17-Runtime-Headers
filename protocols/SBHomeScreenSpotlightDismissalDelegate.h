
@protocol SBHomeScreenSpotlightDismissalDelegate <NSObject>

@required

- (unsigned long long)defaultSearchViewPresentationSourceForViewController:(SBHomeScreenSpotlightViewController *)arg1;
- (void)handleSpotlightDismissalFromViewController:(SBHomeScreenSpotlightViewController *)arg1;
- (void)handleSpotlightPresentationFromViewController:(SBHomeScreenSpotlightViewController *)arg1;

@end
