
@interface CEMApplicationEnterpriseDeclaration_AppPackage : CEMPayloadBase {
    NSArray * _payloadCertificatePinningIdentifiers;
    NSString * _payloadContentType;
    NSString * _payloadDataURL;
    NSString * _payloadHashSHA256;
    NSNumber * _payloadSize;
}

@property (nonatomic, copy) NSArray *payloadCertificatePinningIdentifiers;
@property (nonatomic, copy) NSString *payloadContentType;
@property (nonatomic, copy) NSString *payloadDataURL;
@property (nonatomic, copy) NSString *payloadHashSHA256;
@property (nonatomic, copy) NSNumber *payloadSize;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4;
+ (id)buildWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 withCertificatePinningIdentifiers:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadCertificatePinningIdentifiers;
- (id)payloadContentType;
- (id)payloadDataURL;
- (id)payloadHashSHA256;
- (id)payloadSize;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCertificatePinningIdentifiers:(id)arg1;
- (void)setPayloadContentType:(id)arg1;
- (void)setPayloadDataURL:(id)arg1;
- (void)setPayloadHashSHA256:(id)arg1;
- (void)setPayloadSize:(id)arg1;

@end
