
@protocol HUFeatureOnboardingConfiguratorDelegate <HUConfiguratorDelegate>

@required

- (NAFuture *)getNextViewControllerForOnboardingInput:(NSDictionary *)arg1 currentOnboardingFlowClass:(Class)arg2;
- (void)restartCurrentOnboarding;

@end
