
@protocol SUUIOnboardingAffiliationCirclesDelegate <NSObject>

@optional

- (void)onboardingCircles:(SUUIOnboardingAffiliationCirclesViewController *)arg1 didRemoveAffiliationItem:(SUUIOnboardingAffiliationItem *)arg2;
- (void)onboardingCircles:(SUUIOnboardingAffiliationCirclesViewController *)arg1 didSelectAffiliationItem:(SUUIOnboardingAffiliationItem *)arg2 atIndex:(long long)arg3;
- (void)onboardingCirclesDidChangeAffiliationItems:(SUUIOnboardingAffiliationCirclesViewController *)arg1;

@end
