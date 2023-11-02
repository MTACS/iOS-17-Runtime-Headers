
@interface MTRDeviceAttestationInfo : NSObject {
    NSData * _certificationDeclaration;
    NSData * _challenge;
    NSData * _deviceAttestationCertificate;
    NSData * _elementsSignature;
    NSData * _elementsTLV;
    NSData * _firmwareInfo;
    NSData * _nonce;
    NSData * _productAttestationIntermediateCertificate;
}

@property (nonatomic, readonly, copy) NSData *certificationDeclaration;
@property (nonatomic, readonly, copy) NSData *challenge;
@property (nonatomic, readonly, copy) NSData *deviceAttestationCertificate;
@property (nonatomic, readonly, copy) NSData *elementsSignature;
@property (nonatomic, readonly, copy) NSData *elementsTLV;
@property (nonatomic, readonly, copy) NSData *firmwareInfo;
@property (nonatomic, readonly, copy) NSData *nonce;
@property (nonatomic, readonly, copy) NSData *productAttestationIntermediateCertificate;

- (void).cxx_destruct;
- (id)certificationDeclaration;
- (id)challenge;
- (id)deviceAttestationCertificate;
- (id)elementsSignature;
- (id)elementsTLV;
- (id)firmwareInfo;
- (id)initWithDeviceAttestationChallenge:(id)arg1 nonce:(id)arg2 elementsTLV:(id)arg3 elementsSignature:(id)arg4 deviceAttestationCertificate:(id)arg5 productAttestationIntermediateCertificate:(id)arg6 certificationDeclaration:(id)arg7 firmwareInfo:(id)arg8;
- (id)nonce;
- (id)productAttestationIntermediateCertificate;

@end
