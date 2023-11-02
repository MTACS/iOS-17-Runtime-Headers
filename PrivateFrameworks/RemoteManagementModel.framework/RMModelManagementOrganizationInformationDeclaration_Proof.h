
@interface RMModelManagementOrganizationInformationDeclaration_Proof : RMModelPayloadBase {
    NSString * _payloadIdentityToken;
}

@property (nonatomic, copy) NSString *payloadIdentityToken;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithIdentityToken:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadIdentityToken;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadIdentityToken:(id)arg1;

@end
