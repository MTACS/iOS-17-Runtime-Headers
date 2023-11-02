
@interface CRKASMCredentialStore : NSObject {
    CRKAnnotatedCredentialStore * _certificateAnnotatedStore;
    CRKAnnotatedCredentialStore * _identityAnnotatedStore;
    <CRKKeychain> * _keychain;
}

@property (nonatomic, readonly) CRKAnnotatedCredentialStore *certificateAnnotatedStore;
@property (nonatomic, readonly, copy) CRKASMCredentialManifest *certificateManifest;
@property (nonatomic, readonly, copy) NSDictionary *debugInfo;
@property (nonatomic, readonly) CRKAnnotatedCredentialStore *identityAnnotatedStore;
@property (nonatomic, readonly, copy) CRKASMCredentialManifest *identityManifest;
@property (nonatomic, readonly) <CRKKeychain> *keychain;

- (void).cxx_destruct;
- (id)addCertificate:(id)arg1 entry:(id)arg2;
- (id)addCertificate:(id)arg1 forUserIdentifier:(id)arg2;
- (id)addCertificates:(id)arg1 forUserIdentifier:(id)arg2;
- (id)addEntriesByCertificate:(id)arg1;
- (id)addIdentity:(id)arg1 entry:(id)arg2;
- (id)addIdentity:(id)arg1 forUserIdentifier:(id)arg2;
- (id)certificateAnnotatedStore;
- (id)certificateManifest;
- (id)certificateWithPersistentID:(id)arg1;
- (void)clearCertificates;
- (void)clearIdentities;
- (id)debugInfo;
- (void)forgetCertificatesWithPersistentIDs:(id)arg1;
- (void)forgetIdentitiesWithPersistentIDs:(id)arg1;
- (id)identityAnnotatedStore;
- (id)identityManifest;
- (id)identityWithPersistentID:(id)arg1;
- (id)initWithKeychain:(id)arg1 accessGroup:(id)arg2 certificateManifestStorageKey:(id)arg3 identityManifestStorageKey:(id)arg4;
- (id)keychain;
- (id)makeCertificateWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2;
- (id)makeEntryWithCertificate:(id)arg1 userIdentifier:(id)arg2;
- (id)makeIdentityWithCommonNamePrefix:(id)arg1 userIdentifier:(id)arg2;
- (void)removeCertificatesWithPersistentIDs:(id)arg1;
- (void)removeIdentitiesWithPersistentIDs:(id)arg1;

@end
