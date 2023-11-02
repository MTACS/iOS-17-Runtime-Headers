
@interface CEMNetworkCellularDeclaration_APNsItem : CEMPayloadBase {
    NSNumber * _payloadAllowedProtocolMask;
    NSNumber * _payloadAllowedProtocolMaskInRoaming;
    NSString * _payloadAuthenticationType;
    NSNumber * _payloadDefaultProtocolMask;
    NSString * _payloadName;
    NSString * _payloadPassword;
    NSNumber * _payloadProxyPort;
    NSString * _payloadProxyServer;
    NSString * _payloadUsername;
}

@property (nonatomic, copy) NSNumber *payloadAllowedProtocolMask;
@property (nonatomic, copy) NSNumber *payloadAllowedProtocolMaskInRoaming;
@property (nonatomic, copy) NSString *payloadAuthenticationType;
@property (nonatomic, copy) NSNumber *payloadDefaultProtocolMask;
@property (nonatomic, copy) NSString *payloadName;
@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSNumber *payloadProxyPort;
@property (nonatomic, copy) NSString *payloadProxyServer;
@property (nonatomic, copy) NSString *payloadUsername;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithName:(id)arg1;
+ (id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withProxyServer:(id)arg5 withProxyPort:(id)arg6 withDefaultProtocolMask:(id)arg7 withAllowedProtocolMask:(id)arg8 withAllowedProtocolMaskInRoaming:(id)arg9;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllowedProtocolMask;
- (id)payloadAllowedProtocolMaskInRoaming;
- (id)payloadAuthenticationType;
- (id)payloadDefaultProtocolMask;
- (id)payloadName;
- (id)payloadPassword;
- (id)payloadProxyPort;
- (id)payloadProxyServer;
- (id)payloadUsername;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowedProtocolMask:(id)arg1;
- (void)setPayloadAllowedProtocolMaskInRoaming:(id)arg1;
- (void)setPayloadAuthenticationType:(id)arg1;
- (void)setPayloadDefaultProtocolMask:(id)arg1;
- (void)setPayloadName:(id)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadProxyPort:(id)arg1;
- (void)setPayloadProxyServer:(id)arg1;
- (void)setPayloadUsername:(id)arg1;

@end
