
@interface PKPeerPaymentQuoteCertificatesRequest : PKPeerPaymentWebServiceRequest {
    unsigned long long  _destination;
}

@property (nonatomic) unsigned long long destination;

- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (unsigned long long)destination;
- (void)setDestination:(unsigned long long)arg1;

@end
