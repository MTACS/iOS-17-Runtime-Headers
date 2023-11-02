
@interface AASetupAssistantService : NSObject {
    ACAccount * _account;
    NSString * _appleID;
    struct OpaqueCFHTTPCookieStorage { } * _cookieStorage;
    NSString * _emailChoice;
    NSString * _password;
    NSOperationQueue * _requesterQueue;
    AASigningSession * _signingSession;
    NSDate * _signingSessionCreationDate;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *emailChoice;
@property (nonatomic, copy) NSString *password;

+ (void)resetURLConfiguration;
+ (id)urlConfiguration;

- (void).cxx_destruct;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceReprovisioningWithDSID:(id)arg1;
- (id)_signingSession;
- (id)appleID;
- (void)authenticateWithHandler:(id /* block */)arg1;
- (void)createAppleIDWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)createAppleIDWithParameters:(id)arg1 handlerWithResponse:(id /* block */)arg2;
- (void)dealloc;
- (void)downloadURLConfiguration:(id /* block */)arg1;
- (id)emailChoice;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (void)loginDelegatesWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (id)password;
- (void)setAppleID:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)setEmailChoice:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)shouldPresentUpgradeFlowWithCompletion:(id /* block */)arg1;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg1 handler:(id /* block */)arg2;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(id /* block */)arg1;

@end
