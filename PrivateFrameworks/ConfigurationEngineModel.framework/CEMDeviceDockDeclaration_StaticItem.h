
@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase {
    CEMDeviceDockDeclaration_StaticItemTileData * _payloadTileData;
    NSString * _payloadTileType;
}

@property (nonatomic, copy) CEMDeviceDockDeclaration_StaticItemTileData *payloadTileData;
@property (nonatomic, copy) NSString *payloadTileType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithTileData:(id)arg1 withTileType:(id)arg2;
+ (id)buildWithTileData:(id)arg1 withTileType:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadTileData;
- (id)payloadTileType;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadTileData:(id)arg1;
- (void)setPayloadTileType:(id)arg1;

@end
