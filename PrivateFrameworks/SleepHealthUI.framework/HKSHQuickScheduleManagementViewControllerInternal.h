
@interface HKSHQuickScheduleManagementViewControllerInternal : UINavigationController <HKFeatureAvailabilityProvidingObserver> {
    void appStateObserver;
    void featureAvailability;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  gregorianCalendar;
    void provenanceSource;
    void sleepDelegate;
    void sleepScheduleProvider;
    void sleepStore;
}

@property (nonatomic) <HKSHQuickScheduleManagementViewControllerDelegateInternal> *sleepDelegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)cancelWithAnimated:(bool)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithSleepStore:(id)arg1 provenanceSource:(id)arg2;
- (void)setSleepDelegate:(id)arg1;
- (id)sleepDelegate;
- (void)viewDidAppear:(bool)arg1;

@end
