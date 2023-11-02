
@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {
    NSURL * _learnMoreURL;
    NSString * _nonce;
    NSArray * _possibleProducts;
    NSString * _productIdentifier;
    NSString * _region;
    NSArray * _requiredPaymentSetupFields;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSURL *learnMoreURL;
@property (nonatomic, readonly, copy) NSString *nonce;
@property (nonatomic, readonly, copy) NSArray *possibleProducts;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, readonly, copy) NSString *region;
@property (nonatomic, readonly, copy) NSArray *requiredPaymentSetupFields;
@property (nonatomic, readonly) long long status;

+ (id)emptyRequirementsResponse;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 headers:(id)arg2;
- (id)initWithProduct:(id)arg1;
- (id)initWithProvisioningMethodMetadata:(id)arg1;
- (id)learnMoreURL;
- (id)nonce;
- (id)possibleProducts;
- (id)productIdentifier;
- (id)region;
- (id)requiredPaymentSetupFields;
- (long long)status;

@end
