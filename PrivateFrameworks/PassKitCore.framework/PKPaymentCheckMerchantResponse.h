
@interface PKPaymentCheckMerchantResponse : PKPaymentWebServiceResponse {
    bool  _isRegistered;
}

@property (nonatomic, readonly) bool isRegistered;

- (id)initWithData:(id)arg1;
- (bool)isRegistered;

@end
