
@interface SFCredentialProviderExtensionHelperProxy : NSObject <SFCredentialProviderExtensionHelperProtocol> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)_proxyObject;
- (void)dealloc;
- (void)fetchAllPaskeyCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPasskeyCredentialIdentitiesMatchingDomains:(id)arg1 completion:(id /* block */)arg2;
- (void)getCredentialProviderExtensionStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)arg1;
- (void)removeCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCredentialIdentities:(id)arg1 completion:(id /* block */)arg2;

@end
