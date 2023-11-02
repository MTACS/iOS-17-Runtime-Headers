
@interface PKVPANPaymentSessionRequest : PKPaymentWebServiceRequest {
    NSString * _deviceIdentifier;
}

@property (nonatomic, readonly, copy) NSString *deviceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)deviceIdentifier;
- (id)initWithDeviceIdentifier:(id)arg1;

@end
