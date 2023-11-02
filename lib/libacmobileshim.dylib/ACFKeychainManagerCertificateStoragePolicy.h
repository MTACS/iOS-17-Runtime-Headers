
@interface ACFKeychainManagerCertificateStoragePolicy : NSObject <ACFCertificateStoragePolicy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __SecCertificate { }*)certificateWithLabel:(id)arg1 realm:(id)arg2;
- (id)keychainManager;
- (bool)removeCertificateWithLabel:(id)arg1 realm:(id)arg2;
- (bool)storeCertificate:(struct __SecCertificate { }*)arg1 realm:(id)arg2;

@end
