
@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
