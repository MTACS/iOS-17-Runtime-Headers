
@interface HRClinicalSharingOnboardingInformationalViewController : OBWelcomeController <HKClinicalAccountStoreStateChangeListener> {
    void $__lazy_storage_$_logoView;
    void accountIconProvider;
    void delegate;
    void flowType;
    void gatewayProxyToTry;
    void onboardingSession;
    void selectedAccount;
}

- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)arg1;
- (void)clinicalAccountStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3;
- (void)dealloc;
- (void)didReceiveClinicalAccountOnboardingCompletionWithNotification:(id)arg1;
- (void)didReceiveOAuthCompletionWithNotification:(id)arg1;
- (id)initWithOnboardingSession:(id)arg1 flowType:(long long)arg2 selectedAccount:(id)arg3 delegate:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)nextButtonTappedForAccountLogin:(id)arg1;
- (void)nextButtonTappedForAuthorizationSelection:(id)arg1;
- (void)nextButtonTappedForProviderSearch:(id)arg1;
- (void)skipButtonTappedForAuthorizationSelection:(id)arg1;
- (void)viewDidLoad;

@end
