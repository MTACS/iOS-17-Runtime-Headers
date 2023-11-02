
@interface RMModelSoftwareUpdateEnforcementSpecificDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadDetailsURL;
    NSString * _payloadTargetBuildVersion;
    NSString * _payloadTargetLocalDateTime;
    NSString * _payloadTargetOSVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadDetailsURL;
@property (nonatomic, copy) NSString *payloadTargetBuildVersion;
@property (nonatomic, copy) NSString *payloadTargetLocalDateTime;
@property (nonatomic, copy) NSString *payloadTargetOSVersion;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 targetOSVersion:(id)arg2 targetLocalDateTime:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 targetOSVersion:(id)arg2 targetBuildVersion:(id)arg3 targetLocalDateTime:(id)arg4 detailsURL:(id)arg5;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadDetailsURL;
- (id)payloadTargetBuildVersion;
- (id)payloadTargetLocalDateTime;
- (id)payloadTargetOSVersion;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadDetailsURL:(id)arg1;
- (void)setPayloadTargetBuildVersion:(id)arg1;
- (void)setPayloadTargetLocalDateTime:(id)arg1;
- (void)setPayloadTargetOSVersion:(id)arg1;

@end
