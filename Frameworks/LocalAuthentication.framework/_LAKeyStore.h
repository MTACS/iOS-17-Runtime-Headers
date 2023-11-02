
@interface _LAKeyStore : NSObject <LAKeyStore, _LAKeyStoreGenericPasswordCryptor> {
    <LAKeyStoreBackend> * _backend;
    LAKeyStoreSecretCoder * _coder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)decryptData:(id)arg1 publicKeyHash:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)encryptData:(id)arg1 publicKeyHash:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchGenericPasswordWithIdentifier:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchGenericPasswordsWithDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchItemsWithDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchKeyWithIdentifier:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchKeyWithPublicKeyHash:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchKeysWithDomain:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)removeGenericPasswordsWithDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)removeItemsWithCompletion:(id /* block */)arg1;
- (void)removeItemsWithDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)removeKeysWithDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)storeGenericPassword:(id)arg1 identifier:(id)arg2 domain:(id)arg3 protectedBy:(id)arg4 completion:(id /* block */)arg5;
- (void)storeKeyWithIdentifier:(id)arg1 domain:(id)arg2 protectedBy:(id)arg3 completion:(id /* block */)arg4;

@end
