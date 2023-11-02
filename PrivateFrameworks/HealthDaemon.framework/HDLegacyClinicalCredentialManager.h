
@interface HDLegacyClinicalCredentialManager : NSObject {
    NSData * _cachedCredentialKey;
    NSObject<OS_dispatch_queue> * _credentialKeyQueue;
}

@property (nonatomic, copy) NSData *cachedCredentialKey;

- (void).cxx_destruct;
- (id)_tokenDataFromToken:(id)arg1 error:(out id*)arg2;
- (id)cachedCredentialKey;
- (bool)deleteCredentialKeyFromKeychainWithError:(id*)arg1;
- (id)init;
- (void)setCachedCredentialKey:(id)arg1;
- (id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(id*)arg1;
- (bool)unitTesting_storeCredentialKeyInKeychain:(id)arg1 error:(id*)arg2;

@end
