
@protocol HRElectrocardiogramOnboardingManagerDelegate <NSObject>

@optional

- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)didTapOnElectrocardiogram:(HKElectrocardiogram *)arg1;

@end
