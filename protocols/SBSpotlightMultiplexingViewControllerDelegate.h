
@protocol SBSpotlightMultiplexingViewControllerDelegate <SPUIRemoteSearchViewDelegate>

@optional

- (void)spotlightMultiplexingViewController:(SBSpotlightMultiplexingViewController *)arg1 externalKeyboardViewContainsKeyboardDidChange:(bool)arg2;
- (void)spotlightMultiplexingViewController:(SBSpotlightMultiplexingViewController *)arg1 searchContentAvailabilityDidChange:(bool)arg2;

@end
