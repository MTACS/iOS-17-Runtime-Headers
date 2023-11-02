
@interface CertOperations : NSObject

+ (id)certVersion:(struct __SecCertificate { }*)arg1;
+ (void)fetchTermsWithAltDSID:(id)arg1 reply:(id /* block */)arg2;
+ (id)knownICDPFederations;
+ (bool)moveToFederationAllowed:(id)arg1 altDSID:(id)arg2;
+ (id)rootBaseVersionsForRootType:(unsigned int)arg1 altDSID:(id)arg2 inEnvironment:(id)arg3 duplicate:(bool)arg4;
+ (id)rootCurrentVersionForRootType:(unsigned int)arg1 altDSID:(id)arg2 inEnvironment:(id)arg3;
+ (id)rootTrustedVersionsForRootType:(unsigned int)arg1 altDSID:(id)arg2 inEnvironment:(id)arg3 duplicate:(bool)arg4;
+ (void)storeTerms:(id)arg1 withAltDSID:(id)arg2 reply:(id /* block */)arg3;
+ (bool)verifyCertData:(id)arg1 withCert:(struct __SecCertificate {}**)arg2 withPubKey:(struct __SecKey {}**)arg3 stingray:(bool)arg4 enroll:(bool)arg5 altDSID:(id)arg6 env:(id)arg7 duplicate:(bool)arg8 sigVerification:(bool)arg9 error:(id*)arg10;

@end
