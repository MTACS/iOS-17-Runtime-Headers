
@interface GKPlayerCredentialController : NSObject {
    GKThreadsafeDictionary * _allCredentialsCache;
    NSString * _gameBundleId;
    bool  _lastSaveFailed;
    long long  _loginCancelledCount;
    GKThreadsafeDictionary * _primaryCredentialCache;
    ACAccountStore * _store;
}

@property (nonatomic, retain) GKThreadsafeDictionary *allCredentialsCache;
@property (nonatomic, retain) NSString *gameBundleId;
@property (nonatomic) bool lastSaveFailed;
@property long long loginCancelledCount;
@property (readonly) bool loginDisabled;
@property (nonatomic, retain) GKThreadsafeDictionary *primaryCredentialCache;
@property (nonatomic, retain) ACAccountStore *store;

+ (id)accessQueue;
+ (void)migrateOldAccountInformation;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)_transact:(id /* block */)arg1 complete:(id /* block */)arg2;
- (id)_transactAndWait:(id /* block */)arg1;
- (id)accessQueue;
- (void)accountStoreDidChange:(id)arg1;
- (void)accountStoreEmailDidChange:(id)arg1;
- (id)allCredentialsCache;
- (id)allCredentialsForEnvironment:(long long)arg1;
- (id)credentialForPlayer:(id)arg1 environment:(long long)arg2;
- (id)credentialForUsername:(id)arg1 environment:(long long)arg2;
- (void)dealloc;
- (id)gameBundleId;
- (void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidateCredentialCaches;
- (bool)lastSaveFailed;
- (long long)loginCancelledCount;
- (bool)loginDisabled;
- (id)primaryCredentialCache;
- (id)primaryCredentialForEnvironment:(long long)arg1;
- (id)primaryCredentialForEnvironment:(long long)arg1 accountStore:(id)arg2;
- (id)pushCredentialForEnvironment:(long long)arg1;
- (void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)removeCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAllCredentialsCache:(id)arg1;
- (void)setContactAssociationID:(id)arg1 contactIntegrationConsent:(int)arg2 serviceLastUpdateTimestamp:(id)arg3 forEnvironment:(long long)arg4 forcefully:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)setCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setGameBundleId:(id)arg1;
- (void)setLastSaveFailed:(bool)arg1;
- (void)setLoginCancelledCount:(long long)arg1;
- (void)setPrimaryCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrimaryCredentialCache:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)suggestedUsername;

@end
