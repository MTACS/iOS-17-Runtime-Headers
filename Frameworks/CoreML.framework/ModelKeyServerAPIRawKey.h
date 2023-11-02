
@interface ModelKeyServerAPIRawKey : PBCodable <NSCopying> {
    NSData * _encryptionIv;
    NSData * _encryptionKey;
}

@property (nonatomic, retain) NSData *encryptionIv;
@property (nonatomic, retain) NSData *encryptionKey;
@property (nonatomic, readonly) bool hasEncryptionIv;
@property (nonatomic, readonly) bool hasEncryptionKey;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptionIv;
- (id)encryptionKey;
- (bool)hasEncryptionIv;
- (bool)hasEncryptionKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptionIv:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
