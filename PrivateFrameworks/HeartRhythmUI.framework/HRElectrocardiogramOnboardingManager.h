
@interface HRElectrocardiogramOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate, HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate, HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate> {
    HKFeatureAvailabilityStore * _availabilityStore;
    <HRElectrocardiogramOnboardingManagerDelegate> * _delegate;
    bool  _isFirstTimeOnboarding;
    bool  _isSampleInteractive;
    HKOnboardingManager * _onboardingManager;
    long long  _provenance;
}

@property (nonatomic, readonly) HKFeatureAvailabilityStore *availabilityStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HRElectrocardiogramOnboardingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFirstTimeOnboarding;
@property (nonatomic, readonly) bool isSampleInteractive;
@property (nonatomic, readonly) HKOnboardingManager *onboardingManager;
@property (nonatomic, readonly) long long provenance;
@property (readonly) Class superclass;

+ (long long)algorithmVersionForSample:(id)arg1;
+ (id)electrocardiogramPossibleResultsViewControllerForAlgorithmVersion:(long long)arg1 forOnboarding:(bool)arg2;
+ (id)electrocardiogramPossibleResultsViewControllerForSample:(id)arg1;
+ (id)electrocardiogramPossibleResultsViewControllerForSample:(id)arg1 forAlgorithmVersion:(long long)arg2;
+ (bool)hasOverriddenOnboardingSettings;

- (void).cxx_destruct;
- (id)availabilityStore;
- (long long)availableAlgorithmVersion;
- (id)availableOnboardingStepsForOnboardingManager:(id)arg1;
- (id)delegate;
- (void)didBeginOnboardingForOnboardingManager:(id)arg1;
- (void)didCancelOnboardingForOnboardingManager:(id)arg1;
- (void)didCompleteOnboardingForOnboardingManager:(id)arg1;
- (void)didTapOnElectrocardiogram:(id)arg1;
- (void)didTapOnShowDevicesInWatchApp;
- (void)dismissOnboarding;
- (id)initWithOnboardingType:(long long)arg1 isFirstTimeOnboarding:(bool)arg2 healthStore:(id)arg3 dateCache:(id)arg4 provenance:(long long)arg5 delegate:(id)arg6 isSampleInteractive:(bool)arg7;
- (bool)isFirstTimeOnboarding;
- (bool)isSampleInteractive;
- (id)onboardingManager;
- (id)onboardingManager:(id)arg1 customViewControllerForPage:(id)arg2;
- (id)onboardingManager:(id)arg1 sequenceForStep:(long long)arg2 onboardingType:(long long)arg3;
- (void)onboardingManager:(id)arg1 willMoveToPage:(id)arg2;
- (id)onboardingNavigationController;
- (long long)provenance;
- (void)recordOnboardingAsCompleted;
- (void)setDelegate:(id)arg1;
- (long long)upgradingFromAlgorithmVersion;
- (long long)upgradingFromAlgorithmVersionForOnboardingManager:(id)arg1;

@end
