
@interface MIBUCertHelper : NSObject

+ (bool)SUCertPresent;
+ (id)_getCertDataFromPath:(id)arg1 error:(id*)arg2;
+ (id)_parseDERCertificates:(id)arg1 error:(id*)arg2;
+ (id)certificatesFromData:(id)arg1 error:(id*)arg2;
+ (void)deleteSUCert:(id*)arg1;
+ (void)readSUIdentityWithCompletion:(id /* block */)arg1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)suCertKeyFromData:(id)arg1 isSEPKey:(bool)arg2 error:(id*)arg3;
+ (void)trustCertificatesWithCompletion:(id /* block */)arg1;

@end
