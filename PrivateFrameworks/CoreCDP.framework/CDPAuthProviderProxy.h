
@interface CDPAuthProviderProxy : NSObject <CDPAuthProviderInternal> {
    <CDPAuthProvider> * _authProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proxyWithAuthProvider:(id)arg1;

- (void).cxx_destruct;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(id /* block */)arg3;

@end
