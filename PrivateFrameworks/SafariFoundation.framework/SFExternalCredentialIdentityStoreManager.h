
@interface SFExternalCredentialIdentityStoreManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_credentialIdentityStoreWithIdentifier:(id)arg1;
- (void)getCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)removeCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
