
@interface RMModelManagementOrganizationInformationDeclaration : RMModelManagementBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadEmail;
    NSString * _payloadName;
    RMModelManagementOrganizationInformationDeclaration_Proof * _payloadProof;
    NSString * _payloadURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadEmail;
@property (nonatomic, copy) NSString *payloadName;
@property (nonatomic, copy) RMModelManagementOrganizationInformationDeclaration_Proof *payloadProof;
@property (nonatomic, copy) NSString *payloadURL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 name:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 name:(id)arg2 email:(id)arg3 URL:(id)arg4 proof:(id)arg5;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEmail;
- (id)payloadName;
- (id)payloadProof;
- (id)payloadURL;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadEmail:(id)arg1;
- (void)setPayloadName:(id)arg1;
- (void)setPayloadProof:(id)arg1;
- (void)setPayloadURL:(id)arg1;

@end
