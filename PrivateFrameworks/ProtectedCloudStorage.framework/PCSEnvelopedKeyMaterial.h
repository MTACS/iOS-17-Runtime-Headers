
@interface PCSEnvelopedKeyMaterial : PBCodable <NSCopying> {
    NSData * _encryptedSeed;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSData * _masterKeyId;
    int  _version;
}

@property (nonatomic, retain) NSData *encryptedSeed;
@property (nonatomic, readonly) bool hasEncryptedSeed;
@property (nonatomic, readonly) bool hasMasterKeyId;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSData *masterKeyId;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (int)StringAsVersion:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedSeed;
- (bool)hasEncryptedSeed;
- (bool)hasMasterKeyId;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)masterKeyId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptedSeed:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setMasterKeyId:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;
- (id)versionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
