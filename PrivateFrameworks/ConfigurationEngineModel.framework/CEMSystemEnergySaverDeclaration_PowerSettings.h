
@interface CEMSystemEnergySaverDeclaration_PowerSettings : CEMPayloadBase {
    NSNumber * _payloadAutomaticRestartOnPowerLoss;
    NSNumber * _payloadDiskSleepTimer;
    NSNumber * _payloadDisplaySleepTimer;
    NSNumber * _payloadDynamicPowerStep;
    NSNumber * _payloadReduceProcessorSpeed;
    NSNumber * _payloadSystemSleepTimer;
    NSNumber * _payloadWakeOnLAN;
    NSNumber * _payloadWakeOnModemRing;
}

@property (nonatomic, copy) NSNumber *payloadAutomaticRestartOnPowerLoss;
@property (nonatomic, copy) NSNumber *payloadDiskSleepTimer;
@property (nonatomic, copy) NSNumber *payloadDisplaySleepTimer;
@property (nonatomic, copy) NSNumber *payloadDynamicPowerStep;
@property (nonatomic, copy) NSNumber *payloadReduceProcessorSpeed;
@property (nonatomic, copy) NSNumber *payloadSystemSleepTimer;
@property (nonatomic, copy) NSNumber *payloadWakeOnLAN;
@property (nonatomic, copy) NSNumber *payloadWakeOnModemRing;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDisplaySleepTimer:(id)arg1 withDiskSleepTimer:(id)arg2 withSystemSleepTimer:(id)arg3 withReduceProcessorSpeed:(id)arg4 withDynamicPowerStep:(id)arg5 withWakeOnLAN:(id)arg6 withWakeOnModemRing:(id)arg7 withAutomaticRestartOnPowerLoss:(id)arg8;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAutomaticRestartOnPowerLoss;
- (id)payloadDiskSleepTimer;
- (id)payloadDisplaySleepTimer;
- (id)payloadDynamicPowerStep;
- (id)payloadReduceProcessorSpeed;
- (id)payloadSystemSleepTimer;
- (id)payloadWakeOnLAN;
- (id)payloadWakeOnModemRing;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAutomaticRestartOnPowerLoss:(id)arg1;
- (void)setPayloadDiskSleepTimer:(id)arg1;
- (void)setPayloadDisplaySleepTimer:(id)arg1;
- (void)setPayloadDynamicPowerStep:(id)arg1;
- (void)setPayloadReduceProcessorSpeed:(id)arg1;
- (void)setPayloadSystemSleepTimer:(id)arg1;
- (void)setPayloadWakeOnLAN:(id)arg1;
- (void)setPayloadWakeOnModemRing:(id)arg1;

@end
