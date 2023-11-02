
@interface CEMApplicationControlDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    CEMApplicationControlDeclaration_InstallSchedule * _payloadInstallSchedule;
    NSString * _payloadUpdatePolicy;
    CEMApplicationControlDeclaration_UpdateSchedule * _payloadUpdateSchedule;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMApplicationControlDeclaration_InstallSchedule *payloadInstallSchedule;
@property (nonatomic, copy) NSString *payloadUpdatePolicy;
@property (nonatomic, copy) CEMApplicationControlDeclaration_UpdateSchedule *payloadUpdateSchedule;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withInstallSchedule:(id)arg2 withUpdatePolicy:(id)arg3 withUpdateSchedule:(id)arg4;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadInstallSchedule;
- (id)payloadUpdatePolicy;
- (id)payloadUpdateSchedule;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadInstallSchedule:(id)arg1;
- (void)setPayloadUpdatePolicy:(id)arg1;
- (void)setPayloadUpdateSchedule:(id)arg1;

@end
