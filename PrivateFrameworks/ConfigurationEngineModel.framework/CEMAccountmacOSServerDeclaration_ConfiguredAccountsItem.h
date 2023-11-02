
@interface CEMAccountmacOSServerDeclaration_ConfiguredAccountsItem : CEMPayloadBase {
    NSNumber * _payloadPort;
    NSString * _payloadType;
}

@property (nonatomic, copy) NSNumber *payloadPort;
@property (nonatomic, copy) NSString *payloadType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithType:(id)arg1;
+ (id)buildWithType:(id)arg1 withPort:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadPort;
- (id)payloadType;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadPort:(id)arg1;
- (void)setPayloadType:(id)arg1;

@end
