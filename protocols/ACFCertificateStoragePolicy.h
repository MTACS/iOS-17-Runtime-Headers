
@protocol ACFCertificateStoragePolicy <NSObject>

@required

- (struct __SecCertificate { }*)certificateWithLabel:(NSString *)arg1 realm:(NSString *)arg2;
- (bool)removeCertificateWithLabel:(NSString *)arg1 realm:(NSString *)arg2;
- (bool)storeCertificate:(struct __SecCertificate { }*)arg1 realm:(NSString *)arg2;

@end
