
@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying> {
    CKDPCodeFunctionInvokeResponseAttestationResponse * _attestationResponse;
    NSData * _serializedResult;
}

@property (nonatomic, retain) CKDPCodeFunctionInvokeResponseAttestationResponse *attestationResponse;
@property (nonatomic, readonly) bool hasAttestationResponse;
@property (nonatomic, readonly) bool hasSerializedResult;
@property (nonatomic, retain) NSData *serializedResult;

- (void).cxx_destruct;
- (id)attestationResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttestationResponse;
- (bool)hasSerializedResult;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedResult;
- (void)setAttestationResponse:(id)arg1;
- (void)setSerializedResult:(id)arg1;
- (void)writeTo:(id)arg1;

@end
