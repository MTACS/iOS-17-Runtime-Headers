
@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_authContextFromCDPContext:(id)arg1;
- (void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)isPrimaryAppleIDLoggedIn;

@end
