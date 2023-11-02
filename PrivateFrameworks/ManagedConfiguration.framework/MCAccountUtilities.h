
@interface MCAccountUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _signInQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *signInQueue;

+ (id)accountDataclassesForBundleID:(id)arg1;
+ (id)appStoreAccountIdentifierForPersona:(id)arg1;
+ (void)checkAccountConsistencyAndReleaseOrphanedAccounts;
+ (bool)hasManagedAccountOfDataclasses:(id)arg1;

- (void).cxx_destruct;
- (bool)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id*)arg4;
- (bool)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id*)arg4;
- (id)init;
- (void)setSignInQueue:(id)arg1;
- (void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 baseViewController:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)signInQueue;

@end
