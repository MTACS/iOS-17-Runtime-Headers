
@protocol CRKIdentity <CRKKeychainItem>

@required

- (<CRKCertificate> *)certificate;
- (<CRKPrivateKey> *)privateKey;
- (struct __SecIdentity { }*)underlyingIdentity;

@end
