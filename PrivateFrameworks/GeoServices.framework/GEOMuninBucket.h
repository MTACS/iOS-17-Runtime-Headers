
@interface GEOMuninBucket : PBCodable <NSCopying> {
    unsigned int  _bucketID;
    NSString * _bucketURL;
    struct { 
        unsigned int has_bucketID : 1; 
        unsigned int has_lodLevel : 1; 
    }  _flags;
    unsigned int  _lodLevel;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int bucketID;
@property (nonatomic, retain) NSString *bucketURL;
@property (nonatomic) bool hasBucketID;
@property (nonatomic, readonly) bool hasBucketURL;
@property (nonatomic) bool hasLodLevel;
@property (nonatomic) unsigned int lodLevel;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)bucketID;
- (id)bucketURL;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketID;
- (bool)hasBucketURL;
- (bool)hasLodLevel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)lodLevel;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketID:(unsigned int)arg1;
- (void)setBucketURL:(id)arg1;
- (void)setHasBucketID:(bool)arg1;
- (void)setHasLodLevel:(bool)arg1;
- (void)setLodLevel:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
