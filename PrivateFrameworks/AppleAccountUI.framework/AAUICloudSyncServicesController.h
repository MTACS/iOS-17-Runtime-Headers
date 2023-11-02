
@interface AAUICloudSyncServicesController : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSMutableArray * _dataclassesRequiringMergeDecision;
    bool  _didUserConsentToMerge;
    id /* block */  _handler;
    bool  _isVerifyingExistingEmailAccount;
    NSMutableDictionary * _queuedDataclassActions;
    NSMutableDictionary * _queuedDataclassStates;
    MFAccountValidator * _validator;
    AAAutoAccountVerifier * _verifier;
}

+ (id)_domainFromAddress:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;

- (void).cxx_destruct;
- (id)_account;
- (void)_addMailAccount:(id)arg1;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (void)_validateMailAccount:(id)arg1;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(bool)arg3;
- (void)completeEnablingCloudServicesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setBackupEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setCloudServicesEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDeviceLocatorEnabled:(bool)arg1;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(id /* block */)arg2;

@end
