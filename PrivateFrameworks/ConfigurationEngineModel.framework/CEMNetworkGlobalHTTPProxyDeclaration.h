
@interface CEMNetworkGlobalHTTPProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadProxyCaptiveLoginAllowed;
    NSNumber * _payloadProxyPACFallbackAllowed;
    NSString * _payloadProxyPACURL;
    NSString * _payloadProxyPassword;
    NSString * _payloadProxyServer;
    NSNumber * _payloadProxyServerPort;
    NSString * _payloadProxyType;
    NSString * _payloadProxyUsername;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadProxyCaptiveLoginAllowed;
@property (nonatomic, copy) NSNumber *payloadProxyPACFallbackAllowed;
@property (nonatomic, copy) NSString *payloadProxyPACURL;
@property (nonatomic, copy) NSString *payloadProxyPassword;
@property (nonatomic, copy) NSString *payloadProxyServer;
@property (nonatomic, copy) NSNumber *payloadProxyServerPort;
@property (nonatomic, copy) NSString *payloadProxyType;
@property (nonatomic, copy) NSString *payloadProxyUsername;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withProxyServer:(id)arg2 withProxyServerPort:(id)arg3 withProxyPACURL:(id)arg4;
+ (id)buildWithIdentifier:(id)arg1 withProxyType:(id)arg2 withProxyServer:(id)arg3 withProxyServerPort:(id)arg4 withProxyUsername:(id)arg5 withProxyPassword:(id)arg6 withProxyPACURL:(id)arg7 withProxyPACFallbackAllowed:(id)arg8 withProxyCaptiveLoginAllowed:(id)arg9;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadProxyCaptiveLoginAllowed;
- (id)payloadProxyPACFallbackAllowed;
- (id)payloadProxyPACURL;
- (id)payloadProxyPassword;
- (id)payloadProxyServer;
- (id)payloadProxyServerPort;
- (id)payloadProxyType;
- (id)payloadProxyUsername;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadProxyCaptiveLoginAllowed:(id)arg1;
- (void)setPayloadProxyPACFallbackAllowed:(id)arg1;
- (void)setPayloadProxyPACURL:(id)arg1;
- (void)setPayloadProxyPassword:(id)arg1;
- (void)setPayloadProxyServer:(id)arg1;
- (void)setPayloadProxyServerPort:(id)arg1;
- (void)setPayloadProxyType:(id)arg1;
- (void)setPayloadProxyUsername:(id)arg1;

@end
