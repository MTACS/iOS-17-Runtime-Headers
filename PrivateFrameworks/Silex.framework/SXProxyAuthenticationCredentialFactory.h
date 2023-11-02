
@interface SXProxyAuthenticationCredentialFactory : NSObject <SXProxyAuthenticationCredentialFactory> {
    <SXProxyAuthenticationKeyProvider> * _keyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXProxyAuthenticationKeyProvider> *keyProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createCredentialForResponse:(id)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithKeyProvider:(id)arg1;
- (id)keyProvider;

@end
