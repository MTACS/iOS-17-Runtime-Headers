
@interface CEMMediaInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadInstallWhenActivated;
    NSNumber * _payloadMandatory;
    NSString * _payloadMedia;
    NSNumber * _payloadRemoveWhenDeactivated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadInstallWhenActivated;
@property (nonatomic, copy) NSNumber *payloadMandatory;
@property (nonatomic, copy) NSString *payloadMedia;
@property (nonatomic, copy) NSNumber *payloadRemoveWhenDeactivated;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withMedia:(id)arg2 withMandatory:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withMedia:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5;
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
- (id)payloadInstallWhenActivated;
- (id)payloadMandatory;
- (id)payloadMedia;
- (id)payloadRemoveWhenDeactivated;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadInstallWhenActivated:(id)arg1;
- (void)setPayloadMandatory:(id)arg1;
- (void)setPayloadMedia:(id)arg1;
- (void)setPayloadRemoveWhenDeactivated:(id)arg1;

@end
