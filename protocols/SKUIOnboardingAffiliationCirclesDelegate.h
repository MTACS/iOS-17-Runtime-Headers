
@protocol SKUIOnboardingAffiliationCirclesDelegate <NSObject>

@optional

- (void)onboardingCircles:(SKUIOnboardingAffiliationCirclesViewController *)arg1 didRemoveAffiliationItem:(SKUIOnboardingAffiliationItem *)arg2;
- (void)onboardingCircles:(SKUIOnboardingAffiliationCirclesViewController *)arg1 didSelectAffiliationItem:(SKUIOnboardingAffiliationItem *)arg2 atIndex:(long long)arg3;
- (void)onboardingCirclesDidChangeAffiliationItems:(SKUIOnboardingAffiliationCirclesViewController *)arg1;

@end
