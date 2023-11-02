
@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest {
    NSString * _domainName;
    NSString * _merchantIdentifier;
}

@property (nonatomic, copy) NSString *domainName;
@property (nonatomic, copy) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1;
- (id)domainName;
- (id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2;
- (id)merchantIdentifier;
- (void)setDomainName:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;

@end
