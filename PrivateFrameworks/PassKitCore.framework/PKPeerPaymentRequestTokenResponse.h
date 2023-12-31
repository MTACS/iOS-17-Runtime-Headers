
@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentRequestToken * _requestToken;
    bool  _success;
}

@property (nonatomic, readonly) PKPeerPaymentRequestToken *requestToken;
@property (nonatomic, readonly) bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2;
- (id)requestToken;
- (bool)success;

@end
