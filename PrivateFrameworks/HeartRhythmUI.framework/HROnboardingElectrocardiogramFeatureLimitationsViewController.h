
@interface HROnboardingElectrocardiogramFeatureLimitationsViewController : HRSpeedBumpViewController <HKAdaptiveModalPresented>

- (bool)_hasOnboardedBeforeWithStore:(id)arg1;
- (id)_makeSpeedBumpItemForUpdateOnboarding:(bool)arg1;
- (id)initForOnboarding:(bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;

@end
