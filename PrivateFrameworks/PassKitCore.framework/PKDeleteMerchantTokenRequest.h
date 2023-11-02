
@interface PKDeleteMerchantTokenRequest : PKPaymentWebServiceRequest {
    NSString * _merchantTokenId;
}

@property (nonatomic, copy) NSString *merchantTokenId;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)merchantTokenId;
- (void)setMerchantTokenId:(id)arg1;

@end
