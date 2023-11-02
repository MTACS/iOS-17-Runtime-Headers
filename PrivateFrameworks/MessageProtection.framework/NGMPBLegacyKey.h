
@interface NGMPBLegacyKey : PBCodable <NSCopying> {
    NSData * _encryptionKey;
    NSData * _signingKey;
}

@property (nonatomic, retain) NSData *encryptionKey;
@property (nonatomic, retain) NSData *signingKey;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptionKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setSigningKey:(id)arg1;
- (id)signingKey;
- (void)writeTo:(id)arg1;

@end
