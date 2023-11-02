
@interface WLAuthenticationCredentials : NSObject {
    struct __SecCertificate { } * _localCertificate;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _privateKey;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _publicKey;
    struct __SecCertificate { } * _remoteCertificate;
}

@property (nonatomic) struct __SecCertificate { }*localCertificate;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*privateKey;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*publicKey;
@property (nonatomic) struct __SecCertificate { }*remoteCertificate;

+ (id)generateAuthenticationCredentialsContainingSelfSignedCertificate;

- (struct __SecCertificate { }*)localCertificate;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)privateKey;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)publicKey;
- (struct __SecCertificate { }*)remoteCertificate;
- (void)setLocalCertificate:(struct __SecCertificate { }*)arg1;
- (void)setPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setRemoteCertificate:(struct __SecCertificate { }*)arg1;

@end
