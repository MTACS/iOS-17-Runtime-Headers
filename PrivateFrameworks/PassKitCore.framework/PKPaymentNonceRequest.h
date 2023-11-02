
@interface PKPaymentNonceRequest : PKPaymentAugmentBaseRequest {
    NSString * _merchantIdentifier;
    bool  _useLegacyGetAPI;
}

@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic) bool useLegacyGetAPI;

+ (id)nonceRequestWithBaseRequest:(id)arg1;

- (void).cxx_destruct;
- (id)_legacyGetURLRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)bodyDictionary;
- (id)endpointComponents;
- (id)merchantIdentifier;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setUseLegacyGetAPI:(bool)arg1;
- (bool)useLegacyGetAPI;

@end
