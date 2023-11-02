
@protocol _ASCredentialProviderExtensionContextProtocol <NSObject>

@required

- (void)prepareCredentialListForServiceIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareCredentialListForServiceIdentifiers:(void *)arg1 requestParameters:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSArray *, ASPasskeyCredentialRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceForPasskeyRegistration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: <ASCredentialRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareInterfaceToProvideCredentialForIdentity:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: ASPasswordCredentialIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareInterfaceToProvideCredentialForRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: <ASCredentialRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)provideCredentialWithoutUserInteractionForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)provideCredentialWithoutUserInteractionForRequest:(id <ASCredentialRequest>)arg1;

@end
