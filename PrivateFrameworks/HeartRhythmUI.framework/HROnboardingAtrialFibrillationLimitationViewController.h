
@interface HROnboardingAtrialFibrillationLimitationViewController : HRSpeedBumpViewController <HKAdaptiveModalPresented>

+ (id)makeSpeedBumpItem;

- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;

@end
