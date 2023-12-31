
@interface PKAMPCardInfoForMerchantRequest : PKPaymentWebServiceRequest {
    NSString * _merchantIdentifier;
}

@property (nonatomic, copy) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithMerchantIdentifier:(id)arg1;
- (id)merchantIdentifier;
- (void)setMerchantIdentifier:(id)arg1;

@end
