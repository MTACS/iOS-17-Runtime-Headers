
@interface RMModelAccountMailDeclaration_OutgoingServer : RMModelPayloadBase {
    NSString * _payloadAuthenticationCredentialsAssetReference;
    NSString * _payloadAuthenticationMethod;
    NSString * _payloadHostName;
    NSNumber * _payloadPort;
}

@property (nonatomic, copy) NSString *payloadAuthenticationCredentialsAssetReference;
@property (nonatomic, copy) NSString *payloadAuthenticationMethod;
@property (nonatomic, copy) NSString *payloadHostName;
@property (nonatomic, copy) NSNumber *payloadPort;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithHostName:(id)arg1 authenticationMethod:(id)arg2;
+ (id)buildWithHostName:(id)arg1 port:(id)arg2 authenticationMethod:(id)arg3 authenticationCredentialsAssetReference:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAuthenticationCredentialsAssetReference;
- (id)payloadAuthenticationMethod;
- (id)payloadHostName;
- (id)payloadPort;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadAuthenticationCredentialsAssetReference:(id)arg1;
- (void)setPayloadAuthenticationMethod:(id)arg1;
- (void)setPayloadHostName:(id)arg1;
- (void)setPayloadPort:(id)arg1;

@end
