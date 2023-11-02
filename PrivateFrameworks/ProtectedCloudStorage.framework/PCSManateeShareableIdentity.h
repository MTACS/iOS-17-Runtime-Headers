
@interface PCSManateeShareableIdentity : PBCodable <NSCopying> {
    PCSManateePrivateKey * _encryptionPrivateKey;
    PCSManateePrivateKey * _signingPrivateKey;
}

@property (nonatomic, retain) PCSManateePrivateKey *encryptionPrivateKey;
@property (nonatomic, readonly) bool hasEncryptionPrivateKey;
@property (nonatomic, readonly) bool hasSigningPrivateKey;
@property (nonatomic, retain) PCSManateePrivateKey *signingPrivateKey;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptionPrivateKey;
- (bool)hasEncryptionPrivateKey;
- (bool)hasSigningPrivateKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptionPrivateKey:(id)arg1;
- (void)setSigningPrivateKey:(id)arg1;
- (id)signingPrivateKey;
- (void)writeTo:(id)arg1;

@end
