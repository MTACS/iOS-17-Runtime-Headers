
@interface CRKASMCertificateVendor : NSObject {
    CRKASMCredentialStore * _credentialStore;
}

@property (nonatomic, readonly) CRKASMCredentialStore *credentialStore;

- (void).cxx_destruct;
- (id)certificatesForUserIdentifier:(id)arg1;
- (id)certificatesForUserIdentifiers:(id)arg1;
- (id)credentialStore;
- (void)forgetPersistentIDs:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCredentialStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)manifest;

@end
