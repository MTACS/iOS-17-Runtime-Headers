
@interface NPKProtoGenerateISOEncryptionCertificateForSubCredentialIdResponse : PBCodable <NSCopying> {
    NSMutableArray * _attestations;
    NSData * _authorization;
    NSData * _errorData;
}

@property (nonatomic, retain) NSMutableArray *attestations;
@property (nonatomic, retain) NSData *authorization;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasAuthorization;
@property (nonatomic, readonly) bool hasErrorData;

+ (Class)attestationType;

- (void).cxx_destruct;
- (void)addAttestation:(id)arg1;
- (id)attestationAtIndex:(unsigned long long)arg1;
- (id)attestations;
- (unsigned long long)attestationsCount;
- (id)authorization;
- (void)clearAttestations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasAuthorization;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttestations:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
