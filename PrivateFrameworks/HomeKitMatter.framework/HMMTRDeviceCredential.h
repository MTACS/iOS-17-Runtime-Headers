
@interface HMMTRDeviceCredential : NSObject {
    NSData * _certificationDeclaration;
    NSData * _deviceAttestationCertificate;
    NSData * _productAttestationIntermediateCertificate;
}

@property (nonatomic, readonly) NSData *certificationDeclaration;
@property (nonatomic, readonly) NSData *deviceAttestationCertificate;
@property (nonatomic, readonly) NSData *productAttestationIntermediateCertificate;

- (void).cxx_destruct;
- (id)certificationDeclaration;
- (id)deviceAttestationCertificate;
- (id)initWithCertificationDeclaration:(id)arg1 deviceAttestationCertificate:(id)arg2 productAttestationIntermediateCertificate:(id)arg3;
- (id)productAttestationIntermediateCertificate;

@end
