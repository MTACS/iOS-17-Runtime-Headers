
@interface WDClinicalOnboardingManager : NSObject {
    HKNavigationController * _inFlightClinicalSharingLoginViewController;
    WDClinicalOnboardingOAuthNavigationViewController * _inFlightLoginViewController;
    HKNavigationController * _onboardingTileNavigationController;
    WDClinicalGatewayProxy * _pendingOnboardingGateway;
    HRProfile * _profile;
}

@property (nonatomic) HKNavigationController *inFlightClinicalSharingLoginViewController;
@property (nonatomic) WDClinicalOnboardingOAuthNavigationViewController *inFlightLoginViewController;
@property (nonatomic) HKNavigationController *onboardingTileNavigationController;
@property (nonatomic, retain) WDClinicalGatewayProxy *pendingOnboardingGateway;
@property (nonatomic) HRProfile *profile;

- (void).cxx_destruct;
- (id)_deepLinkOnboardingViewControllerWithOptions:(unsigned long long)arg1;
- (void)_didDismissLoginViewController:(id)arg1;
- (void)_dismissInFlightLoginViewControllerIfExistsWithCompletion:(id /* block */)arg1;
- (void)_presentAccount:(id)arg1 presentingViewController:(id)arg2;
- (void)_startLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_startOrReplaceLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)dealloc;
- (id)gatewayProxyWithActivity:(id)arg1;
- (id)getPendingOnboardingGatewayAndClear;
- (id)inFlightClinicalSharingLoginViewController;
- (id)inFlightLoginViewController;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)logPrefix;
- (void)onboardWithActivity:(id)arg1 presentingViewController:(id)arg2;
- (id)onboardingTileNavigationController;
- (id)pendingOnboardingGateway;
- (id)profile;
- (void)registerInflightOnboardingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)setInFlightClinicalSharingLoginViewController:(id)arg1;
- (void)setInFlightLoginViewController:(id)arg1;
- (void)setOnboardingTileNavigationController:(id)arg1;
- (void)setPendingOnboardingGateway:(id)arg1;
- (void)setProfile:(id)arg1;

@end
