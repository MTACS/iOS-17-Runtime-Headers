
@protocol HKOnboardingManagerDelegate <NSObject>

@optional

- (void)didBeginOnboardingForOnboardingManager:(HKOnboardingManager *)arg1;
- (void)didCancelOnboardingForOnboardingManager:(HKOnboardingManager *)arg1;
- (void)didCompleteOnboardingForOnboardingManager:(HKOnboardingManager *)arg1;
- (void)onboardingManager:(HKOnboardingManager *)arg1 willMoveToPage:(HKOnboardingPage *)arg2;

@end
