
@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    CEMSystemEnergySaverDeclaration_PowerSettings * _payloadComappleEnergySaverdesktopACPower;
    CEMSystemEnergySaverDeclaration_EnergySaverSchedule * _payloadComappleEnergySaverdesktopSchedule;
    CEMSystemEnergySaverDeclaration_PowerSettings * _payloadComappleEnergySaverportableACPower;
    CEMSystemEnergySaverDeclaration_PowerSettings * _payloadComappleEnergySaverportableBatteryPower;
    NSNumber * _payloadDestroyFVKeyOnStandby;
    NSNumber * _payloadSleepDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverdesktopACPower;
@property (nonatomic, copy) CEMSystemEnergySaverDeclaration_EnergySaverSchedule *payloadComappleEnergySaverdesktopSchedule;
@property (nonatomic, copy) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableACPower;
@property (nonatomic, copy) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableBatteryPower;
@property (nonatomic, copy) NSNumber *payloadDestroyFVKeyOnStandby;
@property (nonatomic, copy) NSNumber *payloadSleepDisabled;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withComappleEnergySaverdesktopACPower:(id)arg2 withComappleEnergySaverportableACPower:(id)arg3 withComappleEnergySaverportableBatteryPower:(id)arg4 withComappleEnergySaverdesktopSchedule:(id)arg5 withSleepDisabled:(id)arg6 withDestroyFVKeyOnStandby:(id)arg7;
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
- (id)payloadComappleEnergySaverdesktopACPower;
- (id)payloadComappleEnergySaverdesktopSchedule;
- (id)payloadComappleEnergySaverportableACPower;
- (id)payloadComappleEnergySaverportableBatteryPower;
- (id)payloadDestroyFVKeyOnStandby;
- (id)payloadSleepDisabled;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadComappleEnergySaverdesktopACPower:(id)arg1;
- (void)setPayloadComappleEnergySaverdesktopSchedule:(id)arg1;
- (void)setPayloadComappleEnergySaverportableACPower:(id)arg1;
- (void)setPayloadComappleEnergySaverportableBatteryPower:(id)arg1;
- (void)setPayloadDestroyFVKeyOnStandby:(id)arg1;
- (void)setPayloadSleepDisabled:(id)arg1;

@end
