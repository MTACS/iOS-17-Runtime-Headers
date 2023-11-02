
@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase {
    NSString * _payloadIdentifier;
    CEMAnyPayload * _payloadOverrides;
}

@property (nonatomic, copy) NSString *payloadIdentifier;
@property (nonatomic, copy) CEMAnyPayload *payloadOverrides;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOverrides:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadIdentifier;
- (id)payloadOverrides;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadIdentifier:(id)arg1;
- (void)setPayloadOverrides:(id)arg1;

@end
