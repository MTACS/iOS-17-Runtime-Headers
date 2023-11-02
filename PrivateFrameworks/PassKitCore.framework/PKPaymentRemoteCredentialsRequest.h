
@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {
    long long  _credentialType;
    bool  _excludeDeviceInfo;
    bool  _includeMetadata;
    NSString * _productIdentifier;
}

@property (nonatomic) long long credentialType;
@property (nonatomic) bool excludeDeviceInfo;
@property (nonatomic) bool includeMetadata;
@property (nonatomic, copy) NSString *productIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (long long)credentialType;
- (bool)excludeDeviceInfo;
- (bool)includeMetadata;
- (id)productIdentifier;
- (void)setCredentialType:(long long)arg1;
- (void)setExcludeDeviceInfo:(bool)arg1;
- (void)setIncludeMetadata:(bool)arg1;
- (void)setProductIdentifier:(id)arg1;

@end
