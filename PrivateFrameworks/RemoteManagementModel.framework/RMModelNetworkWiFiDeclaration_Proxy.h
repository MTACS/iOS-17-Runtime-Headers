
@interface RMModelNetworkWiFiDeclaration_Proxy : RMModelPayloadBase {
    NSNumber * _payloadPACFallbackAllowed;
    NSString * _payloadPACURL;
    NSString * _payloadProxyAuthenticationCredentialsAssetReference;
    NSString * _payloadServer;
    NSNumber * _payloadServerPort;
    NSString * _payloadType;
}

@property (nonatomic, copy) NSNumber *payloadPACFallbackAllowed;
@property (nonatomic, copy) NSString *payloadPACURL;
@property (nonatomic, copy) NSString *payloadProxyAuthenticationCredentialsAssetReference;
@property (nonatomic, copy) NSString *payloadServer;
@property (nonatomic, copy) NSNumber *payloadServerPort;
@property (nonatomic, copy) NSString *payloadType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithType:(id)arg1 server:(id)arg2 serverPort:(id)arg3 proxyAuthenticationCredentialsAssetReference:(id)arg4 PACURL:(id)arg5 pacFallbackAllowed:(id)arg6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadPACFallbackAllowed;
- (id)payloadPACURL;
- (id)payloadProxyAuthenticationCredentialsAssetReference;
- (id)payloadServer;
- (id)payloadServerPort;
- (id)payloadType;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadPACFallbackAllowed:(id)arg1;
- (void)setPayloadPACURL:(id)arg1;
- (void)setPayloadProxyAuthenticationCredentialsAssetReference:(id)arg1;
- (void)setPayloadServer:(id)arg1;
- (void)setPayloadServerPort:(id)arg1;
- (void)setPayloadType:(id)arg1;

@end
