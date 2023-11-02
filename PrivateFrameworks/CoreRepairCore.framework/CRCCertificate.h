
@interface CRCCertificate : NSObject {
    long long  certifcateType;
    NSArray * certificates;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * referenceKey;
}

@property (nonatomic) long long certifcateType;
@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*referenceKey;

- (void).cxx_destruct;
- (long long)certifcateType;
- (id)certificates;
- (id)copyCertificatePEMWithError:(id*)arg1;
- (bool)evaluateTrustWithScrt:(bool)arg1 verifyIdentity:(bool)arg2 referenceDate:(id)arg3 error:(id*)arg4;
- (id)extractCAAAttestationOIDDataWithError:(id*)arg1;
- (id)extractRepairHistoryWithError:(id*)arg1;
- (id)init;
- (id)initWithRefKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 certificates:(id)arg2 certType:(long long)arg3;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)referenceKey;
- (void)setCertifcateType:(long long)arg1;
- (void)setCertificates:(id)arg1;
- (void)setReferenceKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;

@end
