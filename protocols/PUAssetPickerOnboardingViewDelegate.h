
@protocol PUAssetPickerOnboardingViewDelegate <NSObject>

@required

- (void)assetPickerOnboardingViewDidDismissBadge:(PUAssetPickerOnboardingView *)arg1;
- (void)assetPickerOnboardingViewDidTransitionToBadge:(PUAssetPickerOnboardingView *)arg1;
- (void)assetPickerOnboardingViewWantsToLearnMoreAboutDataAccess:(PUAssetPickerOnboardingView *)arg1;

@end
