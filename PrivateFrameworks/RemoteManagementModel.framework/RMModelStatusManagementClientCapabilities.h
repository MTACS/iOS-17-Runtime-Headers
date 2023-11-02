
@interface RMModelStatusManagementClientCapabilities : RMModelStatusBase {
    RMModelAnyPayload * _statusSupportedFeatures;
    RMModelStatusManagementClientCapabilities_SupportedPayloads * _statusSupportedPayloads;
    NSArray * _statusSupportedVersions;
}

@property (nonatomic, copy) RMModelAnyPayload *statusSupportedFeatures;
@property (nonatomic, copy) RMModelStatusManagementClientCapabilities_SupportedPayloads *statusSupportedPayloads;
@property (nonatomic, copy) NSArray *statusSupportedVersions;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3;
+ (id)buildWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusSupportedFeatures:(id)arg1;
- (void)setStatusSupportedPayloads:(id)arg1;
- (void)setStatusSupportedVersions:(id)arg1;
- (id)statusSupportedFeatures;
- (id)statusSupportedPayloads;
- (id)statusSupportedVersions;

@end
