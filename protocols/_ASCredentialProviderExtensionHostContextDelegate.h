
@protocol _ASCredentialProviderExtensionHostContextDelegate <_ASExtensionHostContextDelegate>

@optional

- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: _ASCredentialProviderExtensionHostContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteRequestWithHostContext:(void *)arg1 credential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASCredentialProviderExtensionHostContext *, ASPasswordCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteRequestWithHostContext:(void *)arg1 passkeyAssertionCredential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASCredentialProviderExtensionHostContext *, ASPasskeyAssertionCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteRequestWithHostContext:(void *)arg1 passkeyRegistrationCredential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASCredentialProviderExtensionHostContext *, ASPasskeyRegistrationCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
