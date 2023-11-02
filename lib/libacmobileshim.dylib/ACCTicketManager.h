
@interface ACCTicketManager : NSObject <ACCTicketManagerProtocol> {
    Class  _authContextClass;
    Class  _ssoTokenClass;
}

@property (nonatomic, retain) Class authContextClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class ssoTokenClass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ACCSSOTGTStoragePolicy> *tgtStoragePolicy;

- (Class)authContextClass;
- (id)authContextWithRequest:(id)arg1;
- (id)authContextWithRequest:(id)arg1 keyCode:(id)arg2 authenticationType:(id)arg3;
- (id)authContextWithRequest:(id)arg1 sessionToken:(id)arg2;
- (struct __SecCertificate { }*)certificateForRealm:(id)arg1;
- (struct __SecCertificate { }*)certificateFromString:(id)arg1;
- (id)certificateLabelForRealm:(id)arg1;
- (id)certificateStoragePolicy;
- (id)changePasswordContextWithRequest:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3;
- (unsigned long long)clientID;
- (id)createNonceString;
- (id)createSSOTokenWithContent:(id)arg1 context:(id)arg2;
- (id)cryptograph;
- (void)dealloc;
- (id)decryptEncryptedContent:(id)arg1 withHmac:(id)arg2 context:(id)arg3;
- (struct __SecCertificate { }*)defaultPublicKeyCertificateForRealm:(id)arg1;
- (id)defaultPublicKeyVersionForRealm:(id)arg1;
- (id)deviceIdentifier;
- (id)encryptSourceTokenWithSourceTokenData:(id)arg1 encryptionKey:(id)arg2 initializationVector:(id)arg3;
- (id)encryptionKeyWithRandomKey:(id)arg1;
- (id)envelopEncryptedSourceToken:(id)arg1 dsKeyVersion:(id)arg2 encryptedRandomKey:(id)arg3 initializationVector:(id)arg4 tokenDataHMAC:(id)arg5 tokenVersion:(id)arg6;
- (id)envelopeWithContext:(id)arg1;
- (id)envelopeWithContext:(id)arg1 publicKey:(struct __SecKey { }*)arg2;
- (id)fetchSSOTokenForPrincipal:(id)arg1;
- (id)fetchSSOTokenForPrincipal:(id)arg1 agedLessThan:(double)arg2;
- (bool)hasValidPublicKeyForRealm:(id)arg1;
- (id)identifier;
- (bool)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3;
- (id)prepareToken:(id)arg1 withTGTInfo:(id)arg2;
- (void)prepareTokenFor2SV:(id)arg1 withVerificationCode:(id)arg2 tgtInfo:(id)arg3;
- (struct __SecKey { }*)publicKeyForRealm:(id)arg1;
- (id)publicKeyVersionForRealm:(id)arg1;
- (id)serviceTicketPrefix;
- (id)serviceTicketStringWithRequest:(id)arg1 ssoToken:(id)arg2;
- (void)setAuthContextClass:(Class)arg1;
- (id)setPublicKeyWithCertificate:(struct __SecCertificate { }*)arg1 version:(id)arg2 forRealm:(id)arg3;
- (void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3;
- (void)setSsoTokenClass:(Class)arg1;
- (Class)ssoTokenClass;
- (bool)storeSSOToken:(id)arg1;
- (id)tgtStoragePolicy;
- (id)tokenDataHMACForRandomKey:(id)arg1 sourceTokenData:(id)arg2;
- (void)tokenDidReceive2SVSecret:(id)arg1;
- (id)tokenVersion;
- (id)twoSVCreateDateForPrincipal:(id)arg1;
- (id)twoSVPersonIDForPrincipal:(id)arg1;
- (id)twoSVSecretForPrincipal:(id)arg1;
- (void)uninstallPublicKeyForRealm:(id)arg1;
- (void)updateContextEncryptionHash:(id)arg1 withKeyCode:(id)arg2;
- (void)updateContextWithClientSecretIfAny:(id)arg1;

@end
