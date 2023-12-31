
@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentRecipient * _recipient;
}

@property (nonatomic, readonly) PKPeerPaymentRecipient *recipient;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)recipient;

@end
