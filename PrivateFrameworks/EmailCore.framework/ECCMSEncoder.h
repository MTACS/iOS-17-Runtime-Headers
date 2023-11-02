
@interface ECCMSEncoder : NSObject

+ (id)encryptedDataFromContentData:(id)arg1 senderCertificate:(struct __SecCertificate { }*)arg2 senderCapabilities:(id)arg3 recipients:(id)arg4 outIsAuthenticated:(bool*)arg5 outError:(id*)arg6;
+ (id)oidStringForEncryptedSubject;
+ (id)oidStringsForAuthenticatedEncryption;
+ (id)oidsForEncryptWithGCM:(bool)arg1 encryptSubject:(bool)arg2;
+ (id)signatureDataFromNetworkContentData:(id)arg1 forSender:(id)arg2 identity:(struct __SecIdentity { }*)arg3 encryptionCertificate:(struct __SecCertificate { }*)arg4 capabilities:(id)arg5 outError:(id*)arg6;
+ (id)signedDataFromNetworkContentData:(id)arg1 forSender:(id)arg2 identity:(struct __SecIdentity { }*)arg3 encryptionCertificate:(struct __SecCertificate { }*)arg4 capabilities:(id)arg5 outError:(id*)arg6;

@end
