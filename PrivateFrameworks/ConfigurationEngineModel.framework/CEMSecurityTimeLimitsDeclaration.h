
@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadFamilyControlsEnabled;
    CEMSecurityTimeLimitsDeclaration_TimeLimits * _payloadTimeLimits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadFamilyControlsEnabled;
@property (nonatomic, copy) CEMSecurityTimeLimitsDeclaration_TimeLimits *payloadTimeLimits;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withFamilyControlsEnabled:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withFamilyControlsEnabled:(id)arg2 withTimeLimits:(id)arg3;
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
- (id)payloadFamilyControlsEnabled;
- (id)payloadTimeLimits;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadFamilyControlsEnabled:(id)arg1;
- (void)setPayloadTimeLimits:(id)arg1;

@end
