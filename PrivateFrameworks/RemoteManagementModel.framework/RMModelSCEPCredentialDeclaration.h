
@interface RMModelSCEPCredentialDeclaration : RMModelPayloadBase {
    NSData * _payloadCAFingerprint;
    NSString * _payloadChallenge;
    NSString * _payloadKeyType;
    NSNumber * _payloadKeyUsage;
    NSNumber * _payloadKeysize;
    NSString * _payloadName;
    NSNumber * _payloadRetries;
    NSNumber * _payloadRetryDelay;
    NSArray * _payloadSubject;
    RMModelSCEPCredentialDeclaration_SubjectAltName * _payloadSubjectAltName;
    NSString * _payloadURL;
}

@property (nonatomic, copy) NSData *payloadCAFingerprint;
@property (nonatomic, copy) NSString *payloadChallenge;
@property (nonatomic, copy) NSString *payloadKeyType;
@property (nonatomic, copy) NSNumber *payloadKeyUsage;
@property (nonatomic, copy) NSNumber *payloadKeysize;
@property (nonatomic, copy) NSString *payloadName;
@property (nonatomic, copy) NSNumber *payloadRetries;
@property (nonatomic, copy) NSNumber *payloadRetryDelay;
@property (nonatomic, copy) NSArray *payloadSubject;
@property (nonatomic, copy) RMModelSCEPCredentialDeclaration_SubjectAltName *payloadSubjectAltName;
@property (nonatomic, copy) NSString *payloadURL;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithURL:(id)arg1;
+ (id)buildWithURL:(id)arg1 name:(id)arg2 subject:(id)arg3 challenge:(id)arg4 keysize:(id)arg5 keyType:(id)arg6 keyUsage:(id)arg7 caFingerprint:(id)arg8 retries:(id)arg9 retryDelay:(id)arg10 subjectAltName:(id)arg11;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadCAFingerprint;
- (id)payloadChallenge;
- (id)payloadKeyType;
- (id)payloadKeyUsage;
- (id)payloadKeysize;
- (id)payloadName;
- (id)payloadRetries;
- (id)payloadRetryDelay;
- (id)payloadSubject;
- (id)payloadSubjectAltName;
- (id)payloadURL;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadCAFingerprint:(id)arg1;
- (void)setPayloadChallenge:(id)arg1;
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
