
@interface PKPeerPaymentSession : PKPaymentSession

- (id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3;
- (id)authorizePeerPaymentQuote:(id)arg1 forPaymentApplication:(id)arg2 withAuthenticationCredential:(id)arg3 shouldReregister:(bool*)arg4;
- (bool)deleteApplet;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;

@end
