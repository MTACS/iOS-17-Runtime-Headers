
@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase {
    NSNumber * _payloadEnabled;
    NSString * _payloadEnd;
    NSNumber * _payloadRangeType;
    NSNumber * _payloadSecondsPerDay;
    NSString * _payloadStart;
}

@property (nonatomic, copy) NSNumber *payloadEnabled;
@property (nonatomic, copy) NSString *payloadEnd;
@property (nonatomic, copy) NSNumber *payloadRangeType;
@property (nonatomic, copy) NSNumber *payloadSecondsPerDay;
@property (nonatomic, copy) NSString *payloadStart;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithEnabled:(id)arg1 withRangeType:(id)arg2;
+ (id)buildWithEnabled:(id)arg1 withRangeType:(id)arg2 withStart:(id)arg3 withEnd:(id)arg4 withSecondsPerDay:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadEnabled;
- (id)payloadEnd;
- (id)payloadRangeType;
- (id)payloadSecondsPerDay;
- (id)payloadStart;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEnabled:(id)arg1;
- (void)setPayloadEnd:(id)arg1;
- (void)setPayloadRangeType:(id)arg1;
- (void)setPayloadSecondsPerDay:(id)arg1;
- (void)setPayloadStart:(id)arg1;

@end
