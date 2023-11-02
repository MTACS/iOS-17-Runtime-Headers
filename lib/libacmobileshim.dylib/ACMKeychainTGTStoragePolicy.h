
@interface ACMKeychainTGTStoragePolicy : NSObject <ACCSSOTGTStoragePolicy> {
    NSString * _service;
    bool  _useSharedStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ACFKeychainManagerProtocol> *keychainManager;
@property (nonatomic, retain) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic) bool useSharedStorage;

- (id)allTokensWithPrincipal:(id)arg1;
- (id)allTokensWithPrincipal:(id)arg1 service:(id)arg2;
- (id)dictionaryWithSSOToken:(id)arg1;
- (id)keychainManager;
- (bool)performRemoveTokenWithPrincipal:(id)arg1 service:(id)arg2;
- (bool)performStoreToken:(id)arg1 withService:(id)arg2;
- (bool)removeTokenWithPrincipal:(id)arg1;
- (id)searchItemWithInfo:(id)arg1;
- (id)searchTokenWithPrincipal:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void)setUseSharedStorage:(bool)arg1;
- (id)ssoTokenWithKeychainInfo:(id)arg1 realm:(id)arg2;
- (int)storeItemWithInfo:(id)arg1;
- (bool)storeToken:(id)arg1;
- (id)tokenDataWithDictionary:(id)arg1;
- (id)tokenDictionaryWithData:(id)arg1;
- (bool)updateToken:(id)arg1;
- (bool)useSharedStorage;

@end
