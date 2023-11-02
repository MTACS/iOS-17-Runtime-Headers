
@interface PKAuxiliaryCapabilityFetchBarcodeRequest : PKAuxiliaryCapabilityWebServiceRequest {
    long long  _barcodeCount;
    NSString * _dpanIdentifier;
    NSArray * _encryptionCertificateChain;
    long long  _fetchReason;
    NSString * _lastUsedBarcodeIdentifier;
    NSData * _signatureData;
    PKSecureElementSignatureInfo * _signatureInfo;
}

@property (nonatomic) long long barcodeCount;
@property (nonatomic, copy) NSString *dpanIdentifier;
@property (nonatomic, copy) NSArray *encryptionCertificateChain;
@property (nonatomic) long long fetchReason;
@property (nonatomic, copy) NSString *lastUsedBarcodeIdentifier;
@property (nonatomic, copy) NSData *signatureData;
@property (nonatomic, retain) PKSecureElementSignatureInfo *signatureInfo;

- (void).cxx_destruct;
- (id)_dataToSign;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (long long)barcodeCount;
- (id)dpanIdentifier;
- (id)encryptionCertificateChain;
- (long long)fetchReason;
- (id)lastUsedBarcodeIdentifier;
- (void)setBarcodeCount:(long long)arg1;
- (void)setDpanIdentifier:(id)arg1;
- (void)setEncryptionCertificateChain:(id)arg1;
- (void)setFetchReason:(long long)arg1;
- (void)setLastUsedBarcodeIdentifier:(id)arg1;
- (void)setSignatureData:(id)arg1;
- (void)setSignatureInfo:(id)arg1;
- (id)signatureData;
- (id)signatureInfo;

@end
