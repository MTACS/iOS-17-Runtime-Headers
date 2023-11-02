
@interface PKInAppPaymentSession : PKPaymentSession

- (id)_appletForPaymentApplication:(id)arg1;
- (id)_appletWithIdentifier:(id)arg1;
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4;
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 isFeatureNotSupportedError:(bool*)arg5;
- (id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 withAuthorizationParameters:(id)arg3;
- (id)authorizeWithRequest:(id)arg1 authorizationParameters:(id)arg2;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;

@end
