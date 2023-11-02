
@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest {
    NSDictionary * _deviceOwnedKeyMaterials;
    NSArray * _dpanIdentifiers;
    NSData * _signatureData;
    PKSecureElementSignatureInfo * _signatureInfo;
    NSArray * _validCertificatesOnDevice;
}

@property (nonatomic, copy) NSDictionary *deviceOwnedKeyMaterials;
@property (nonatomic, copy) NSArray *dpanIdentifiers;
@property (nonatomic, copy) NSData *signatureData;
@property (nonatomic, retain) PKSecureElementSignatureInfo *signatureInfo;
@property (nonatomic, copy) NSArray *validCertificatesOnDevice;

- (void).cxx_destruct;
- (id)_dataToSign;
- (id)_groupedKeyMaterial;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)deviceOwnedKeyMaterials;
- (id)dpanIdentifiers;
- (void)setDeviceOwnedKeyMaterials:(id)arg1;
- (void)setDpanIdentifiers:(id)arg1;
- (void)setSignatureData:(id)arg1;
- (void)setSignatureInfo:(id)arg1;
- (void)setValidCertificatesOnDevice:(id)arg1;
- (id)signatureData;
- (id)signatureInfo;
- (id)validCertificatesOnDevice;

@end
