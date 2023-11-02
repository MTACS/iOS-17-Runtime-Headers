
@interface NCDigestOnboardingNavigationController : NCModalNavigationController <NCOnboardingViewControllerDelegate> {
    NSArray * _appBundleIdentifiers;
    bool  _appBundleIdentifiersMutated;
    bool  _appPickerShowMoreButtonWasPressed;
    NCAppPickerContentProvider * _contentProvider;
    NSArray * _deliveryTimes;
    bool  _deliveryTimesMutated;
    int  _entrySource;
    int  _finalUIShown;
    NSSet * _shownAppBundleIdentifiers;
    NSDate * _startTime;
    bool  _userDeferredOnboarding;
    bool  _userFinishedOnboarding;
    bool  _waitingToPresentAppPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NCModalNavigationControllerDelegate><NCDigestOnboardingNavigationControllerDelegate> *presenterDelegate;
@property (readonly) Class superclass;

+ (id)navigationControllerWithOnboardingDelegate:(id)arg1 deferButtonText:(id)arg2;
+ (id)navigationControllerWithOnboardingDelegate:(id)arg1 deferButtonText:(id)arg2 previousBundleIdentifiersSelection:(id)arg3 previousDeliveryTimesSelection:(id)arg4;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_initWithWithOnboardingDelegate:(id)arg1 deferButtonText:(id)arg2 previousBundleIdentifiersSelection:(id)arg3 previousDeliveryTimesSelection:(id)arg4 entrySource:(int)arg5;
- (void)_pushToAppPicker;
- (void)_saveStateOfOnboardingViewController:(id)arg1;
- (void)onboardingViewControllerDidDeferSetup:(id)arg1;
- (void)onboardingViewControllerNextButtonTapped:(id)arg1;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
