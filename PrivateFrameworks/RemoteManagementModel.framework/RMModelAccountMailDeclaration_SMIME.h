
@interface RMModelAccountMailDeclaration_SMIME : RMModelPayloadBase {
    RMModelAccountMailDeclaration_SMIMEEncryption * _payloadEncryption;
    RMModelAccountMailDeclaration_SMIMESigning * _payloadSigning;
}

@property (nonatomic, copy) RMModelAccountMailDeclaration_SMIMEEncryption *payloadEncryption;
@property (nonatomic, copy) RMModelAccountMailDeclaration_SMIMESigning *payloadSigning;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithSigning:(id)arg1 encryption:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEncryption;
- (id)payloadSigning;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadEncryption:(id)arg1;
- (void)setPayloadSigning:(id)arg1;

@end
