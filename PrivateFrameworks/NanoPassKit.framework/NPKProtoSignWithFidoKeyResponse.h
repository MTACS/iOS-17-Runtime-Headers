
@interface NPKProtoSignWithFidoKeyResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _fidoAttestation;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, retain) NSData *fidoAttestation;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasFidoAttestation;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (id)fidoAttestation;
- (bool)hasErrorData;
- (bool)hasFidoAttestation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setFidoAttestation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
