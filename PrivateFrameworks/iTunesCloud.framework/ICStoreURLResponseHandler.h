
@interface ICStoreURLResponseHandler : ICURLResponseHandler

+ (void)_updateDefaultStorefrontIdentifier:(id)arg1 usingIdentityStore:(id)arg2;

- (bool)_isAuthenticationError:(id)arg1;
- (void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
