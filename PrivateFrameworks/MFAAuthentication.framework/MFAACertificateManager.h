
@interface MFAACertificateManager : NSObject {
    NSUserDefaults * _userDefaults;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)_anchorCertificatesDataForTypes:(int)arg1;
+ (int)_anchorType2CertType:(int)arg1;
+ (id)anchorCertificatesForTypes:(int)arg1;
+ (bool)isBAAUserCertInfo:(id)arg1;
+ (bool)isBAAUserPolicy:(unsigned long long)arg1;
+ (bool)isComponentCertInfo:(id)arg1;
+ (bool)isComponentPolicy:(unsigned long long)arg1;
+ (bool)isMFi2_3CertInfo:(id)arg1;
+ (bool)isMFi2_3Policy:(unsigned long long)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_getAnchorCertsForPolicy:(unsigned long long)arg1;
- (int)_getCachedCertStatus:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3;
- (id)_init;
- (int)_validateBAACertificateChain:(id)arg1 error:(id*)arg2;
- (int)_validateCertificateChain:(id)arg1 realtime:(bool)arg2 error:(id*)arg3;
- (int)_validateCertificateWithServer:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3 error:(id*)arg4;
- (int)_validateX509CertificateChain:(id)arg1 anchorCerts:(id)arg2 error:(id*)arg3;
- (int)authVersionFromCertificateChainInfo:(id)arg1;
- (id)copyCertificateSerialNumber:(id)arg1 authVer:(int)arg2;
- (id)copyEvaluatedCertificateChainInfo:(id)arg1;
- (id)copyEvaluatedCertificateChainInfo:(id)arg1 forSpecificType:(int)arg2;
- (id)copyLeafCertificateSerialNumber:(id)arg1;
- (id)copyParsedCertificateChainInfo:(id)arg1;
- (id)copyParsedCertificateChainInfo:(id)arg1 assumeType:(int)arg2;
- (id)copyParsedCertificateChainInfoFromCerts:(id)arg1 assumeType:(int)arg2;
- (id)createVeridianNonce:(id)arg1 withChallenge:(id)arg2;
- (id)init;
- (void)requestMetadataForCertificate:(id)arg1 requestedLocale:(id)arg2 requestInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setUserDefaults:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)userDefaults;
- (void)validateCertificate:(id)arg1 realtime:(bool)arg2 completionHandler:(id /* block */)arg3;
- (int)validateCertificate:(id)arg1 realtime:(bool)arg2 error:(id*)arg3;
- (int)validateCertificateChain:(id)arg1 realtime:(bool)arg2 error:(id*)arg3;
- (int)validateCertificateChain:(id)arg1 type:(int)arg2 realtime:(bool)arg3 error:(id*)arg4;
- (bool)verifyCertificateChainInfoSerialNumber:(id)arg1;
- (bool)verifyCertificateSerialNumber:(id)arg1 authVer:(int)arg2;
- (bool)verifyCertificateSerialNumberBySerialNumber:(id)arg1 authVer:(int)arg2;
- (bool)verifyNonceSignature:(id)arg1 nonce:(id)arg2 signature:(id)arg3;
- (id)xpcConnection;

@end
