
@interface CKCodeRecordTransport : PBCodable <NSCopying> {
    int  _contents;
    NSData * _encryptedMasterKey;
    struct { 
        unsigned int contents : 1; 
    }  _has;
    NSData * _localSerialization;
    NSData * _wireSerialization;
}

@property (nonatomic) int contents;
@property (nonatomic, retain) NSData *encryptedMasterKey;
@property (nonatomic) bool hasContents;
@property (nonatomic, readonly) bool hasEncryptedMasterKey;
@property (nonatomic, readonly) bool hasLocalSerialization;
@property (nonatomic, readonly) bool hasWireSerialization;
@property (nonatomic, retain) NSData *localSerialization;
@property (nonatomic, retain) NSData *wireSerialization;

- (void).cxx_destruct;
- (int)StringAsContents:(id)arg1;
- (void)clearOneofValuesForContents;
- (int)contents;
- (id)contentsAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedMasterKey;
- (bool)hasContents;
- (bool)hasEncryptedMasterKey;
- (bool)hasLocalSerialization;
- (bool)hasWireSerialization;
- (unsigned long long)hash;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localSerialization;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContents:(int)arg1;
- (void)setEncryptedMasterKey:(id)arg1;
- (void)setHasContents:(bool)arg1;
- (void)setLocalSerialization:(id)arg1;
- (void)setWireSerialization:(id)arg1;
- (id)wireSerialization;
- (void)writeTo:(id)arg1;

@end
