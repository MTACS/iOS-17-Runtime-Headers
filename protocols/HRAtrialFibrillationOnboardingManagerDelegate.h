
@protocol HRAtrialFibrillationOnboardingManagerDelegate <NSObject>

@optional

- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)didEnableAtrialFibrillationNotifications;

@end
