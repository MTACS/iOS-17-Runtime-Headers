
@interface GEOTileCoordinate : PBCodable <NSCopying> {
    struct { 
        unsigned int has_x : 1; 
        unsigned int has_y : 1; 
        unsigned int has_zoom : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
    int  _x;
    int  _y;
    int  _zoom;
}

@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasZoom;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int x;
@property (nonatomic) int y;
@property (nonatomic) int zoom;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasX;
- (bool)hasY;
- (bool)hasZoom;
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
- (void)setHasZoom:(bool)arg1;
- (void)setX:(int)arg1;
- (void)setY:(int)arg1;
- (void)setZoom:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (int)x;
- (int)y;
- (int)zoom;

@end
