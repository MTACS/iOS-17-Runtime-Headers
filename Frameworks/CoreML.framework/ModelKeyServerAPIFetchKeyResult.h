
@interface ModelKeyServerAPIFetchKeyResult : PBCodable <NSCopying> {
    struct { 
        unsigned int key : 1; 
    }  _has;
    int  _key;
    NSString * _keyId;
    NSString * _modelName;
    ModelKeyServerAPIRawKey * _rawKey;
    ModelKeyServerAPISignedKey * _signedKey;
    NSString * _teamId;
}

@property (nonatomic) bool hasKey;
@property (nonatomic, readonly) bool hasKeyId;
@property (nonatomic, readonly) bool hasModelName;
@property (nonatomic, readonly) bool hasRawKey;
@property (nonatomic, readonly) bool hasSignedKey;
@property (nonatomic, readonly) bool hasTeamId;
@property (nonatomic) int key;
@property (nonatomic, retain) NSString *keyId;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic, retain) ModelKeyServerAPIRawKey *rawKey;
@property (nonatomic, retain) ModelKeyServerAPISignedKey *signedKey;
@property (nonatomic, retain) NSString *teamId;

- (void).cxx_destruct;
- (int)StringAsKey:(id)arg1;
- (void)clearOneofValuesForKey;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasKeyId;
- (bool)hasModelName;
- (bool)hasRawKey;
- (bool)hasSignedKey;
- (bool)hasTeamId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)key;
- (id)keyAsString:(int)arg1;
- (id)keyId;
- (void)mergeFrom:(id)arg1;
- (id)modelName;
- (id)rawKey;
- (bool)readFrom:(id)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setKey:(int)arg1;
- (void)setKeyId:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setRawKey:(id)arg1;
- (void)setSignedKey:(id)arg1;
- (void)setTeamId:(id)arg1;
- (id)signedKey;
- (id)teamId;
- (void)writeTo:(id)arg1;

@end
