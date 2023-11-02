
@interface GEOSlippyTile : PBCodable <NSCopying> {
    struct { 
        unsigned int has_x : 1; 
        unsigned int has_y : 1; 
        unsigned int has_z : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _z;
}

@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasZ;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasX;
- (bool)hasY;
- (bool)hasZ;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setHasZ:(bool)arg1;
- (void)setX:(unsigned int)arg1;
- (void)setY:(unsigned int)arg1;
- (void)setZ:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)x;
- (unsigned int)y;
- (unsigned int)z;

@end
