
@interface CRKAnnotatedCredentialStore : NSObject {
    NSString * _accessGroup;
    id /* block */  _addBlock;
    id /* block */  _fetchBlock;
    <CRKKeychain> * _keychain;
    NSString * _manifestStorageKey;
}

@property (nonatomic, readonly, copy) NSString *accessGroup;
@property (nonatomic, readonly) id /* block */ addBlock;
@property (nonatomic, readonly, copy) NSDictionary *debugInfo;
@property (nonatomic, readonly) id /* block */ fetchBlock;
@property (nonatomic, readonly) <CRKKeychain> *keychain;
@property (nonatomic, readonly, copy) CRKAnnotatedCredentialManifest *manifest;
@property (nonatomic, readonly, copy) NSString *manifestStorageKey;

+ (id)certificateStoreWithKeychain:(id)arg1 accessGroup:(id)arg2 manifestStorageKey:(id)arg3;
+ (id)identityStoreWithKeychain:(id)arg1 accessGroup:(id)arg2 manifestStorageKey:(id)arg3;

- (void).cxx_destruct;
- (id)accessGroup;
- (id /* block */)addBlock;
- (id)addCredential:(id)arg1 manifest:(id)arg2;
- (id)addCredentials:(id)arg1;
- (id)credentialWithPersistentID:(id)arg1;
- (id)dataForStorageKey:(id)arg1;
- (id)debugInfo;
- (id /* block */)fetchBlock;
- (void)forgetCredentialsWithPersistentIDs:(id)arg1;
- (id)initWithKeychain:(id)arg1 accessGroup:(id)arg2 manifestStorageKey:(id)arg3 addBlock:(id /* block */)arg4 fetchBlock:(id /* block */)arg5;
- (id)keychain;
- (id)manifest;
- (id)manifestStorageKey;
- (void)removeCredentialsWithPersistentIDs:(id)arg1;
- (void)removePersistentIDsFromKeychain:(id)arg1;
- (void)setData:(id)arg1 forStorageKey:(id)arg2;
- (void)setStoredManifest:(id)arg1;
- (void)setStoredManifestData:(id)arg1;
- (id)storedManifest;
- (id)storedManifestData;

@end
