
@protocol HKOnboardingPageViewControllerDelegate <NSObject>

@required

- (HKDateCache *)dateCache;
- (bool)firstTimeOnboarding;
- (HKHealthStore *)healthStore;
- (void)setUserInfo:(NSMutableDictionary *)arg1;
- (void)stepForward;
- (NSMutableDictionary *)userInfo;

@optional

- (void)onboardingCancelled;

@end
