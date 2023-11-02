
@interface NPKIDVRemoteDeviceProtoEstablishPrearmTrustV2Response : PBCodable <NSCopying> {
    NSData * _attestationData;
    NSData * _errorData;
}

@property (nonatomic, retain) NSData *attestationData;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasAttestationData;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (id)attestationData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasAttestationData;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttestationData:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
