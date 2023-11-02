
@interface CEMSystemEnergySaverDeclaration_EnergySaverSchedule : CEMPayloadBase {
    CEMSystemEnergySaverDeclaration_RepeatingPowerItem * _payloadRepeatingPowerOff;
    CEMSystemEnergySaverDeclaration_RepeatingPowerItem * _payloadRepeatingPowerOn;
}

@property (nonatomic, copy) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOff;
@property (nonatomic, copy) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOn;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRepeatingPowerOn:(id)arg1 withRepeatingPowerOff:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadRepeatingPowerOff;
- (id)payloadRepeatingPowerOn;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadRepeatingPowerOff:(id)arg1;
- (void)setPayloadRepeatingPowerOn:(id)arg1;

@end
