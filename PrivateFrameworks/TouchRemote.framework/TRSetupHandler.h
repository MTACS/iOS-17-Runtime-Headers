
@interface TRSetupHandler : NSObject {
    <TRSetupHandlerDelegate> * _delegate;
}

@property (nonatomic) <TRSetupHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
