
@interface MCCrypto : NSObject

+ (id)_decryptionFailedErrorWithUnderlyingError:(id)arg1;
+ (void)clearStoredActivationLockBypassCode;
+ (void)clearStoredActivationLockHash;
+ (struct __SecCertificate { }*)copyCertificateRefFromPEMData:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateRefFromPKCS1Data:(id)arg1;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)arg1 outRawBytes:(char *)arg2 outHash:(char *)arg3;
+ (bool)isValidPKCS12Data:(id)arg1;
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate {}**)arg2 outError:(id*)arg3;
+ (id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2;
+ (id)storedActivationLockBypassCodeHash;
+ (id)storedActivationLockBypassCodeWithOutError:(id*)arg1;

@end
