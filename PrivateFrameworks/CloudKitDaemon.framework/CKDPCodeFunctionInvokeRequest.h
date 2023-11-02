
@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying> {
    CKDPCodeFunctionInvokeRequestAttestationRequest * _attestationRequest;
    NSString * _functionName;
    CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata * _protectedCloudComputeMetadata;
    NSData * _serializedParameters;
    NSString * _serviceName;
    CKCDPTrustedTargetCryptoMetadata * _trustedTargetCryptoMetadata;
}

@property (nonatomic, retain) CKDPCodeFunctionInvokeRequestAttestationRequest *attestationRequest;
@property (nonatomic, retain) NSString *functionName;
@property (nonatomic, readonly) bool hasAttestationRequest;
@property (nonatomic, readonly) bool hasFunctionName;
@property (nonatomic, readonly) bool hasProtectedCloudComputeMetadata;
@property (nonatomic, readonly) bool hasSerializedParameters;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, readonly) bool hasTrustedTargetCryptoMetadata;
@property (nonatomic, retain) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)attestationRequest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)functionName;
- (bool)hasAttestationRequest;
- (bool)hasFunctionName;
- (bool)hasProtectedCloudComputeMetadata;
- (bool)hasSerializedParameters;
- (bool)hasServiceName;
- (bool)hasTrustedTargetCryptoMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protectedCloudComputeMetadata;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serializedParameters;
- (id)serviceName;
- (void)setAttestationRequest:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setProtectedCloudComputeMetadata:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setTrustedTargetCryptoMetadata:(id)arg1;
- (id)trustedTargetCryptoMetadata;
- (void)writeTo:(id)arg1;

@end
