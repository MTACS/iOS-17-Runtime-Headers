
@interface STConcretePasscodeAuthenticationProviderService : NSObject <STPasscodeAuthenticationProviderService, STPasscodeAuthenticationResultReceiverInterface> {
    NSXPCListenerEndpoint * _clientListenerEndpoint;
    id /* block */  _pendingAuthenticationCompletionHandler;
}

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingAuthenticationCompletionHandler;

- (void).cxx_destruct;
- (void)authenticatePasscodeWithCommunicationServiceProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientListenerEndpoint;
- (id)description;
- (id)initWithClientListenerEndpoint:(id)arg1;
- (id /* block */)pendingAuthenticationCompletionHandler;
- (void)receivePasscodeAuthenticationResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPendingAuthenticationCompletionHandler:(id /* block */)arg1;

@end
