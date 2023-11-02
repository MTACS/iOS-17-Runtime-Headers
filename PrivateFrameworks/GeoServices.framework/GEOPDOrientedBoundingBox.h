
@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying> {
    double  _depth;
    struct { 
        unsigned int has_depth : 1; 
        unsigned int has_height : 1; 
        unsigned int has_width : 1; 
    }  _flags;
    double  _height;
    GEOPDOrientedPosition * _position;
    double  _width;
}

@property (nonatomic) double depth;
@property (nonatomic) bool hasDepth;
@property (nonatomic) bool hasHeight;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic) bool hasWidth;
@property (nonatomic) double height;
@property (nonatomic, retain) GEOPDOrientedPosition *position;
@property (nonatomic) double width;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)depth;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDepth;
- (bool)hasHeight;
- (bool)hasPosition;
- (bool)hasWidth;
- (unsigned long long)hash;
- (double)height;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)position;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDepth:(double)arg1;
- (void)setHasDepth:(bool)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setPosition:(id)arg1;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)writeTo:(id)arg1;

@end
