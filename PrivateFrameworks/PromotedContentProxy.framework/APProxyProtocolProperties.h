
@interface APProxyProtocolProperties : NSObject {
    APProxySessionConfigurationProvider * _proxySessionConfigurationProvider;
    APProxyURLCredentialService * _proxyURLCredentialService;
    APNSURLSessionDemultiplexerManager * _sessionDemultiplexerManager;
}

@property (nonatomic, retain) APProxySessionConfigurationProvider *proxySessionConfigurationProvider;
@property (nonatomic, retain) APProxyURLCredentialService *proxyURLCredentialService;
@property (nonatomic, retain) APNSURLSessionDemultiplexerManager *sessionDemultiplexerManager;

- (void).cxx_destruct;
- (id)proxySessionConfigurationProvider;
- (id)proxyURLCredentialService;
- (id)sessionDemultiplexerManager;
- (void)setProxySessionConfigurationProvider:(id)arg1;
- (void)setProxyURLCredentialService:(id)arg1;
- (void)setSessionDemultiplexerManager:(id)arg1;

@end
