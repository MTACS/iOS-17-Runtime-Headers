
@interface SKAPresenceMembershipKey : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _privateKey;
}

@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*privateKey;
@property (nonatomic, readonly) NSData *privateKeyMaterial;
@property (nonatomic, readonly) NSData *publicKeyMaterial;

+ (id)logger;

- (bool)_generateKey;
- (bool)_generateKeyFromKeyData:(id)arg1;
- (void)dealloc;
- (id)initWithNewKeyMaterial;
- (id)initWithPrivateKeyMaterial:(id)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)privateKey;
- (id)privateKeyMaterial;
- (id)publicKeyMaterial;
- (void)setPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (id)signPayload:(id)arg1;

@end
