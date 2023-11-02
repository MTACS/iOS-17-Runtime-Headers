
@interface NPKProtoCreateFidoKeyResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    NSData * _fidoAttestation;
    NSData * _fidoKey;
    NSData * _keyHash;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, retain) NSData *fidoAttestation;
@property (nonatomic, retain) NSData *fidoKey;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasFidoAttestation;
@property (nonatomic, readonly) bool hasFidoKey;
@property (nonatomic, readonly) bool hasKeyHash;
@property (nonatomic, retain) NSData *keyHash;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (id)fidoAttestation;
- (id)fidoKey;
- (bool)hasErrorData;
- (bool)hasFidoAttestation;
- (bool)hasFidoKey;
- (bool)hasKeyHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyHash;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setFidoAttestation:(id)arg1;
- (void)setFidoKey:(id)arg1;
- (void)setKeyHash:(id)arg1;
- (void)writeTo:(id)arg1;

@end
