
@interface WDClinicalAccountOnboardingSession : NSObject {
    void accountStore;
    void analyticsManager;
    void context;
    void options;
    void profile;
    void sharingClient;
}

@property (nonatomic, readonly) HKClinicalAccountStore *accountStore;
@property (nonatomic, readonly) bool allowsCancellingClinicalOnboarding;
@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HRProfile *profile;
@property (nonatomic, readonly) bool shouldLaunchClinicalSharing;

- (void).cxx_destruct;
- (id)accountStore;
- (bool)allowsCancellingClinicalOnboarding;
- (long long)context;
- (id)init;
- (id)initWithContext:(long long)arg1 options:(unsigned long long)arg2 profile:(id)arg3 analyticsManager:(id)arg4;
- (id)makeDataTypeSelectionViewControllerForAccount:(id)arg1;
- (id)makeNecessaryScopesNotPresentViewControllerForAccount:(id)arg1;
- (unsigned long long)options;
- (void)persistEphemeralAccount:(id)arg1 fromSharing:(bool)arg2 completion:(id /* block */)arg3;
- (id)profile;
- (bool)shouldLaunchClinicalSharing;
- (void)submitClinicalSharingOnboardingStepAnalytic:(long long)arg1;

@end
