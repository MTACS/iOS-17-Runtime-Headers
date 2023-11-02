
@interface RemoteManagement.ManagedKeychain : NSObject {
    void accessGroup;
}

+ (id)assignedPersistentRef;
+ (id)assignedUserName;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assetKeysForCertificatesWithScope:(long long)arg1 persona:(id)arg2 error:(id*)arg3;
- (id)assetKeysForIdentitiesWithScope:(long long)arg1 persona:(id)arg2 error:(id*)arg3;
- (id)assetKeysForPasswordsWithScope:(long long)arg1 persona:(id)arg2 error:(id*)arg3;
- (id)assignCertWithAssetKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3 toConfigurationKey:(id)arg4 accessibility:(id)arg5 accessGroup:(id)arg6 error:(id*)arg7;
- (id)assignIdentityWithAssetKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3 toConfigurationKey:(id)arg4 accessibility:(id)arg5 accessGroup:(id)arg6 error:(id*)arg7;
- (id)assignPasswordWithAssetKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3 toConfigurationKey:(id)arg4 accessibility:(id)arg5 accessGroup:(id)arg6 returnUserName:(id*)arg7 error:(id*)arg8;
- (id)certificatePersistentRefWithAssetKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3 error:(id*)arg4;
- (id)certificatePersistentRefsWithAssetKeys:(id)arg1 scope:(long long)arg2 persona:(id)arg3 error:(id*)arg4;
- (struct __SecCertificate { }*)copyCertificateWithAssetKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3 error:(id*)arg4;
- (id)debugStateWithScope:(long long)arg1 persona:(id)arg2;
- (bool)deleteWithAssetKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3 error:(id*)arg4;
- (bool)hasAssetForAssetKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3;
- (id)init;
- (bool)storeACMEIdentityWithDirectoryURL:(id)arg1 clientIdentifier:(id)arg2 keySize:(unsigned long long)arg3 keyType:(id)arg4 hardwareBound:(bool)arg5 subject:(id)arg6 subjectAltName:(id)arg7 usageFlags:(unsigned long long)arg8 extendedKeyUsage:(id)arg9 attest:(bool)arg10 isUserEnrollment:(bool)arg11 assetKey:(id)arg12 scope:(long long)arg13 persona:(id)arg14 error:(id*)arg15;
- (bool)storeSCEPIdentityWithUrl:(id)arg1 caInstanceName:(id)arg2 caFingerprint:(id)arg3 caCapabilities:(id)arg4 challenge:(id)arg5 subject:(id)arg6 keySize:(unsigned long long)arg7 usageFlags:(unsigned long long)arg8 subjectAltName:(id)arg9 retries:(unsigned long long)arg10 retryDelay:(unsigned int)arg11 assetKey:(id)arg12 scope:(long long)arg13 persona:(id)arg14 error:(id*)arg15;
- (bool)storeWithDerData:(id)arg1 assetKey:(id)arg2 scope:(long long)arg3 persona:(id)arg4 error:(id*)arg5;
- (bool)storeWithPassword:(id)arg1 userName:(id)arg2 assetKey:(id)arg3 scope:(long long)arg4 persona:(id)arg5 error:(id*)arg6;
- (bool)storeWithPemData:(id)arg1 assetKey:(id)arg2 scope:(long long)arg3 persona:(id)arg4 error:(id*)arg5;
- (bool)storeWithPkcs12Data:(id)arg1 password:(id)arg2 assetKey:(id)arg3 scope:(long long)arg4 persona:(id)arg5 error:(id*)arg6;
- (bool)unassignAllAssetsFromConfigurationKey:(id)arg1 scope:(long long)arg2 persona:(id)arg3 error:(id*)arg4;

@end
