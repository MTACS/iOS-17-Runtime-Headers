
@interface NFPeerPaymentSession : NFSession

- (id)deleteKey;
- (id)performPeerPayment:(id)arg1 request:(id)arg2;
- (id)performPeerPayment:(id)arg1 request:(id)arg2 error:(id*)arg3;

@end
