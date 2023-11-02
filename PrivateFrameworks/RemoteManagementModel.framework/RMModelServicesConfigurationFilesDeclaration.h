
@interface RMModelServicesConfigurationFilesDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadDataAssetReference;
    NSString * _payloadServiceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadDataAssetReference;
@property (nonatomic, copy) NSString *payloadServiceType;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 serviceType:(id)arg2 dataAssetReference:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 serviceType:(id)arg2 dataAssetReference:(id)arg3;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadDataAssetReference;
- (id)payloadServiceType;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadDataAssetReference:(id)arg1;
- (void)setPayloadServiceType:(id)arg1;

@end
