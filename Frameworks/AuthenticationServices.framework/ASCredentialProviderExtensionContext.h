
@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRequestWithError:(id)arg1;
- (void)completeAssertionRequestWithSelectedPasskeyCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeExtensionConfigurationRequest;
- (void)completeRegistrationRequestWithSelectedPasskeyCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)completeRequestWithSelectedCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1 requestParameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceForPasskeyRegistration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareInterfaceToProvideCredentialForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForRequest:(id)arg1;

@end
