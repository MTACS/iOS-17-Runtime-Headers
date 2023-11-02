
@protocol HKOnboardingManagerDataSource <NSObject>

@required

- (NSArray *)availableOnboardingStepsForOnboardingManager:(HKOnboardingManager *)arg1;
- (HKOnboardingSequence *)onboardingManager:(HKOnboardingManager *)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3;

@optional

- (HKOnboardingBaseViewController *)onboardingManager:(HKOnboardingManager *)arg1 customViewControllerForPage:(HKOnboardingPage *)arg2;
- (long long)upgradingFromAlgorithmVersionForOnboardingManager:(HKOnboardingManager *)arg1;

@end
