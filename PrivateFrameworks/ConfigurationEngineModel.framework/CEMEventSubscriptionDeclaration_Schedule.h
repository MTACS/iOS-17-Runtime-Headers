
@interface CEMEventSubscriptionDeclaration_Schedule : CEMPayloadBase {
    NSNumber * _payloadDay;
    NSString * _payloadFrequency;
    NSString * _payloadLocalTime;
    NSNumber * _payloadSpread;
}

@property (nonatomic, copy) NSNumber *payloadDay;
@property (nonatomic, copy) NSString *payloadFrequency;
@property (nonatomic, copy) NSString *payloadLocalTime;
@property (nonatomic, copy) NSNumber *payloadSpread;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithFrequency:(id)arg1;
+ (id)buildWithFrequency:(id)arg1 withLocalTime:(id)arg2 withSpread:(id)arg3 withDay:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDay;
- (id)payloadFrequency;
- (id)payloadLocalTime;
- (id)payloadSpread;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDay:(id)arg1;
- (void)setPayloadFrequency:(id)arg1;
- (void)setPayloadLocalTime:(id)arg1;
- (void)setPayloadSpread:(id)arg1;

@end
