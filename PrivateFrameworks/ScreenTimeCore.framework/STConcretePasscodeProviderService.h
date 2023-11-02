
@interface STConcretePasscodeProviderService : NSObject <STPasscodeProviderService, STPasscodeReceiverInterface> {
    NSXPCListenerEndpoint * _clientListenerEndpoint;
    id /* block */  _pendingProvidePasscodeCompletionHandler;
}

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingProvidePasscodeCompletionHandler;

- (void).cxx_destruct;
- (id)clientListenerEndpoint;
- (void)collectPasscodeWithSetupServiceProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)initWithClientListenerEndpoint:(id)arg1;
- (id /* block */)pendingProvidePasscodeCompletionHandler;
- (void)receivePasscode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPendingProvidePasscodeCompletionHandler:(id /* block */)arg1;

@end
