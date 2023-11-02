
@interface TRProxyAuthOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _proxyAuthHandler;
    id /* block */  _proxyAuthHandlerWithError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ proxyAuthHandler;
@property (nonatomic, copy) id /* block */ proxyAuthHandlerWithError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)initWithProxyAuthHandler:(id /* block */)arg1;
- (id)initWithProxyAuthHandlerWithError:(id /* block */)arg1;
- (id /* block */)proxyAuthHandler;
- (id /* block */)proxyAuthHandlerWithError;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setProxyAuthHandler:(id /* block */)arg1;
- (void)setProxyAuthHandlerWithError:(id /* block */)arg1;

@end
