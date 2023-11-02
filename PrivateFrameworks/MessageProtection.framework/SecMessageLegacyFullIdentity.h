
@interface SecMessageLegacyFullIdentity : NSObject {
    SecKeyRSAPrivate * _encryptionKey;
    NSData * _encryptionKeyPersistentRef;
    bool  _isMigratedV2Key;
    LegacySigningKeyPrivate * _signingKey;
    NSData * _signingKeyPersistentRef;
}

@property (nonatomic, retain) SecKeyRSAPrivate *encryptionKey;
@property (nonatomic, retain) NSData *encryptionKeyPersistentRef;
@property (nonatomic) bool isMigratedV2Key;
@property (nonatomic, retain) LegacySigningKeyPrivate *signingKey;
@property (nonatomic, retain) NSData *signingKeyPersistentRef;

+ (id)identity;
+ (id)identityFromV2Bytes:(const char **)arg1 size:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)populateIdentity:(id)arg1 withEncryptionKeyFromPersistentRef:(const char **)arg2 size:(unsigned long long*)arg3;
+ (id)populateIdentity:(id)arg1 withSigningKeyFromPersistentRef:(const char **)arg2 size:(unsigned long long*)arg3;

- (void).cxx_destruct;
- (struct _SecMPFullIdentity { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKey {} *x2; struct __SecKey {} *x3; struct __SecKey {} *x4; struct __SecKey {} *x5; id x6; }*)asRef;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)decryptMessage:(id)arg1 error:(id*)arg2;
- (void)deleteItemWithPersistentRef:(id)arg1;
- (void)deleteMigratedKeys;
- (id)encryptionKey;
- (id)encryptionKeyPersistentRef;
- (unsigned long long)encryptionSize;
- (id)initWithEncryptionKey:(id)arg1 signingKey:(id)arg2;
- (id)initWithEncryptionKeyData:(id)arg1 signingKeyData:(id)arg2;
- (id)initWithEncryptionSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 signingSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2;
- (id)initWithProtobufData:(id)arg1;
- (bool)isMigratedV2Key;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)privateSigningKeyForTerminusMigration;
- (id)publicIdentity;
- (void)setEncryptionKey:(id)arg1;
- (void)setEncryptionKeyPersistentRef:(id)arg1;
- (void)setIsMigratedV2Key:(bool)arg1;
- (void)setSigningKey:(id)arg1;
- (void)setSigningKeyPersistentRef:(id)arg1;
- (id)signData:(id)arg1 error:(id*)arg2;
- (id)signingKey;
- (id)signingKeyPersistentRef;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3;

@end
