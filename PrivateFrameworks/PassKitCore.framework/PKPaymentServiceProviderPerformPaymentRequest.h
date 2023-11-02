
@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest {
    PKSecureElementCertificateSet * _certificates;
    long long  _cryptogramType;
    NSData * _nonce;
    PKPaymentPass * _pass;
    PKServiceProviderOrder * _serviceProviderOrder;
    NSString * _targetDeviceSerialNumber;
}

@property (nonatomic) long long cryptogramType;
@property (nonatomic, copy) NSData *nonce;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKServiceProviderOrder *serviceProviderOrder;
@property (nonatomic, copy) NSString *targetDeviceSerialNumber;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(id /* block */)arg5;
- (long long)cryptogramType;
- (id)nonce;
- (id)pass;
- (id)serviceProviderOrder;
- (void)setCryptogramType:(long long)arg1;
- (void)setNonce:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setServiceProviderOrder:(id)arg1;
- (void)setTargetDeviceSerialNumber:(id)arg1;
- (id)targetDeviceSerialNumber;

@end
