
@interface PKPaymentNotifyIssuerAppletDirtyRequest : PKPaymentWebServiceRequest {
    NSString * _deviceAccountIdentifier;
    NSString * _passSerialNumber;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithPassSerialNumber:(id)arg1 deviceAccountIdentifier:(id)arg2;

@end
