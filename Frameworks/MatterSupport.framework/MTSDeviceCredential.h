
@interface MTSDeviceCredential : NSObject <NSCopying, NSSecureCoding> {
    NSData * _certificationDeclaration;
    NSData * _deviceAttestationCertificate;
    NSData * _productAttestationIntermediateCertificate;
}

@property (readonly, copy) NSData *certificationDeclaration;
@property (readonly, copy) NSData *deviceAttestationCertificate;
@property (readonly, copy) NSData *productAttestationIntermediateCertificate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificationDeclaration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceAttestationCertificate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCertificationDeclaration:(id)arg1 deviceAttestationCertificate:(id)arg2 productAttestationIntermediateCertificate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productAttestationIntermediateCertificate;

@end
