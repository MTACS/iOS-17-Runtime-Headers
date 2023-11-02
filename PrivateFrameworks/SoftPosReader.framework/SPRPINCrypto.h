
@interface SPRPINCrypto : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _peerPublicKey;
}

+ (bool)verifySignature:(id)arg1 onRequest:(id)arg2 usingKey:(id)arg3 error:(id*)arg4;

- (void)dealloc;
- (id)encryptDigit:(unsigned char)arg1 error:(id*)arg2;
- (id)initWithAttestationData:(id)arg1 casdCertificate:(id)arg2 error:(id*)arg3;

@end
