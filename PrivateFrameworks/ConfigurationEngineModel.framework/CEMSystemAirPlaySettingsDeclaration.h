
@interface CEMSystemAirPlaySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAirPlayIncomingRequests;
    NSNumber * _payloadForceAirPlayIncomingRequestsPairingPassword;
    NSNumber * _payloadForceAirPlayOutgoingRequestsPairingPassword;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAirPlayIncomingRequests;
@property (nonatomic, copy) NSNumber *payloadForceAirPlayIncomingRequestsPairingPassword;
@property (nonatomic, copy) NSNumber *payloadForceAirPlayOutgoingRequestsPairingPassword;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withForceAirPlayOutgoingRequestsPairingPassword:(id)arg2 withForceAirPlayIncomingRequestsPairingPassword:(id)arg3 withAllowAirPlayIncomingRequests:(id)arg4;
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
- (id)payloadAllowAirPlayIncomingRequests;
- (id)payloadForceAirPlayIncomingRequestsPairingPassword;
- (id)payloadForceAirPlayOutgoingRequestsPairingPassword;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAirPlayIncomingRequests:(id)arg1;
- (void)setPayloadForceAirPlayIncomingRequestsPairingPassword:(id)arg1;
- (void)setPayloadForceAirPlayOutgoingRequestsPairingPassword:(id)arg1;

@end
