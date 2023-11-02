
@interface GEOCacheHit : PBCodable <NSCopying> {
    unsigned int  _bytes;
    unsigned int  _count;
    struct { 
        unsigned int has_bytes : 1; 
        unsigned int has_count : 1; 
        unsigned int has_requestorType : 1; 
        unsigned int has_tileSourceType : 1; 
    }  _flags;
    int  _requestorType;
    int  _tileSourceType;
}

@property (nonatomic) unsigned int bytes;
@property (nonatomic) unsigned int count;
@property (nonatomic) bool hasBytes;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasRequestorType;
@property (nonatomic) bool hasTileSourceType;
@property (nonatomic) int requestorType;
@property (nonatomic) int tileSourceType;

+ (bool)isValid:(id)arg1;

- (int)StringAsRequestorType:(id)arg1;
- (int)StringAsTileSourceType:(id)arg1;
- (unsigned int)bytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytes;
- (bool)hasCount;
- (bool)hasRequestorType;
- (bool)hasTileSourceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestorType;
- (id)requestorTypeAsString:(int)arg1;
- (void)setBytes:(unsigned int)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasBytes:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasRequestorType:(bool)arg1;
- (void)setHasTileSourceType:(bool)arg1;
- (void)setRequestorType:(int)arg1;
- (void)setTileSourceType:(int)arg1;
- (int)tileSourceType;
- (id)tileSourceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
