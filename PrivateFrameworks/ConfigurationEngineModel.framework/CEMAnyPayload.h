
@interface CEMAnyPayload : CEMPayloadBase {
    NSDictionary * _payloadKeys;
}

@property (copy) NSDictionary *payloadKeys;

+ (id)buildFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadKeys;
- (id)serializePayload;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadKeys:(id)arg1;

@end
