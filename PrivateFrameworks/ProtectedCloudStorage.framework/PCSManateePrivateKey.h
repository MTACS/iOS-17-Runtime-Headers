
@interface PCSManateePrivateKey : PBCodable <NSCopying> {
    NSData * _privateKey;
    NSData * _publicKeyInfo;
}

@property (nonatomic, readonly) bool hasPrivateKey;
@property (nonatomic, readonly) bool hasPublicKeyInfo;
@property (nonatomic, retain) NSData *privateKey;
@property (nonatomic, retain) NSData *publicKeyInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrivateKey;
- (bool)hasPublicKeyInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)privateKey;
- (id)publicKeyInfo;
- (bool)readFrom:(id)arg1;
- (void)setPrivateKey:(id)arg1;
- (void)setPublicKeyInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
