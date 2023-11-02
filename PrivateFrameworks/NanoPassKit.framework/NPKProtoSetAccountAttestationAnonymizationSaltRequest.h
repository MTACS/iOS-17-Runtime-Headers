
@interface NPKProtoSetAccountAttestationAnonymizationSaltRequest : PBRequest <NSCopying> {
    NSString * _anonymizationSalt;
}

@property (nonatomic, retain) NSString *anonymizationSalt;
@property (nonatomic, readonly) bool hasAnonymizationSalt;

- (void).cxx_destruct;
- (id)anonymizationSalt;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnonymizationSalt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnonymizationSalt:(id)arg1;
- (void)writeTo:(id)arg1;

@end
