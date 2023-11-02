
@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase {
    NSString * _payloadEventtype;
    NSNumber * _payloadTime;
    NSNumber * _payloadWeekdays;
}

@property (nonatomic, copy) NSString *payloadEventtype;
@property (nonatomic, copy) NSNumber *payloadTime;
@property (nonatomic, copy) NSNumber *payloadWeekdays;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithEventtype:(id)arg1;
+ (id)buildWithEventtype:(id)arg1 withWeekdays:(id)arg2 withTime:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadEventtype;
- (id)payloadTime;
- (id)payloadWeekdays;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEventtype:(id)arg1;
- (void)setPayloadTime:(id)arg1;
- (void)setPayloadWeekdays:(id)arg1;

@end
