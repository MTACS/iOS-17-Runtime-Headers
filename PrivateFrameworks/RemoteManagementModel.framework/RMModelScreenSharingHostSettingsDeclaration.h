
@interface RMModelScreenSharingHostSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSNumber * _payloadMaximumVirtualDisplays;
    NSNumber * _payloadPortBase;
    NSNumber * _payloadPreventCopyFilesFromHost;
    NSNumber * _payloadPreventCopyFilesToHost;
    NSNumber * _payloadPreventHighPerformanceConnections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadMaximumVirtualDisplays;
@property (nonatomic, copy) NSNumber *payloadPortBase;
@property (nonatomic, copy) NSNumber *payloadPreventCopyFilesFromHost;
@property (nonatomic, copy) NSNumber *payloadPreventCopyFilesToHost;
@property (nonatomic, copy) NSNumber *payloadPreventHighPerformanceConnections;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 maximumVirtualDisplays:(id)arg2 portBase:(id)arg3 preventCopyFilesFromHost:(id)arg4 preventCopyFilesToHost:(id)arg5 preventHighPerformanceConnections:(id)arg6;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadMaximumVirtualDisplays;
- (id)payloadPortBase;
- (id)payloadPreventCopyFilesFromHost;
- (id)payloadPreventCopyFilesToHost;
- (id)payloadPreventHighPerformanceConnections;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadMaximumVirtualDisplays:(id)arg1;
- (void)setPayloadPortBase:(id)arg1;
- (void)setPayloadPreventCopyFilesFromHost:(id)arg1;
- (void)setPayloadPreventCopyFilesToHost:(id)arg1;
- (void)setPayloadPreventHighPerformanceConnections:(id)arg1;

@end
