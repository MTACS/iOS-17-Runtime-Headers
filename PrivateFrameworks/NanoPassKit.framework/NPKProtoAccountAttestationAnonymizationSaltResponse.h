
@interface NPKProtoAccountAttestationAnonymizationSaltResponse : PBCodable <NSCopying> {
    NSString * _anonymizationSalt;
    NSData * _errorData;
}

@property (nonatomic, retain) NSString *anonymizationSalt;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasAnonymizationSalt;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (id)anonymizationSalt;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasAnonymizationSalt;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymizationSalt:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
