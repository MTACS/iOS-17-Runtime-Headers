
@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase {
    NSString * _payloadBundleIdentifier;
    NSString * _payloadTeamIdentifier;
}

@property (nonatomic, copy) NSString *payloadBundleIdentifier;
@property (nonatomic, copy) NSString *payloadTeamIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2;
+ (id)buildWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadBundleIdentifier;
- (id)payloadTeamIdentifier;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadBundleIdentifier:(id)arg1;
- (void)setPayloadTeamIdentifier:(id)arg1;

@end
