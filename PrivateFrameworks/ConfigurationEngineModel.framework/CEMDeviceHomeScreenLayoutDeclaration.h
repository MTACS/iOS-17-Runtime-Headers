
@interface CEMDeviceHomeScreenLayoutDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadDock;
    NSArray * _payloadPages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadDock;
@property (nonatomic, copy) NSArray *payloadPages;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withPages:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withDock:(id)arg2 withPages:(id)arg3;
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
- (id)payloadDock;
- (id)payloadPages;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDock:(id)arg1;
- (void)setPayloadPages:(id)arg1;

@end
