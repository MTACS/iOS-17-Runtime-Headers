
@interface PKApplePayTrustSession : PKPaymentSession

- (id)createKeyWithRequest:(id)arg1 error:(id*)arg2;
- (bool)deleteKeyWithIdentifier:(id)arg1;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (id)keyWithIdentifier:(id)arg1;
- (id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2;

@end
