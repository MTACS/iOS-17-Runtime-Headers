
@interface RMModelAccountExchangeDeclaration_SMIME : RMModelPayloadBase {
    RMModelAccountExchangeDeclaration_SMIMEEncryption * _payloadEncryption;
    RMModelAccountExchangeDeclaration_SMIMESigning * _payloadSigning;
}

@property (nonatomic, copy) RMModelAccountExchangeDeclaration_SMIMEEncryption *payloadEncryption;
@property (nonatomic, copy) RMModelAccountExchangeDeclaration_SMIMESigning *payloadSigning;

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
