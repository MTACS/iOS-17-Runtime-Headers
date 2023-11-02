
@interface SecMessageLegacyPublicIdentity : NSObject {
    SecKeyRSAPublic * _encryptionKey;
    LegacySigningKeyPublic * _signingKey;
}

@property (nonatomic, readonly) SecKeyRSAPublic *encryptionKey;
@property (nonatomic, readonly) LegacySigningKeyPublic *signingKey;

+ (id)identityWithIdentityData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (struct _SecMPPublicIdentity { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKey {} *x2; struct __SecKey {} *x3; id x4; }*)asRef;
- (id)encryptData:(id)arg1;
- (id)encryptionKey;
- (unsigned long long)encryptionSize;
- (id)identityData;
- (id)initWithEncryptionKey:(id)arg1 signingKey:(id)arg2;
- (id)publicIDCanonicalHash;
- (id)publicIDHash;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)publicSigningKeyForTerminusMigration;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3;
- (id)signingKey;
- (bool)verifySignature:(id)arg1 ofData:(id)arg2;

@end
