
@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest {
    NSString * _productIdentifier;
    NSString * _provisioningMethod;
}

@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSString *provisioningMethod;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2;
- (id)productIdentifier;
- (id)provisioningMethod;
- (void)setProductIdentifier:(id)arg1;
- (void)setProvisioningMethod:(id)arg1;

@end
