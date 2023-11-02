
@interface CEMSystemDashboardDeclaration_WhiteListItem : CEMPayloadBase {
    NSString * _payloadID;
    NSString * _payloadType;
}

@property (nonatomic, copy) NSString *payloadID;
@property (nonatomic, copy) NSString *payloadType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithType:(id)arg1 withID:(id)arg2;
+ (id)buildWithType:(id)arg1 withID:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadID;
- (id)payloadType;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadID:(id)arg1;
- (void)setPayloadType:(id)arg1;

@end
