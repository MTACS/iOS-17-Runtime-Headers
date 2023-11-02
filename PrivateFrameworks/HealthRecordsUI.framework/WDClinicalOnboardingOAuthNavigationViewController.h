
@interface WDClinicalOnboardingOAuthNavigationViewController : HKNavigationController <HRClinicalSharingOnboardingDelegate> {
    WDClinicalGatewayProxy * _gatewayProxyToTry;
    HKClinicalAccount * _onboardingAccount;
    <ClinicalSharingOnboardingDelegate> * _onboardingDelegate;
    WDClinicalAccountOnboardingSession * _onboardingSession;
    bool  _onboardingSourceIsDeepLink;
    HKNavigationController * _onboardingTileNavigationViewController;
    HKClinicalProvider * _providerToPresent;
    bool  _showProviderNotFound;
}

@property (nonatomic, retain) WDClinicalGatewayProxy *gatewayProxyToTry;
@property (nonatomic, readonly, copy) HKClinicalAccount *onboardingAccount;
@property (nonatomic) <ClinicalSharingOnboardingDelegate> *onboardingDelegate;
@property (nonatomic, readonly) WDClinicalAccountOnboardingSession *onboardingSession;
@property (nonatomic) bool onboardingSourceIsDeepLink;
@property (nonatomic) HKNavigationController *onboardingTileNavigationViewController;
@property (nonatomic, readonly) HRProfile *profile;
@property (nonatomic, retain) HKClinicalProvider *providerToPresent;
@property (nonatomic) bool showProviderNotFound;

- (void).cxx_destruct;
- (void)_clearLoginBusyIndicator;
- (id)_createInitialRootViewController;
- (void)_dismissViewController;
- (void)_mainQueue_completionNotificationHandler:(id)arg1;
- (void)beginListeningToNotification;
- (void)completionNotificationHandler:(id)arg1;
- (void)createRootViewController;
- (void)didCompleteOnboardingFor:(id)arg1;
- (void)didLoginToAccount:(id)arg1;
- (void)dismissWithAccount:(id)arg1 error:(id)arg2 animated:(bool)arg3;
- (id)gatewayProxyToTry;
- (id)init;
- (id)initWithContext:(long long)arg1 onboardingOptions:(unsigned long long)arg2 profile:(id)arg3 existingAccount:(id)arg4;
- (id)initWithSession:(id)arg1 existingAccount:(id)arg2;
- (id)keyCommands;
- (id)onboardingAccount;
- (id)onboardingDelegate;
- (id)onboardingSession;
- (bool)onboardingSourceIsDeepLink;
- (id)onboardingTileNavigationViewController;
- (id)profile;
- (id)providerToPresent;
- (void)setGatewayProxyToTry:(id)arg1;
- (void)setOnboardingDelegate:(id)arg1;
- (void)setOnboardingSourceIsDeepLink:(bool)arg1;
- (void)setOnboardingTileNavigationViewController:(id)arg1;
- (void)setProviderToPresent:(id)arg1;
- (void)setShowProviderNotFound:(bool)arg1;
- (bool)showProviderNotFound;
- (void)stopListeningToNotification;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
