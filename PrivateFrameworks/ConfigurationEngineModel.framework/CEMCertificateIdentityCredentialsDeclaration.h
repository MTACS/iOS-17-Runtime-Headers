
@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase {
    NSData * _payloadCertificate;
}

@property (nonatomic, copy) NSData *payloadCertificate;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithCertificate:(id)arg1;
+ (id)buildWithCertificate:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadCertificate;
- (id)serializePayload;
- (void)setPayloadCertificate:(id)arg1;

@end
