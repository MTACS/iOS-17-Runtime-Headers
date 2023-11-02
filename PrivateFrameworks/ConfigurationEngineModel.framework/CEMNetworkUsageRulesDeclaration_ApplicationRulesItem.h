
@interface CEMNetworkUsageRulesDeclaration_ApplicationRulesItem : CEMPayloadBase {
    NSNumber * _payloadAllowCellularData;
    NSNumber * _payloadAllowRoamingCellularData;
    NSArray * _payloadAppIdentifierMatches;
}

@property (nonatomic, copy) NSNumber *payloadAllowCellularData;
@property (nonatomic, copy) NSNumber *payloadAllowRoamingCellularData;
@property (nonatomic, copy) NSArray *payloadAppIdentifierMatches;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAppIdentifierMatches:(id)arg1 withAllowRoamingCellularData:(id)arg2 withAllowCellularData:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllowCellularData;
- (id)payloadAllowRoamingCellularData;
- (id)payloadAppIdentifierMatches;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowCellularData:(id)arg1;
- (void)setPayloadAllowRoamingCellularData:(id)arg1;
- (void)setPayloadAppIdentifierMatches:(id)arg1;

@end
