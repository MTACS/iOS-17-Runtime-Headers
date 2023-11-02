
@interface RMModelUserNameAndPasswordCredentialDeclaration : RMModelPayloadBase {
    NSString * _payloadPassword;
    NSString * _payloadUserName;
}

@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSString *payloadUserName;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithUserName:(id)arg1;
+ (id)buildWithUserName:(id)arg1 password:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadPassword;
- (id)payloadUserName;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadUserName:(id)arg1;

@end
