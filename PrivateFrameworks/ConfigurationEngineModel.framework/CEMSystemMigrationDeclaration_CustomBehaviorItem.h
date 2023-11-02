
@interface CEMSystemMigrationDeclaration_CustomBehaviorItem : CEMPayloadBase {
    NSString * _payloadContext;
    NSArray * _payloadPaths;
}

@property (nonatomic, copy) NSString *payloadContext;
@property (nonatomic, copy) NSArray *payloadPaths;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithContext:(id)arg1 withPaths:(id)arg2;
+ (id)buildWithContext:(id)arg1 withPaths:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadContext;
- (id)payloadPaths;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadContext:(id)arg1;
- (void)setPayloadPaths:(id)arg1;

@end
