
@interface TKTokenDriverContext : TKTokenBaseContext <TKTokenDriverProtocol> {
    TKTokenConfigurationConnection * _configurationConnection;
    NSXPCListenerEndpoint * _configurationEndpoint;
    TKTokenDriver * _driver;
    id  _initialKeepAlive;
}

@property (nonatomic, readonly) TKTokenConfigurationConnection *configurationConnection;
@property (nonatomic, readonly) NSXPCListenerEndpoint *configurationEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TKTokenDriver *driver;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double idleTimeout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireTokenWithInstanceID:(id)arg1 reply:(id /* block */)arg2;
- (void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(id /* block */)arg3;
- (void)auditAuthOperation:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 success:(bool)arg3;
- (id)configurationConnection;
- (id)configurationEndpoint;
- (id)configurationForTokenID:(id)arg1;
- (void)configureWithReply:(id /* block */)arg1;
- (id)driver;
- (double)idleTimeout;
- (void)releaseTokenWithInstanceID:(id)arg1 reply:(id /* block */)arg2;
- (void)setConfigurationEndpoint:(id)arg1 reply:(id /* block */)arg2;
- (void)setup;
- (bool)startRequestWithError:(id*)arg1;

@end
