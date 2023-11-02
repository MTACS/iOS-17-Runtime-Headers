
@interface MTRCertificates : NSObject

// Image: /System/Library/Frameworks/Matter.framework/Matter

+ (id)convertMatterCertificate:(id)arg1;
+ (id)convertX509Certificate:(id)arg1;
+ (id)createCertificateSigningRequest:(id)arg1 error:(id*)arg2;
+ (id)createIntermediateCertificate:(id)arg1 rootCertificate:(id)arg2 intermediatePublicKey:(struct __SecKey { }*)arg3 issuerID:(id)arg4 fabricID:(id)arg5 error:(id*)arg6;
+ (id)createIntermediateCertificate:(id)arg1 rootCertificate:(id)arg2 intermediatePublicKey:(struct __SecKey { }*)arg3 issuerID:(id)arg4 fabricID:(id)arg5 validityPeriod:(id)arg6 error:(id*)arg7;
+ (id)createOperationalCertificate:(id)arg1 signingCertificate:(id)arg2 operationalPublicKey:(struct __SecKey { }*)arg3 fabricID:(id)arg4 nodeID:(id)arg5 caseAuthenticatedTags:(id)arg6 error:(id*)arg7;
+ (id)createOperationalCertificate:(id)arg1 signingCertificate:(id)arg2 operationalPublicKey:(struct __SecKey { }*)arg3 fabricID:(id)arg4 nodeID:(id)arg5 caseAuthenticatedTags:(id)arg6 validityPeriod:(id)arg7 error:(id*)arg8;
+ (id)createRootCertificate:(id)arg1 issuerID:(id)arg2 fabricID:(id)arg3 error:(id*)arg4;
+ (id)createRootCertificate:(id)arg1 issuerID:(id)arg2 fabricID:(id)arg3 validityPeriod:(id)arg4 error:(id*)arg5;
+ (id)generateCertificateSigningRequest:(id)arg1 error:(id*)arg2;
+ (id)generateIntermediateCertificate:(id)arg1 rootCertificate:(id)arg2 intermediatePublicKey:(struct __SecKey { }*)arg3 issuerId:(id)arg4 fabricId:(id)arg5 error:(id*)arg6;
+ (id)generateOperationalCertificate:(id)arg1 signingCertificate:(id)arg2 operationalPublicKey:(struct __SecKey { }*)arg3 fabricId:(id)arg4 nodeId:(id)arg5 caseAuthenticatedTags:(id)arg6 error:(id*)arg7;
+ (id)generateRootCertificate:(id)arg1 issuerId:(id)arg2 fabricId:(id)arg3 error:(id*)arg4;
+ (void)initialize;
+ (bool)isCertificate:(id)arg1 equalTo:(id)arg2;
+ (bool)keypair:(id)arg1 matchesCertificate:(id)arg2;
+ (id)publicKeyFromCSR:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter

+ (void)printMatterCertificate:(id)arg1;
+ (void)printX509Certificate:(id)arg1;

@end
