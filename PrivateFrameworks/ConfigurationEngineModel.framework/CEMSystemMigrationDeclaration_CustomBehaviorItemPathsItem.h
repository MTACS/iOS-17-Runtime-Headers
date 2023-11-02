
@interface CEMSystemMigrationDeclaration_CustomBehaviorItemPathsItem : CEMPayloadBase {
    NSString * _payloadSourcePath;
    NSNumber * _payloadSourcePathInUserHome;
    NSString * _payloadTargetPath;
    NSNumber * _payloadTargetPathInUserHome;
}

@property (nonatomic, copy) NSString *payloadSourcePath;
@property (nonatomic, copy) NSNumber *payloadSourcePathInUserHome;
@property (nonatomic, copy) NSString *payloadTargetPath;
@property (nonatomic, copy) NSNumber *payloadTargetPathInUserHome;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4;
+ (id)buildWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadSourcePath;
- (id)payloadSourcePathInUserHome;
- (id)payloadTargetPath;
- (id)payloadTargetPathInUserHome;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadSourcePath:(id)arg1;
- (void)setPayloadSourcePathInUserHome:(id)arg1;
- (void)setPayloadTargetPath:(id)arg1;
- (void)setPayloadTargetPathInUserHome:(id)arg1;

@end
