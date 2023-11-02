
@interface ChannelActivityUpdate : PBCodable <NSCopying> {
    unsigned long long  _currentVersion;
    NSData * _encryptedUpdatePayload;
    struct { 
        unsigned int currentVersion : 1; 
        unsigned int prevVersion : 1; 
    }  _has;
    unsigned long long  _prevVersion;
}

@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic, retain) NSData *encryptedUpdatePayload;
@property (nonatomic) bool hasCurrentVersion;
@property (nonatomic, readonly) bool hasEncryptedUpdatePayload;
@property (nonatomic) bool hasPrevVersion;
@property (nonatomic) unsigned long long prevVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedUpdatePayload;
- (bool)hasCurrentVersion;
- (bool)hasEncryptedUpdatePayload;
- (bool)hasPrevVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)prevVersion;
- (bool)readFrom:(id)arg1;
- (void)setCurrentVersion:(unsigned long long)arg1;
- (void)setEncryptedUpdatePayload:(id)arg1;
- (void)setHasCurrentVersion:(bool)arg1;
- (void)setHasPrevVersion:(bool)arg1;
- (void)setPrevVersion:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
