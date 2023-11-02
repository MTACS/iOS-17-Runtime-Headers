
@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest {
    struct __SecPolicy { } * _certificateTrustPolicy;
    NSDate * _expirationDateOverride;
    NSURL * _plistURL;
    bool  _requiresProtectionSource;
    CKPublicKey * _verifiedPublicKey;
    bool  _verifyFullIntegers;
}

@property (nonatomic, readonly) struct __SecPolicy { }*certificateTrustPolicy;
@property (nonatomic, retain) NSDate *expirationDateOverride;
@property (nonatomic, readonly) NSURL *plistURL;
@property (nonatomic) bool requiresProtectionSource;
@property (retain) CKPublicKey *verifiedPublicKey;
@property (nonatomic) bool verifyFullIntegers;

+ (id)certificateListServerPlist:(id)arg1;
+ (struct __SecTrust { }*)createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(struct __SecPolicy { }*)arg2;
+ (id)nearestExpirationInCertificateList:(id)arg1;
+ (bool)serverResponseIsComplete:(id)arg1 requireProtectionSource:(bool)arg2;
+ (bool)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3;
+ (bool)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3 verifyFullInteger:(bool)arg4;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (bool)canVerifySignedPlistValues:(id)arg1 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2;
- (struct __SecPolicy { }*)certificateTrustPolicy;
- (void)dealloc;
- (id)expirationDateOverride;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (bool)hasRequestBody;
- (id)httpMethod;
- (id)initWithOperation:(id)arg1 plistURL:(id)arg2 verifyWithPolicy:(struct __SecPolicy { }*)arg3;
- (long long)partitionType;
- (id)plistURL;
- (void)requestDidParsePlistObject:(id)arg1;
- (bool)requiresConfiguration;
- (bool)requiresDeviceID;
- (bool)requiresProtectionSource;
- (bool)requiresTokenRegistration;
- (long long)serverType;
- (void)setExpirationDateOverride:(id)arg1;
- (void)setRequiresProtectionSource:(bool)arg1;
- (void)setVerifiedPublicKey:(id)arg1;
- (void)setVerifyFullIntegers:(bool)arg1;
- (id)url;
- (id)verifiedPublicKey;
- (bool)verifyFullIntegers;

@end
