
@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase {
    NSNumber * _payloadAllowed;
    NSString * _payloadApplication;
    NSString * _payloadBundleID;
}

@property (nonatomic, copy) NSNumber *payloadAllowed;
@property (nonatomic, copy) NSString *payloadApplication;
@property (nonatomic, copy) NSString *payloadBundleID;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;
+ (id)buildWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllowed;
- (id)payloadApplication;
- (id)payloadBundleID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowed:(id)arg1;
- (void)setPayloadApplication:(id)arg1;
- (void)setPayloadBundleID:(id)arg1;

@end
