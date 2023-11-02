
@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam {
    PKPeerPaymentTransactionMetadata * _peerPaymentTransactionMetadata;
}

@property (nonatomic, retain) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;

+ (id)paramWithPeerPaymentTransactionMetadata:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)peerPaymentTransactionMetadata;
- (void)setPeerPaymentTransactionMetadata:(id)arg1;

@end
