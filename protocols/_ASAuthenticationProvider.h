
@protocol _ASAuthenticationProvider <NSObject>

@required

- (<_ASAuthenticationProviderLoginRowData> *)loginRowData;
- (void)performAuthorizationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*
- (<_ASAuthenticationPresentationProvider> *)presentationProvider;
- (void)setPresentationProvider:(id <_ASAuthenticationPresentationProvider>)arg1;

@end
