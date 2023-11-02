
@protocol BNPresentedBannerAnimationCustomizing <NSObject>

@optional

- (bool)shouldFenceAnimationsForPresentable:(id <BNPresentable>)arg1;
- (BSAnimationSettings *)sizeTransitionAnimationSettingsForPresentable:(id <BNPresentable>)arg1;
- (BSAnimationSettings *)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id <BNPresentable>)arg1 forTransitionToStyle:(long long)arg2;

@end
