
@interface CEMSystemDiskRecordingDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadBurnSupport;
    NSNumber * _payloadProhibitBurn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadBurnSupport;
@property (nonatomic, copy) NSNumber *payloadProhibitBurn;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withBurnSupport:(id)arg2 withProhibitBurn:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withBurnSupport:(id)arg2 withProhibitBurn:(id)arg3;
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
- (id)payloadBurnSupport;
- (id)payloadProhibitBurn;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadBurnSupport:(id)arg1;
- (void)setPayloadProhibitBurn:(id)arg1;

@end
