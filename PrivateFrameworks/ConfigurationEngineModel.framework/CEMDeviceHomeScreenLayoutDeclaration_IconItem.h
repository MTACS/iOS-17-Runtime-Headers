
@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase {
    NSString * _payloadBundleID;
    NSString * _payloadDisplayName;
    NSArray * _payloadPages;
    NSString * _payloadType;
    NSString * _payloadURL;
}

@property (nonatomic, copy) NSString *payloadBundleID;
@property (nonatomic, copy) NSString *payloadDisplayName;
@property (nonatomic, copy) NSArray *payloadPages;
@property (nonatomic, copy) NSString *payloadType;
@property (nonatomic, copy) NSString *payloadURL;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithType:(id)arg1;
+ (id)buildWithType:(id)arg1 withDisplayName:(id)arg2 withBundleID:(id)arg3 withPages:(id)arg4 withURL:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadBundleID;
- (id)payloadDisplayName;
- (id)payloadPages;
- (id)payloadType;
- (id)payloadURL;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadBundleID:(id)arg1;
- (void)setPayloadDisplayName:(id)arg1;
- (void)setPayloadPages:(id)arg1;
- (void)setPayloadType:(id)arg1;
- (void)setPayloadURL:(id)arg1;

@end
