
@interface CRKConcreteKeychain : NSObject <CRKKeychain> {
    NSDictionary * _baseQueryAttributes;
}

@property (nonatomic, readonly, copy) NSDictionary *baseQueryAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultKeychain;

- (void).cxx_destruct;
- (id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
- (id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
- (id)addItem:(void*)arg1 toAccessGroup:(id)arg2;
- (id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
- (id)baseQueryAttributes;
- (id)certificateWithPersistentID:(id)arg1;
- (void*)copyItemWithPersistentID:(id)arg1 itemClass:(id)arg2;
- (id)description;
- (id)identityWithPersistentID:(id)arg1;
- (id)initWithBaseQueryAttributes:(id)arg1;
- (id)makeCertificateWithData:(id)arg1;
- (id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
- (id)makeIdentityWithConfiguration:(id)arg1;
- (id)makeItemWithPersistentID:(id)arg1 itemClass:(id)arg2 creationBlock:(id /* block */)arg3;
- (id)makePasswordFacade;
- (id)makePrivateKeyWithData:(id)arg1;
- (id)passwordForService:(id)arg1;
- (id)privateKeyWithPersistentID:(id)arg1;
- (void)removeItemWithPersistentID:(id)arg1;
- (void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3;

@end
