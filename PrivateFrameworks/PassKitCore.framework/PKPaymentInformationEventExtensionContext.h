
@interface PKPaymentInformationEventExtensionContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionVendorContextProtocol>

- (oneway void)handleConfigurationRequest:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)handleInformationRequest:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)handleSignatureRequest:(id)arg1 completion:(id /* block */)arg2;

@end
