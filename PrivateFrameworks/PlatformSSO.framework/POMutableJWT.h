
@interface POMutableJWT : POJWT {
    <POMutableJWTBody> * _body;
    POMutableJWTHeader * _header;
}

@property (retain) <POMutableJWTBody> *body;
@property (retain) POMutableJWTHeader *header;

- (void).cxx_destruct;
- (id)body;
- (id)encodeAndEncryptUsingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (id)encodeAndEncryptUsingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 partyVInfo:(id)arg2;
- (id)encodeAndSignUsingAlgorithm:(id)arg1 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2 certificate:(struct __SecCertificate { }*)arg3;
- (id)header;
- (bool)isJWE;
- (void)setBody:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setHeader:(id)arg1;

@end
