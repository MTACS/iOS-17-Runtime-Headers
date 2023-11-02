
@interface RMModelIdentityCredentialDeclaration : RMModelPayloadBase {
    NSData * _payloadIdentity;
    NSString * _payloadPassword;
}

@property (nonatomic, copy) NSData *payloadIdentity;
@property (nonatomic, copy) NSString *payloadPassword;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPassword:(id)arg1 identity:(id)arg2;
+ (id)buildWithPassword:(id)arg1 identity:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadIdentity;
- (id)payloadPassword;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadIdentity:(id)arg1;
- (void)setPayloadPassword:(id)arg1;

@end
