
@interface CEMSecuritySmartCardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowSmartCard;
    NSNumber * _payloadCheckCertificateTrust;
    NSNumber * _payloadEnforceSmartCard;
    NSNumber * _payloadOneCardPerUser;
    NSNumber * _payloadTokenRemovalAction;
    NSNumber * _payloadUserPairing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowSmartCard;
@property (nonatomic, copy) NSNumber *payloadCheckCertificateTrust;
@property (nonatomic, copy) NSNumber *payloadEnforceSmartCard;
@property (nonatomic, copy) NSNumber *payloadOneCardPerUser;
@property (nonatomic, copy) NSNumber *payloadTokenRemovalAction;
@property (nonatomic, copy) NSNumber *payloadUserPairing;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withUserPairing:(id)arg2 withAllowSmartCard:(id)arg3 withCheckCertificateTrust:(id)arg4 withOneCardPerUser:(id)arg5 withTokenRemovalAction:(id)arg6 withEnforceSmartCard:(id)arg7;
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
- (id)payloadAllowSmartCard;
- (id)payloadCheckCertificateTrust;
- (id)payloadEnforceSmartCard;
- (id)payloadOneCardPerUser;
- (id)payloadTokenRemovalAction;
- (id)payloadUserPairing;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowSmartCard:(id)arg1;
- (void)setPayloadCheckCertificateTrust:(id)arg1;
- (void)setPayloadEnforceSmartCard:(id)arg1;
- (void)setPayloadOneCardPerUser:(id)arg1;
- (void)setPayloadTokenRemovalAction:(id)arg1;
- (void)setPayloadUserPairing:(id)arg1;

@end
