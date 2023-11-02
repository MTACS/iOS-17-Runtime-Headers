
@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase {
    CEMAnyPayload * _payloadFileData;
    NSNumber * _payloadFileType;
    NSString * _payloadLabel;
    NSString * _payloadUrl;
}

@property (nonatomic, copy) CEMAnyPayload *payloadFileData;
@property (nonatomic, copy) NSNumber *payloadFileType;
@property (nonatomic, copy) NSString *payloadLabel;
@property (nonatomic, copy) NSString *payloadUrl;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithLabel:(id)arg1 withFileType:(id)arg2;
+ (id)buildWithLabel:(id)arg1 withUrl:(id)arg2 withFileType:(id)arg3 withFileData:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadFileData;
- (id)payloadFileType;
- (id)payloadLabel;
- (id)payloadUrl;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadFileData:(id)arg1;
- (void)setPayloadFileType:(id)arg1;
- (void)setPayloadLabel:(id)arg1;
- (void)setPayloadUrl:(id)arg1;

@end
