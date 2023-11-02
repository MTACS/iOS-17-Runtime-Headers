
@protocol _ASCredentialProviderExtensionHostContextProtocol <NSObject>

@required

- (void)prepareToCancelRequestWithError:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteAssertionRequestWithSelectedPasskeyCredential:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: ASPasskeyAssertionCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteRegistrationRequestWithSelectedPasskeyCredential:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: ASPasskeyRegistrationCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteRequestWithSelectedCredential:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: ASPasswordCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
