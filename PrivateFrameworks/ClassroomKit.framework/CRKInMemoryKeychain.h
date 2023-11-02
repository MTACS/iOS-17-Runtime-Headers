
@interface CRKInMemoryKeychain : NSObject <CRKKeychain> {
    <CRKInMemoryKeychainDelegate> * _delegate;
    NSMutableDictionary * _keychainItemsByPersistentID;
    NSMutableDictionary * _passwordDatasByService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKInMemoryKeychainDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *keychainItemsByPersistentID;
@property (nonatomic, readonly) NSMutableDictionary *passwordDatasByService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
- (id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
- (id)addItem:(id)arg1 toAccessGroup:(id)arg2;
- (id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
- (id)certificateWithPersistentID:(id)arg1;
- (id)delegate;
- (void)enumerateKeychainUsingBlock:(id /* block */)arg1;
- (id)existingPersistentIDForItem:(id)arg1;
- (id)identityWithPersistentID:(id)arg1;
- (id)init;
- (id)itemWithPersistentID:(id)arg1 expectedProtocol:(id)arg2;
- (id)keychainItemsByPersistentID;
- (id)makeCertificateWithData:(id)arg1;
- (id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
- (id)makeIdentityWithConfiguration:(id)arg1;
- (id)makePrivateKeyWithData:(id)arg1;
- (id)passwordDatasByService;
- (id)passwordForService:(id)arg1;
- (id)privateKeyWithPersistentID:(id)arg1;
- (void)removeItemWithPersistentID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3;
- (id)validityDateIntervalForConfiguration:(id)arg1;

@end
