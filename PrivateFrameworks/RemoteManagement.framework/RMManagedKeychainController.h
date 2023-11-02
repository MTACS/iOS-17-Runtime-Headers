
@interface RMManagedKeychainController : NSObject {
    NSString * _personaID;
    long long  _scope;
}

@property (nonatomic, copy) NSString *personaID;
@property (nonatomic) long long scope;

+ (id)lock;
+ (id)modifierLock;
+ (id)newManagedKeychainControllerForScope:(long long)arg1 personaID:(id)arg2;

- (void).cxx_destruct;
- (void)_postNotification;
- (id)assetKeysForCertificatesAndReturnError:(id*)arg1;
- (id)assetKeysForIdentitiesAndReturnError:(id*)arg1;
- (id)assetKeysForPasswordsAndReturnError:(id*)arg1;
- (id)assignCertificateForAssetKey:(id)arg1 toConfigurationKey:(id)arg2 access:(void*)arg3 group:(id)arg4 error:(id*)arg5;
- (id)assignIdentityForAssetKey:(id)arg1 configurationKey:(id)arg2 access:(void*)arg3 group:(id)arg4 error:(id*)arg5;
- (id)assignPasswordForAssetKey:(id)arg1 toConfigurationKey:(id)arg2 access:(void*)arg3 group:(id)arg4 returnUserName:(id*)arg5 error:(id*)arg6;
- (id)certificatePersistentRefForAssetKey:(id)arg1 error:(id*)arg2;
- (id)certificatePersistentRefsForAssetKeys:(id)arg1 error:(id*)arg2;
- (id)debugState;
- (bool)hasDataForAssetKey:(id)arg1;
- (id)initWithScope:(long long)arg1 personaID:(id)arg2;
- (void)lockBeforeModifyingKeychain;
- (id)personaID;
- (bool)removedKeychainItemsForAssetKey:(id)arg1 error:(id*)arg2;
- (long long)scope;
- (void)setPersonaID:(id)arg1;
- (void)setScope:(long long)arg1;
- (bool)storeACMEDirectoryURL:(id)arg1 clientIdentifier:(id)arg2 keySize:(unsigned long long)arg3 keyType:(id)arg4 hardwareBound:(bool)arg5 subject:(id)arg6 subjectAltName:(id)arg7 usageFlags:(unsigned long long)arg8 extendedKeyUsage:(id)arg9 attest:(bool)arg10 isUserEnrollment:(bool)arg11 assetKey:(id)arg12 error:(id*)arg13;
- (bool)storePEMData:(id)arg1 assetKey:(id)arg2 error:(id*)arg3;
- (bool)storePKCS12Data:(id)arg1 password:(id)arg2 assetKey:(id)arg3 error:(id*)arg4;
- (bool)storePKCS1Data:(id)arg1 assetKey:(id)arg2 error:(id*)arg3;
- (bool)storePassword:(id)arg1 userName:(id)arg2 assetKey:(id)arg3 error:(id*)arg4;
- (bool)storeSCEPIdentityURL:(id)arg1 caInstanceName:(id)arg2 caFingerprint:(id)arg3 caCapabilities:(id)arg4 challenge:(id)arg5 subject:(id)arg6 keySize:(unsigned long long)arg7 usageFlags:(unsigned long long)arg8 subjectAltName:(id)arg9 retries:(unsigned long long)arg10 retryDelay:(unsigned int)arg11 assetKey:(id)arg12 error:(id*)arg13;
- (bool)unassignAllAssetsFromConfigurationKey:(id)arg1 error:(id*)arg2;
- (void)unlockAfterModifyingKeychain;

@end
