
@interface PKSubcredentialProvisioningLocalDeviceConfiguration : PKSubcredentialProvisioningConfiguration {
    PKCredentialRegistrationMetadata * _registrationMetadata;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKCredentialRegistrationMetadata *registrationMetadata;
@property (nonatomic, readonly) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (id)initWithWebService:(id)arg1 registrationMetadata:(id)arg2 configurationType:(long long)arg3;
- (id)registrationMetadata;
- (id)webService;

@end
