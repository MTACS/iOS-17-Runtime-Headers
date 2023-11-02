
@interface NFTrustPaymentSignResponse : NFTrustObject {
    NFECommercePaymentResponse * _paymentResponse;
    NFTrustSignResponse * _signResponse;
}

@property (nonatomic, retain) NFECommercePaymentResponse *paymentResponse;
@property (nonatomic, retain) NFTrustSignResponse *signResponse;

+ (id)paymentSignResponseWithSignResponse:(id)arg1 paymentResponse:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)paymentResponse;
- (void)setPaymentResponse:(id)arg1;
- (void)setSignResponse:(id)arg1;
- (id)signResponse;

@end
