
@interface AMSKeychain : NSObject

+ (id)_certificatePrivateKeyLabelForOptions:(id)arg1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id*)arg2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id*)arg2;
+ (void)_deleteResumptionHeaders;
+ (id)_extendedConstraintsWithOptions:(id)arg1;
+ (bool)_generateLegacyKeypairForOptions:(id)arg1 error:(id*)arg2;
+ (id)_legacyAttestationForOptions:(id)arg1 error:(id*)arg2;
+ (id)_primaryConstraints;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraintsForReality;
+ (id)_primaryConstraintsForWatch;
+ (id)_primaryConstraintsWithOptions:(id)arg1;
+ (id)_resumptionHeadersQuery;
+ (id)_ssCertificateKeychainLabelForAccount:(id)arg1 options:(id)arg2;
+ (id)_ssKeychainLabelForAccount:(id)arg1 options:(id)arg2;
+ (id)certificateChainStringsForOptions:(id)arg1 error:(id*)arg2;
+ (id)certificateKeychainLabelsForOptions:(id)arg1;
+ (struct __SecAccessControl { }*)copyAccessControlRefWithAccount:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyCertificatePrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPublicKeyForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPublicKeyForOptions:(id)arg1 error:(id*)arg2;
+ (struct __SecAccessControl { }*)createAccessControlRefWithOptions:(id)arg1 error:(id*)arg2;
+ (bool)deleteCertificateChainWithOptions:(id)arg1 error:(id*)arg2;
+ (bool)deleteKeyPairWithOptions:(id)arg1 error:(id*)arg2;
+ (id)keychainLabelForOptions:(id)arg1;
+ (id)legacyAttestationForOptions:(id)arg1 error:(id*)arg2;
+ (bool)performForwardKeyMigrationForDSID:(id)arg1 forceMigration:(bool)arg2;
+ (id)publicKeyHeaderWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3;
+ (id)resumptionHeaders;
+ (int (*)secItemAddFunc;
+ (int (*)secItemCopyMatchingFunc;
+ (void)setSecItemAddFunc:(int (*)arg1;
+ (void)setSecItemCopyMatchingFunc:(int (*)arg1;
+ (void)stashResumptionHeaders:(id)arg1;
+ (bool)stashResumptionHeaders:(id)arg1 error:(id*)arg2;
+ (bool)storePrimaryCert:(struct __SecCertificate { }*)arg1 intermediateCert:(struct __SecCertificate { }*)arg2 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3 options:(id)arg4 error:(id*)arg5;

@end
