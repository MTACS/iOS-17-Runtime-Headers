
@interface GEOCompanionRouteContext : PBCodable <NSCopying> {
    struct { 
        unsigned int has_origin : 1; 
        unsigned int has_timestamp : 1; 
    }  _flags;
    int  _origin;
    unsigned int  _timestamp;
}

@property (nonatomic) bool hasOrigin;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int origin;
@property (nonatomic) unsigned int timestamp;

+ (id)context;
+ (int)defaultOrigin;
+ (bool)isValid:(id)arg1;

- (int)StringAsOrigin:(id)arg1;
- (long long)compare:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOrigin;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForeignOrigin;
- (bool)isStaleComparedToContext:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (id)simpleDescription;
- (unsigned int)timestamp;
- (void)writeTo:(id)arg1;

@end
