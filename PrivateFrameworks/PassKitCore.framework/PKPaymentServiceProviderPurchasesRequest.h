
@interface PKPaymentServiceProviderPurchasesRequest : PKPaymentWebServiceRequest {
    NSString * _actionIdentifier;
    NSString * _countryCode;
    NSString * _productIdentifier;
    NSString * _purchaseState;
    NSString * _serviceProviderIdentifier;
    NSString * _targetDeviceSerialNumber;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSString *purchaseState;
@property (nonatomic, copy) NSString *serviceProviderIdentifier;
@property (nonatomic, copy) NSString *targetDeviceSerialNumber;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)actionIdentifier;
- (id)countryCode;
- (id)initWithPurchaseState:(id)arg1 serviceProviderIdentifier:(id)arg2 productIdentifier:(id)arg3 actionIdentifier:(id)arg4 serviceProviderCountryCode:(id)arg5;
- (id)productIdentifier;
- (id)purchaseState;
- (id)serviceProviderIdentifier;
- (void)setActionIdentifier:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setPurchaseState:(id)arg1;
- (void)setServiceProviderIdentifier:(id)arg1;
- (void)setTargetDeviceSerialNumber:(id)arg1;
- (id)targetDeviceSerialNumber;

@end