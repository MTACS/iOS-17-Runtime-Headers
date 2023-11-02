
@interface RMModelAppManagedDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadAppStoreID;
    RMModelAppManagedDeclaration_Attributes * _payloadAttributes;
    NSString * _payloadBundleID;
    NSNumber * _payloadIncludeInBackup;
    RMModelAppManagedDeclaration_InstallBehavior * _payloadInstallBehavior;
    NSString * _payloadManifestURL;
    RMModelAppManagedDeclaration_RemoveBehavior * _payloadRemoveBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAppStoreID;
@property (nonatomic, copy) RMModelAppManagedDeclaration_Attributes *payloadAttributes;
@property (nonatomic, copy) NSString *payloadBundleID;
@property (nonatomic, copy) NSNumber *payloadIncludeInBackup;
@property (nonatomic, copy) RMModelAppManagedDeclaration_InstallBehavior *payloadInstallBehavior;
@property (nonatomic, copy) NSString *payloadManifestURL;
@property (nonatomic, copy) RMModelAppManagedDeclaration_RemoveBehavior *payloadRemoveBehavior;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 appStoreID:(id)arg2 bundleID:(id)arg3 manifestURL:(id)arg4 installBehavior:(id)arg5 removeBehavior:(id)arg6 includeInBackup:(id)arg7 attributes:(id)arg8;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAppStoreID;
- (id)payloadAttributes;
- (id)payloadBundleID;
- (id)payloadIncludeInBackup;
- (id)payloadInstallBehavior;
- (id)payloadManifestURL;
- (id)payloadRemoveBehavior;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAppStoreID:(id)arg1;
- (void)setPayloadAttributes:(id)arg1;
- (void)setPayloadBundleID:(id)arg1;
- (void)setPayloadIncludeInBackup:(id)arg1;
- (void)setPayloadInstallBehavior:(id)arg1;
- (void)setPayloadManifestURL:(id)arg1;
- (void)setPayloadRemoveBehavior:(id)arg1;

@end
