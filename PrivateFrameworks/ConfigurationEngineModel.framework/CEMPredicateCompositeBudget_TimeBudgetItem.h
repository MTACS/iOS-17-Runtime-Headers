
@interface CEMPredicateCompositeBudget_TimeBudgetItem : CEMPayloadBase {
    NSArray * _payloadDays;
    NSNumber * _payloadSeconds;
}

@property (nonatomic, copy) NSArray *payloadDays;
@property (nonatomic, copy) NSNumber *payloadSeconds;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithSeconds:(id)arg1;
+ (id)buildWithSeconds:(id)arg1 withDays:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDays;
- (id)payloadSeconds;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDays:(id)arg1;
- (void)setPayloadSeconds:(id)arg1;

@end
