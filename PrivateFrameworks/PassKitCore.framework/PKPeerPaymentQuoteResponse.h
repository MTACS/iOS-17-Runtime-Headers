
@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentQuote * _quote;
}

@property (nonatomic, readonly) PKPeerPaymentQuote *quote;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 productTimeZone:(id)arg2;
- (id)quote;

@end
