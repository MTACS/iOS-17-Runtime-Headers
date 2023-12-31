
@interface PKPeerPaymentRequest : PKPaymentRequest {
    PKPeerPaymentQuote * _peerPaymentQuote;
}

@property (nonatomic, readonly) PKPeerPaymentQuote *peerPaymentQuote;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeerPaymentQuote:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)peerPaymentQuote;

@end
