
@interface RMModelScreenSharingConnectionGroupDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadConnectionGroupUUID;
    NSString * _payloadGroupName;
    NSArray * _payloadMembers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadConnectionGroupUUID;
@property (nonatomic, copy) NSString *payloadGroupName;
@property (nonatomic, copy) NSArray *payloadMembers;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 connectionGroupUUID:(id)arg2 groupName:(id)arg3 members:(id)arg4;
+ (id)buildWithIdentifier:(id)arg1 connectionGroupUUID:(id)arg2 groupName:(id)arg3 members:(id)arg4;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadConnectionGroupUUID;
- (id)payloadGroupName;
- (id)payloadMembers;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadConnectionGroupUUID:(id)arg1;
- (void)setPayloadGroupName:(id)arg1;
- (void)setPayloadMembers:(id)arg1;

@end
