
@protocol HUFeatureOnboardingFlow <NSObject>

@required

+ (NAFuture *)needsOnboardingForHome:(HMHome *)arg1 options:(NSDictionary *)arg2;

- (HMHome *)home;
- (UIViewController<HUConfigurationViewController> *)initialViewController;
- (NAFuture *)onboardingFuture;
- (UIViewController<HUConfigurationViewController> *)processUserInput:(NSMutableDictionary *)arg1;
- (void)setHome:(HMHome *)arg1;
- (void)setInitialViewController:(UIViewController<HUConfigurationViewController> *)arg1;
- (void)setOnboardingFuture:(NAFuture *)arg1;
- (bool)shouldAbortAllOnboarding;
- (bool)shouldAbortThisOnboardingFlowGroup;

@optional

- (void)checkIfStillRequiredFromCurrentResults:(NSMutableDictionary *)arg1;
- (NAFuture *)readyFuture;
- (void)setReadyFuture:(NAFuture *)arg1;

@end
