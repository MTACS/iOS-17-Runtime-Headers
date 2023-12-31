
@interface PKPeerPaymentQuoteCertificatesResponse : PKPeerPaymentWebServiceResponse {
    bool  _devSigned;
    NSArray * _encryptionCertificates;
    NSString * _encryptionVersion;
}

@property (nonatomic) bool devSigned;
@property (nonatomic, readonly, copy) NSArray *encryptionCertificates;
@property (nonatomic, readonly, copy) NSString *encryptionVersion;

- (void).cxx_destruct;
- (bool)devSigned;
- (id)encryptionCertificates;
- (id)encryptionVersion;
- (id)initWithData:(id)arg1;
- (void)setDevSigned:(bool)arg1;

@end
