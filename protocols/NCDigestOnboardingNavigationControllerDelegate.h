
@protocol NCDigestOnboardingNavigationControllerDelegate <NSObject>

@required

- (void)digestOnboardingNavigationController:(NCDigestOnboardingNavigationController *)arg1 didScheduleDigestDeliveryTimes:(NSArray *)arg2 forAppBundleIdentifiers:(NSArray *)arg3;

@optional

- (void)digestOnboardingNavigationController:(NCDigestOnboardingNavigationController *)arg1 didChangeDeliveryTimesActiveSelection:(NSArray *)arg2 appBundleIdentifiersActiveSelection:(NSArray *)arg3;
- (void)digestOnboardingNavigationControllerDidDeferSetup:(NCDigestOnboardingNavigationController *)arg1;

@end
