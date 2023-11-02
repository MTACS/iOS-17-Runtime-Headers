
@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (getter=isBatterySaverModeActive, nonatomic) bool batterySaverModeActive;
@property (nonatomic, copy) NSString *chargingDescription;
@property (nonatomic) unsigned long long chargingDescriptionType;
@property (nonatomic) unsigned long long chargingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long percentCharge;
@property (readonly) Class superclass;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBatterySaverModeActive:(bool)arg1;
- (void)setChargingDescription:(id)arg1;
- (void)setChargingDescriptionType:(unsigned long long)arg1;
- (void)setChargingState:(unsigned long long)arg1;
- (void)setPercentCharge:(unsigned long long)arg1;

@end
