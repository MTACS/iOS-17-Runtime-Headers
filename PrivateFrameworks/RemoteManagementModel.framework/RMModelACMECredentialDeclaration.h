
@interface RMModelACMECredentialDeclaration : RMModelPayloadBase {
    NSNumber * _payloadAttest;
    NSString * _payloadClientIdentifier;
    NSString * _payloadDirectoryURL;
    NSArray * _payloadExtendedKeyUsage;
    NSNumber * _payloadHardwareBound;
    NSNumber * _payloadKeySize;
    NSString * _payloadKeyType;
    NSArray * _payloadSubject;
    RMModelACMECredentialDeclaration_SubjectAltName * _payloadSubjectAltName;
    NSNumber * _payloadUsageFlags;
}

@property (nonatomic, copy) NSNumber *payloadAttest;
@property (nonatomic, copy) NSString *payloadClientIdentifier;
@property (nonatomic, copy) NSString *payloadDirectoryURL;
@property (nonatomic, copy) NSArray *payloadExtendedKeyUsage;
@property (nonatomic, copy) NSNumber *payloadHardwareBound;
@property (nonatomic, copy) NSNumber *payloadKeySize;
@property (nonatomic, copy) NSString *payloadKeyType;
@property (nonatomic, copy) NSArray *payloadSubject;
@property (nonatomic, copy) RMModelACMECredentialDeclaration_SubjectAltName *payloadSubjectAltName;
@property (nonatomic, copy) NSNumber *payloadUsageFlags;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDirectoryURL:(id)arg1 clientIdentifier:(id)arg2 keySize:(id)arg3 keyType:(id)arg4 hardwareBound:(id)arg5 subject:(id)arg6;
+ (id)buildWithDirectoryURL:(id)arg1 clientIdentifier:(id)arg2 keySize:(id)arg3 keyType:(id)arg4 hardwareBound:(id)arg5 subject:(id)arg6 subjectAltName:(id)arg7 usageFlags:(id)arg8 extendedKeyUsage:(id)arg9 attest:(id)arg10;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAttest;
- (id)payloadClientIdentifier;
- (id)payloadDirectoryURL;
- (id)payloadExtendedKeyUsage;
- (id)payloadHardwareBound;
- (id)payloadKeySize;
- (id)payloadKeyType;
- (id)payloadSubject;
- (id)payloadSubjectAltName;
- (id)payloadUsageFlags;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadAttest:(id)arg1;
- (void)setPayloadClientIdentifier:(id)arg1;
- (void)setPayloadDirectoryURL:(id)arg1;
- (void)setPayloadExtendedKeyUsage:(id)arg1;
- (void)setPayloadHardwareBound:(id)arg1;
- (void)setPayloadKeySize:(id)arg1;
- (void)setPayloadKeyType:(id)arg1;
- (void)setPayloadSubject:(id)arg1;
- (void)setPayloadSubjectAltName:(id)arg1;
- (void)setPayloadUsageFlags:(id)arg1;

@end
