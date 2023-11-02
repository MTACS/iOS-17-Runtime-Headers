
@interface GEOLogMsgStateMuninResource : PBCodable <NSCopying> {
    NSString * _assetBucket;
    struct { 
        unsigned int has_levelOfDetail : 1; 
    }  _flags;
    unsigned int  _levelOfDetail;
}

@property (nonatomic, retain) NSString *assetBucket;
@property (nonatomic, readonly) bool hasAssetBucket;
@property (nonatomic) bool hasLevelOfDetail;
@property (nonatomic) unsigned int levelOfDetail;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)assetBucket;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetBucket;
- (bool)hasLevelOfDetail;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)levelOfDetail;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssetBucket:(id)arg1;
- (void)setHasLevelOfDetail:(bool)arg1;
- (void)setLevelOfDetail:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
