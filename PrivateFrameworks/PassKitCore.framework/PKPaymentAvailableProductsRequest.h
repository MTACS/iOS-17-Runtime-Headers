
@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest {
    long long  _context;
    NSString * _preferredLanguage;
}

@property (nonatomic) long long context;
@property (nonatomic, readonly, copy) NSString *preferredLanguage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (long long)context;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredLanguage:(id)arg1;
- (id)preferredLanguage;
- (void)setContext:(long long)arg1;

@end
