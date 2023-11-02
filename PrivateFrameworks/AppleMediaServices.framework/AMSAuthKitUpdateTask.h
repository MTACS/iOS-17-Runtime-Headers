
@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate> {
    ACAccount * _account;
    <AMSAuthKitUpdateTaskDelegate> * _delegate;
    AMSAuthenticateOptions * _options;
}

@property (nonatomic, readonly) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSAuthKitUpdateTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSAuthenticateOptions *options;
@property (readonly) Class superclass;

+ (void)_updateAccountRawPasswordUsingSecondaryAccounts:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_authenticationType;
- (bool)_canPresentBackgroundPrompt;
- (void)_configureAuthKitContext:(id)arg1;
- (void)_configureClientInfoForContext:(id)arg1;
- (void)_configureCompanionDeviceForContext:(id)arg1;
- (void)_configureIdentifiersForContext:(id)arg1;
- (void)_configureProxyIdentifiersForContext:(id)arg1;
- (void)_configureStringsForContext:(id)arg1;
- (id)_createAuthKitContext;
- (id)_createAuthKitController;
- (void)_logPromptSummaryForResults:(id)arg1 context:(id)arg2;
- (id)account;
- (bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)delegate;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)options;
- (id)performAuthKitUpdate;
- (void)setDelegate:(id)arg1;

@end
