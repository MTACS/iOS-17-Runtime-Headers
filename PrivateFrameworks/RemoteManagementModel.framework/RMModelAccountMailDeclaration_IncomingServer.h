
@interface RMModelAccountMailDeclaration_IncomingServer : RMModelPayloadBase {
    NSString * _payloadAuthenticationCredentialsAssetReference;
    NSString * _payloadAuthenticationMethod;
    NSString * _payloadHostName;
    NSString * _payloadIMAPPathPrefix;
    NSNumber * _payloadPort;
    NSString * _payloadServerType;
}

@property (nonatomic, copy) NSString *payloadAuthenticationCredentialsAssetReference;
@property (nonatomic, copy) NSString *payloadAuthenticationMethod;
@property (nonatomic, copy) NSString *payloadHostName;
@property (nonatomic, copy) NSString *payloadIMAPPathPrefix;
@property (nonatomic, copy) NSNumber *payloadPort;
@property (nonatomic, copy) NSString *payloadServerType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithServerType:(id)arg1 hostName:(id)arg2 authenticationMethod:(id)arg3;
+ (id)buildWithServerType:(id)arg1 hostName:(id)arg2 port:(id)arg3 authenticationMethod:(id)arg4 authenticationCredentialsAssetReference:(id)arg5 imapPathPrefix:(id)arg6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAuthenticationCredentialsAssetReference;
- (id)payloadAuthenticationMethod;
- (id)payloadHostName;
- (id)payloadIMAPPathPrefix;
- (id)payloadPort;
- (id)payloadServerType;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadAuthenticationCredentialsAssetReference:(id)arg1;
- (void)setPayloadAuthenticationMethod:(id)arg1;
- (void)setPayloadHostName:(id)arg1;
- (void)setPayloadIMAPPathPrefix:(id)arg1;
- (void)setPayloadPort:(id)arg1;
- (void)setPayloadServerType:(id)arg1;

@end
