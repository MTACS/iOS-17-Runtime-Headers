
@interface PKPeerPaymentAccountResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentAccount * _account;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)initWithData:(id)arg1;

@end
