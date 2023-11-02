
@interface CEMNetworkCellularSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAppCellularDataModification;
    NSNumber * _payloadAllowCellularPlanModification;
    NSNumber * _payloadAllowDataRoaming;
    NSNumber * _payloadAllowGlobalBackgroundFetchWhenRoaming;
    NSNumber * _payloadAllowPersonalHotspot;
    NSNumber * _payloadAllowVoiceRoaming;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAppCellularDataModification;
@property (nonatomic, copy) NSNumber *payloadAllowCellularPlanModification;
@property (nonatomic, copy) NSNumber *payloadAllowDataRoaming;
@property (nonatomic, copy) NSNumber *payloadAllowGlobalBackgroundFetchWhenRoaming;
@property (nonatomic, copy) NSNumber *payloadAllowPersonalHotspot;
@property (nonatomic, copy) NSNumber *payloadAllowVoiceRoaming;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowDataRoaming:(id)arg2 withAllowVoiceRoaming:(id)arg3 withAllowPersonalHotspot:(id)arg4 withAllowGlobalBackgroundFetchWhenRoaming:(id)arg5 withAllowCellularPlanModification:(id)arg6 withAllowAppCellularDataModification:(id)arg7;
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
- (id)payloadAllowAppCellularDataModification;
- (id)payloadAllowCellularPlanModification;
- (id)payloadAllowDataRoaming;
- (id)payloadAllowGlobalBackgroundFetchWhenRoaming;
- (id)payloadAllowPersonalHotspot;
- (id)payloadAllowVoiceRoaming;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAppCellularDataModification:(id)arg1;
- (void)setPayloadAllowCellularPlanModification:(id)arg1;
- (void)setPayloadAllowDataRoaming:(id)arg1;
- (void)setPayloadAllowGlobalBackgroundFetchWhenRoaming:(id)arg1;
- (void)setPayloadAllowPersonalHotspot:(id)arg1;
- (void)setPayloadAllowVoiceRoaming:(id)arg1;

@end
