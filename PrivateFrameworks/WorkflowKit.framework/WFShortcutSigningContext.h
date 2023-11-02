
@interface WFShortcutSigningContext : NSObject {
    NSArray * _appleIDCertificateChain;
    SFAppleIDValidationRecord * _appleIDValidationRecord;
    NSDate * _expirationDate;
    NSArray * _signingCertificateChain;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _signingPublicKey;
    NSData * _signingPublicKeySignature;
}

@property (nonatomic, readonly, copy) NSArray *appleIDCertificateChain;
@property (nonatomic, readonly) SFAppleIDValidationRecord *appleIDValidationRecord;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSArray *signingCertificateChain;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*signingPublicKey;
@property (nonatomic, retain) NSData *signingPublicKeySignature;

+ (id)contextWithAppleIDAccount:(id)arg1 signingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2;
+ (id)contextWithAuthData:(id)arg1;
+ (id)contextWithSigningCertificateChain:(id)arg1;

- (void).cxx_destruct;
- (id)appleIDCertificateChain;
- (id)appleIDValidationRecord;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPublicKey;
- (void)dealloc;
- (id)expirationDate;
- (id)generateAuthData;
- (id)initWithAppleIDValidationRecord:(id)arg1 appleIDCertificateChain:(id)arg2 signingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3 signingPublicKeyData:(id)arg4;
- (id)initWithSigningCertificateChain:(id)arg1;
- (void)setSigningPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (void)setSigningPublicKeySignature:(id)arg1;
- (id)signingCertificateChain;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)signingPublicKey;
- (id)signingPublicKeySignature;
- (bool)validateAppleIDCertificatesWithError:(id*)arg1;
- (void)validateAppleIDValidationRecordWithCompletion:(id /* block */)arg1;
- (bool)validateSigningCertificateChainWithICloudIdentifier:(id*)arg1 error:(id*)arg2;
- (void)validateWithCompletion:(id /* block */)arg1;
- (bool)validateWithSigningMethod:(long long*)arg1 error:(id*)arg2;
- (bool)validateWithSigningMethod:(long long*)arg1 iCloudIdentifier:(id*)arg2 error:(id*)arg3;

@end
