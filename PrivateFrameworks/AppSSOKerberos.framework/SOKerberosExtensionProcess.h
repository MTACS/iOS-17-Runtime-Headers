
@interface SOKerberosExtensionProcess : NSObject {
    NSMutableDictionary * _kerberosByRealm;
    SOKerberosHelper * _kerberosHelper;
    SOKeychainHelper * _keychainHelper;
    NSMapTable * _requestContextMapping;
}

@property (nonatomic, retain) NSMutableDictionary *kerberosByRealm;
@property (retain) SOKerberosHelper *kerberosHelper;
@property (nonatomic, retain) SOKeychainHelper *keychainHelper;
@property (nonatomic, retain) NSMapTable *requestContextMapping;

- (void).cxx_destruct;
- (void)attemptKerberosWithContext:(id)arg1 andDelegate:(id)arg2;
- (void)beginAuthorizationWithRequest:(id)arg1;
- (void)cancelAuthorizationWithRequest:(id)arg1;
- (bool)checkSourceAppACLWithContext:(id)arg1;
- (void)completeRequestWithHTTPResponseFromContext:(id)arg1;
- (void)completeRequestWithToken:(id)arg1 andContext:(id)arg2;
- (id)createContextForRequest:(id)arg1;
- (void)destroyCredentialsWithContext:(id)arg1;
- (void)handleAddKeychainCreds:(id)arg1;
- (void)handleGetRealmInfo:(id)arg1;
- (void)handleGetSiteCode:(id)arg1;
- (void)handleKerberosOperations:(id)arg1 andDelegate:(id)arg2;
- (void)handleLogout:(id)arg1 removeRealm:(bool)arg2;
- (void)handleLogoutWithContext:(id)arg1 removeRealm:(bool)arg2;
- (void)handleMigration;
- (void)handleRemoveRealm:(id)arg1;
- (void)handleResetKeychainChoice:(id)arg1;
- (id)init;
- (id)kerberosByRealm;
- (id)kerberosForRealm:(id)arg1;
- (id)kerberosHelper;
- (id)keychainHelper;
- (id)mapKnownPasswordErrorToString:(id)arg1;
- (void)removeSettingFile:(int)arg1;
- (id)requestContextMapping;
- (void)saveValuesAfterSuccessfulAuthentication:(id)arg1;
- (void)saveValuesAfterSuccessfulPasswordSync:(id)arg1;
- (void)setKerberosByRealm:(id)arg1;
- (void)setKerberosHelper:(id)arg1;
- (void)setKeychainHelper:(id)arg1;
- (void)setRequestContextMapping:(id)arg1;
- (id)settingsForContext:(id)arg1 includeSiteCodeCache:(bool)arg2;

@end
