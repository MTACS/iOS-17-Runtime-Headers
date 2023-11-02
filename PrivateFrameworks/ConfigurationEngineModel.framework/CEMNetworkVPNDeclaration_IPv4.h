
@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase {
    NSNumber * _payloadOverridePrimary;
}

@property (nonatomic, copy) NSNumber *payloadOverridePrimary;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithOverridePrimary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadOverridePrimary;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadOverridePrimary:(id)arg1;

@end
