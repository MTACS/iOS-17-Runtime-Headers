
@interface WFShortcutSigningCertificate : NSObject {
    struct __SecCertificate { } * _certificate;
    NSDate * _expirationDate;
}

@property (nonatomic) struct __SecCertificate { }*certificate;
@property (nonatomic, readonly) NSString *commonName;
@property (nonatomic, readonly) NSDate *expirationDate;

- (void).cxx_destruct;
- (struct __SecCertificate { }*)certificate;
- (id)commonName;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPublicKey;
- (void)dealloc;
- (id)expirationDate;
- (id)generateAuthData;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1;
- (id)initWithCertificateData:(id)arg1;
- (void)setCertificate:(struct __SecCertificate { }*)arg1;

@end
