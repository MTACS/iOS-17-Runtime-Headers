
@interface SXProxyAuthenticationHandler : NSObject <SXProxyAuthenticationHandler> {
    <SXProxyAuthenticationCredentialFactory> * _credentialFactory;
    <SXProxyConfiguration> * _proxyConfiguration;
    unsigned long long  _retryCount;
}

@property (nonatomic, readonly) <SXProxyAuthenticationCredentialFactory> *credentialFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXProxyConfiguration> *proxyConfiguration;
@property (nonatomic, readonly) unsigned long long retryCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)credentialFactory;
- (void)handleAuthenticationChallenge:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCredentialFactory:(id)arg1 proxyConfiguration:(id)arg2 retryCount:(unsigned long long)arg3;
- (id)proxyConfiguration;
- (unsigned long long)retryCount;

@end
