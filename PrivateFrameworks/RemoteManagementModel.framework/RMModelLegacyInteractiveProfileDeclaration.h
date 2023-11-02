
@interface RMModelLegacyInteractiveProfileDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadProfileURL;
    NSString * _payloadVisibleName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadProfileURL;
@property (nonatomic, copy) NSString *payloadVisibleName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 profileURL:(id)arg2 visibleName:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 profileURL:(id)arg2 visibleName:(id)arg3;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadProfileURL;
- (id)payloadVisibleName;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadProfileURL:(id)arg1;
- (void)setPayloadVisibleName:(id)arg1;

@end
