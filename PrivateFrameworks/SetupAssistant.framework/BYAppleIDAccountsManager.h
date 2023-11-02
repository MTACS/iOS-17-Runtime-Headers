
@interface BYAppleIDAccountsManager : NSObject {
    AASetupAssistantService * _aaService;
    AALoginPluginManager * _appleIDLoginPluginManager;
    AAStorableLoginContext * _storedLoginContext;
}

@property (setter=setAAService:, nonatomic, retain) AASetupAssistantService *aaService;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)aaService;
- (void)attemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 allowFollowUp:(bool)arg3 completion:(id /* block */)arg4;
- (void)clearStoredLoginContext;
- (void)enableDataClassesForAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(bool)arg4 onlyAppleIDPlugin:(bool)arg5 completion:(id /* block */)arg6;
- (void)performSilentICDPUpgrade;
- (void)preloadDefaultLoginParametersWithBundleIDs:(id)arg1;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 numberOfAttemptsAllowed:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (void)setAAService:(id)arg1;
- (id)storedLoginContext;

@end
