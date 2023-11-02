
@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadOrganizationAddress;
    NSString * _payloadOrganizationEmail;
    NSString * _payloadOrganizationMagic;
    NSString * _payloadOrganizationName;
    NSString * _payloadOrganizationPhone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadOrganizationAddress;
@property (nonatomic, copy) NSString *payloadOrganizationEmail;
@property (nonatomic, copy) NSString *payloadOrganizationMagic;
@property (nonatomic, copy) NSString *payloadOrganizationName;
@property (nonatomic, copy) NSString *payloadOrganizationPhone;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withOrganizationName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withOrganizationName:(id)arg2 withOrganizationAddress:(id)arg3 withOrganizationPhone:(id)arg4 withOrganizationEmail:(id)arg5 withOrganizationMagic:(id)arg6;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadOrganizationAddress;
- (id)payloadOrganizationEmail;
- (id)payloadOrganizationMagic;
- (id)payloadOrganizationName;
- (id)payloadOrganizationPhone;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadOrganizationAddress:(id)arg1;
- (void)setPayloadOrganizationEmail:(id)arg1;
- (void)setPayloadOrganizationMagic:(id)arg1;
- (void)setPayloadOrganizationName:(id)arg1;
- (void)setPayloadOrganizationPhone:(id)arg1;

@end
