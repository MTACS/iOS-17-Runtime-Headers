
@interface POAssertionTokenJWT : POJWT {
    POAssertionJWTBody * _decodedBody;
}

@property (retain) POAssertionJWTBody *decodedBody;

- (void).cxx_destruct;
- (bool)decodeAndDecryptUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 apvString:(id)arg2;
- (id)decodedBody;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)mutableCopy;
- (void)setDecodedBody:(id)arg1;

@end
