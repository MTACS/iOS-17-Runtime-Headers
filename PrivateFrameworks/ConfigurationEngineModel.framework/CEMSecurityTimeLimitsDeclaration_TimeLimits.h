
@interface CEMSecurityTimeLimitsDeclaration_TimeLimits : CEMPayloadBase {
    CEMSecurityTimeLimitsDeclaration_Allowance * _payloadWeekdayAllowance;
    CEMSecurityTimeLimitsDeclaration_Allowance * _payloadWeekdayCurfew;
    CEMSecurityTimeLimitsDeclaration_Allowance * _payloadWeekendAllowance;
    CEMSecurityTimeLimitsDeclaration_Allowance * _payloadWeekendCurfew;
}

@property (nonatomic, copy) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayAllowance;
@property (nonatomic, copy) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekdayCurfew;
@property (nonatomic, copy) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendAllowance;
@property (nonatomic, copy) CEMSecurityTimeLimitsDeclaration_Allowance *payloadWeekendCurfew;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithWeekdayAllowance:(id)arg1 withWeekdayCurfew:(id)arg2 withWeekendAllowance:(id)arg3 withWeekendCurfew:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadWeekdayAllowance;
- (id)payloadWeekdayCurfew;
- (id)payloadWeekendAllowance;
- (id)payloadWeekendCurfew;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadWeekdayAllowance:(id)arg1;
- (void)setPayloadWeekdayCurfew:(id)arg1;
- (void)setPayloadWeekendAllowance:(id)arg1;
- (void)setPayloadWeekendCurfew:(id)arg1;

@end
