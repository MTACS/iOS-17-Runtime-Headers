
@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest {
    unsigned long long  _nonceType;
}

@property (nonatomic) unsigned long long nonceType;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithNonceType:(unsigned long long)arg1;
- (unsigned long long)nonceType;
- (void)setNonceType:(unsigned long long)arg1;

@end
