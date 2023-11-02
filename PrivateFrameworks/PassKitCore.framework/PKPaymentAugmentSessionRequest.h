
@interface PKPaymentAugmentSessionRequest : PKPaymentAugmentBaseRequest {
    PKPaymentMerchantSession * _merchantSession;
}

@property (nonatomic, retain) PKPaymentMerchantSession *merchantSession;

+ (id)augmentSessionRequestWithBaseRequest:(id)arg1;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)endpointComponents;
- (id)merchantSession;
- (void)setMerchantSession:(id)arg1;

@end
