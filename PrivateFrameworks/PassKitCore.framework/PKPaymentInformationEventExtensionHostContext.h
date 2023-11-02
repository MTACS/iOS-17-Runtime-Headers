
@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol> {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)handleConfigurationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleInformationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSignatureRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)replyQueue;
- (id)vendorContext;
- (id)vendorContextWithErrorHandler:(id /* block */)arg1;

@end
