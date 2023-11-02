
@interface PKPaymentAuthorizationRequest : NSObject {
    NSData * _credential;
    NSData * _nonceData;
    PKPaymentRequest * _paymentRequest;
}

@property (nonatomic, retain) NSData *credential;
@property (nonatomic, retain) NSData *nonceData;
@property (nonatomic, readonly) PKPaymentRequest *paymentRequest;

- (void).cxx_destruct;
- (id)credential;
- (id)initWithPaymentRequest:(id)arg1;
- (id)nonceData;
- (id)paymentRequest;
- (void)setCredential:(id)arg1;
- (void)setNonceData:(id)arg1;

@end
