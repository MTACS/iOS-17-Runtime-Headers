
@interface CEMSystemAirPrintSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAirPrint;
    NSNumber * _payloadAllowAirPrintCredentialsStorage;
    NSNumber * _payloadAllowAirPrintiBeaconDiscovery;
    NSNumber * _payloadForceAirPrintTrustedTLSRequirement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAirPrint;
@property (nonatomic, copy) NSNumber *payloadAllowAirPrintCredentialsStorage;
@property (nonatomic, copy) NSNumber *payloadAllowAirPrintiBeaconDiscovery;
@property (nonatomic, copy) NSNumber *payloadForceAirPrintTrustedTLSRequirement;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAirPrint:(id)arg2 withForceAirPrintTrustedTLSRequirement:(id)arg3 withAllowAirPrintiBeaconDiscovery:(id)arg4 withAllowAirPrintCredentialsStorage:(id)arg5;
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
- (id)payloadAllowAirPrint;
- (id)payloadAllowAirPrintCredentialsStorage;
- (id)payloadAllowAirPrintiBeaconDiscovery;
- (id)payloadForceAirPrintTrustedTLSRequirement;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAirPrint:(id)arg1;
- (void)setPayloadAllowAirPrintCredentialsStorage:(id)arg1;
- (void)setPayloadAllowAirPrintiBeaconDiscovery:(id)arg1;
- (void)setPayloadForceAirPrintTrustedTLSRequirement:(id)arg1;

@end
