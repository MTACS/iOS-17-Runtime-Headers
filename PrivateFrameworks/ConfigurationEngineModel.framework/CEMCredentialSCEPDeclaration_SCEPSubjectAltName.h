
@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase {
    NSString * _payloadDNSName;
    NSString * _payloadNtPrincipalName;
    NSString * _payloadRfc822Name;
    NSString * _payloadUniformResourceIdentifier;
}

@property (nonatomic, copy) NSString *payloadDNSName;
@property (nonatomic, copy) NSString *payloadNtPrincipalName;
@property (nonatomic, copy) NSString *payloadRfc822Name;
@property (nonatomic, copy) NSString *payloadUniformResourceIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:(id)arg1 withDNSName:(id)arg2 withUniformResourceIdentifier:(id)arg3 withNtPrincipalName:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDNSName;
- (id)payloadNtPrincipalName;
- (id)payloadRfc822Name;
- (id)payloadUniformResourceIdentifier;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDNSName:(id)arg1;
- (void)setPayloadNtPrincipalName:(id)arg1;
- (void)setPayloadRfc822Name:(id)arg1;
- (void)setPayloadUniformResourceIdentifier:(id)arg1;

@end
