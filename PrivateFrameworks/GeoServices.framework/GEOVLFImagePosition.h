
@interface GEOVLFImagePosition : PBCodable <NSCopying> {
    struct { 
        unsigned int has_x : 1; 
        unsigned int has_y : 1; 
    }  _flags;
    float  _x;
    float  _y;
}

@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) float x;
@property (nonatomic) float y;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasX;
- (bool)hasY;
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
- (void)setX:(float)arg1;
- (void)setY:(float)arg1;
- (void)writeTo:(id)arg1;
- (float)x;
- (float)y;

@end
