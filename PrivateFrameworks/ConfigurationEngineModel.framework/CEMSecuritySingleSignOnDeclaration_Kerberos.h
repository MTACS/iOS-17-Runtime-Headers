
@interface CEMSecuritySingleSignOnDeclaration_Kerberos : CEMPayloadBase {
    NSArray * _payloadAppIdentifierMatches;
    NSString * _payloadPayloadCertificateUUID;
    NSString * _payloadPrincipalName;
    NSString * _payloadRealm;
    NSArray * _payloadURLPrefixMatches;
}

@property (nonatomic, copy) NSArray *payloadAppIdentifierMatches;
@property (nonatomic, copy) NSString *payloadPayloadCertificateUUID;
@property (nonatomic, copy) NSString *payloadPrincipalName;
@property (nonatomic, copy) NSString *payloadRealm;
@property (nonatomic, copy) NSArray *payloadURLPrefixMatches;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithRealm:(id)arg1;
+ (id)buildWithPrincipalName:(id)arg1 withPayloadCertificateUUID:(id)arg2 withRealm:(id)arg3 withURLPrefixMatches:(id)arg4 withAppIdentifierMatches:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAppIdentifierMatches;
- (id)payloadPayloadCertificateUUID;
- (id)payloadPrincipalName;
- (id)payloadRealm;
- (id)payloadURLPrefixMatches;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAppIdentifierMatches:(id)arg1;
- (void)setPayloadPayloadCertificateUUID:(id)arg1;
- (void)setPayloadPrincipalName:(id)arg1;
- (void)setPayloadRealm:(id)arg1;
- (void)setPayloadURLPrefixMatches:(id)arg1;

@end
