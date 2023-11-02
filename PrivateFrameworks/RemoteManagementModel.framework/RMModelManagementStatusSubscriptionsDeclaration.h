
@interface RMModelManagementStatusSubscriptionsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSArray * _payloadStatusItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadStatusItems;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 statusItems:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 statusItems:(id)arg2;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadStatusItems;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadStatusItems:(id)arg1;

@end
