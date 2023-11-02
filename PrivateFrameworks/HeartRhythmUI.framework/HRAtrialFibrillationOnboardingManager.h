
@interface HRAtrialFibrillationOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate> {
    <HRAtrialFibrillationOnboardingManagerDelegate> * _delegate;
    HKFeatureAvailabilityStore * _featureAvailabilityStore;
    NSNumber * _hasAtrialFibrillationDiagnosis;
    _HRAtrialFibrillationOnboardingNavigationController * _navigationController;
    HKOnboardingManager * _onboardingManager;
    long long  _provenance;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HRAtrialFibrillationOnboardingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKFeatureAvailabilityStore *featureAvailabilityStore;
@property (nonatomic, retain) NSNumber *hasAtrialFibrillationDiagnosis;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _HRAtrialFibrillationOnboardingNavigationController *navigationController;
@property (nonatomic, readonly) HKOnboardingManager *onboardingManager;
@property (nonatomic, readonly) long long provenance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setOnboardingCompletedForCountryCode:(id)arg1;
- (void)_submitTipsDiscoverabilitySignal;
- (void)_wrapUpOnboardingWithNotificationsEnabled:(bool)arg1;
- (id)availableOnboardingStepsForOnboardingManager:(id)arg1;
- (id)delegate;
- (void)didBeginOnboardingForOnboardingManager:(id)arg1;
- (void)didCancelOnboardingForOnboardingManager:(id)arg1;
- (void)didCompleteOnboardingForOnboardingManager:(id)arg1;
- (void)dismissOnboarding;
- (id)featureAvailabilityStore;
- (id)hasAtrialFibrillationDiagnosis;
- (id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(bool)arg2 healthStore:(id)arg3 dateCache:(id)arg4 provenance:(long long)arg5 delegate:(id)arg6;
- (id)navigationController;
- (id)onboardingManager;
- (id)onboardingManager:(id)arg1 customViewControllerForPage:(id)arg2;
- (id)onboardingManager:(id)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3;
- (void)onboardingManager:(id)arg1 willMoveToPage:(id)arg2;
- (id)onboardingNavigationController;
- (long long)provenance;
- (void)setDelegate:(id)arg1;
- (void)setHasAtrialFibrillationDiagnosis:(id)arg1;

@end
