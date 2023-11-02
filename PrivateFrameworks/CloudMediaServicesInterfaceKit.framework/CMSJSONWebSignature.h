
@interface CMSJSONWebSignature : NSObject {
    NSString * _keyID;
    NSData * _payload;
    NSError * _verificationError;
}

@property (nonatomic, readonly) NSString *keyID;
@property (nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) NSError *verificationError;

- (void).cxx_destruct;
- (id)_createASN1SignatureFromJWSSignature:(id)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_createPublicKeyFromPEM:(id)arg1;
- (bool)_validateJWSProtectedHeader:(id)arg1;
- (void)_validateJWSSignature:(id)arg1 ofHeader:(id)arg2 andPayload:(id)arg3 withPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg4;
- (id)initWithJWSCompactEncodedString:(id)arg1 keyID:(id)arg2 publicKey:(id)arg3;
- (id)keyID;
- (id)payload;
- (id)verificationError;

@end
