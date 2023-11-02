
@interface PKVPANNonceResponse : PKPaymentWebServiceResponse {
    NSString * _nonce;
}

@property (nonatomic, readonly, copy) NSString *nonce;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)nonce;

@end
