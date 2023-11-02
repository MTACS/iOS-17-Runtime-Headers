
@interface RMModelAssetUserIdentityDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadEmailAddress;
    NSString * _payloadFullName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadEmailAddress;
@property (nonatomic, copy) NSString *payloadFullName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 fullName:(id)arg2 emailAddress:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEmailAddress;
- (id)payloadFullName;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadEmailAddress:(id)arg1;
- (void)setPayloadFullName:(id)arg1;

@end
