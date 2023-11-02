
@interface PKPaymentAugmentBaseResponse : PKPaymentWebServiceResponse {
    long long  _cryptogramType;
    NSData * _networkMerchantIdentifier;
}

@property (nonatomic, readonly) long long cryptogramType;
@property (nonatomic, readonly, copy) NSData *networkMerchantIdentifier;

- (void).cxx_destruct;
- (long long)cryptogramType;
- (id)initWithData:(id)arg1;
- (id)networkMerchantIdentifier;

@end
