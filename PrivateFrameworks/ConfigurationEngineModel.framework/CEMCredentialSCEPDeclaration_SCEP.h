
@interface CEMCredentialSCEPDeclaration_SCEP : CEMPayloadBase {
    NSNumber * _payloadAllowAllAppsAccess;
    NSData * _payloadCAFingerprint;
    NSString * _payloadChallengeCredential;
    NSNumber * _payloadKeyIsExtractable;
    NSString * _payloadKeyType;
    NSNumber * _payloadKeyUsage;
    NSNumber * _payloadKeysize;
    NSString * _payloadName;
    NSNumber * _payloadRetries;
    NSNumber * _payloadRetryDelay;
    NSArray * _payloadSubject;
    CEMCredentialSCEPDeclaration_SCEPSubjectAltName * _payloadSubjectAltName;
    NSString * _payloadURL;
}

@property (nonatomic, copy) NSNumber *payloadAllowAllAppsAccess;
@property (nonatomic, copy) NSData *payloadCAFingerprint;
@property (nonatomic, copy) NSString *payloadChallengeCredential;
@property (nonatomic, copy) NSNumber *payloadKeyIsExtractable;
@property (nonatomic, copy) NSString *payloadKeyType;
@property (nonatomic, copy) NSNumber *payloadKeyUsage;
@property (nonatomic, copy) NSNumber *payloadKeysize;
@property (nonatomic, copy) NSString *payloadName;
@property (nonatomic, copy) NSNumber *payloadRetries;
@property (nonatomic, copy) NSNumber *payloadRetryDelay;
@property (nonatomic, copy) NSArray *payloadSubject;
@property (nonatomic, copy) CEMCredentialSCEPDeclaration_SCEPSubjectAltName *payloadSubjectAltName;
@property (nonatomic, copy) NSString *payloadURL;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithURL:(id)arg1;
+ (id)buildWithURL:(id)arg1 withName:(id)arg2 withSubject:(id)arg3 withKeysize:(id)arg4 withKeyType:(id)arg5 withKeyUsage:(id)arg6 withCAFingerprint:(id)arg7 withRetries:(id)arg8 withRetryDelay:(id)arg9 withSubjectAltName:(id)arg10 withKeyIsExtractable:(id)arg11 withChallengeCredential:(id)arg12 withAllowAllAppsAccess:(id)arg13;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllowAllAppsAccess;
- (id)payloadCAFingerprint;
- (id)payloadChallengeCredential;
- (id)payloadKeyIsExtractable;
- (id)payloadKeyType;
- (id)payloadKeyUsage;
- (id)payloadKeysize;
- (id)payloadName;
- (id)payloadRetries;
- (id)payloadRetryDelay;
- (id)payloadSubject;
- (id)payloadSubjectAltName;
- (id)payloadURL;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAllAppsAccess:(id)arg1;
- (void)setPayloadCAFingerprint:(id)arg1;
- (void)setPayloadChallengeCredential:(id)arg1;
- (void)setPayloadKeyIsExtractable:(id)arg1;
- (void)setPayloadKeyType:(id)arg1;
- (void)setPayloadKeyUsage:(id)arg1;
- (void)setPayloadKeysize:(id)arg1;
- (void)setPayloadName:(id)arg1;
- (void)setPayloadRetries:(id)arg1;
- (void)setPayloadRetryDelay:(id)arg1;
- (void)setPayloadSubject:(id)arg1;
- (void)setPayloadSubjectAltName:(id)arg1;
- (void)setPayloadURL:(id)arg1;

@end
