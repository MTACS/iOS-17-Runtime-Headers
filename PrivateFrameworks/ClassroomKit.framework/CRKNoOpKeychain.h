
@interface CRKNoOpKeychain : NSObject <CRKKeychain>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
- (id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
- (id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
- (id)certificateWithPersistentID:(id)arg1;
- (id)identityWithPersistentID:(id)arg1;
- (id)makeCertificateWithData:(id)arg1;
- (id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
- (id)makeIdentityWithConfiguration:(id)arg1;
- (id)makePrivateKeyWithData:(id)arg1;
- (id)passwordForService:(id)arg1;
- (id)privateKeyWithPersistentID:(id)arg1;
- (void)removeItemWithPersistentID:(id)arg1;
- (void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3;

@end
