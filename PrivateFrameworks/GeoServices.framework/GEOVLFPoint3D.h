
@interface GEOVLFPoint3D : PBCodable <NSCopying> {
    struct { 
        unsigned int has_x : 1; 
        unsigned int has_y : 1; 
        unsigned int has_z : 1; 
    }  _flags;
    float  _x;
    float  _y;
    float  _z;
}

@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasZ;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;

+ (bool)isValid:(id)arg1;

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
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (void)setZ:(float)arg1;
- (void)writeTo:(id)arg1;
- (float)x;
- (float)y;
- (float)z;

@end
