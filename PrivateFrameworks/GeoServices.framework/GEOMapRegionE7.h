
@interface GEOMapRegionE7 : PBCodable <NSCopying> {
    int  _eastLngE7;
    struct { 
        unsigned int has_eastLngE7 : 1; 
        unsigned int has_northLatE7 : 1; 
        unsigned int has_southLatE7 : 1; 
        unsigned int has_westLngE7 : 1; 
    }  _flags;
    int  _northLatE7;
    int  _southLatE7;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _vertexE7s;
    int  _westLngE7;
}

@property (nonatomic, readonly) int centerLatE7;
@property (nonatomic, readonly) int centerLngE7;
@property (nonatomic) int eastLngE7;
@property (nonatomic) bool hasEastLngE7;
@property (nonatomic) bool hasNorthLatE7;
@property (nonatomic, readonly) bool hasRectangleVertices;
@property (nonatomic) bool hasSouthLatE7;
@property (nonatomic) bool hasWestLngE7;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic) int northLatE7;
@property (nonatomic) int southLatE7;
@property (nonatomic, readonly) int spanLatE7;
@property (nonatomic, readonly) int spanLngE7;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *vertexE7s;
@property (nonatomic) int westLngE7;

+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)isValid:(id)arg1;
+ (Class)vertexE7Type;

- (void).cxx_destruct;
- (void)addVertexE7:(id)arg1;
- (int)centerLatE7;
- (int)centerLngE7;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearVertexE7s;
- (id)coordinatesE7;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eastLngE7;
- (bool)hasEastLngE7;
- (bool)hasNorthLatE7;
- (bool)hasRectangleVertices;
- (bool)hasSouthLatE7;
- (bool)hasWestLngE7;
- (unsigned long long)hash;
- (id)initWithCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMapRegion:(id)arg1;
- (id)initWithRadialPlace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)jsonRepresentation;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (int)northLatE7;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEastLngE7:(int)arg1;
- (void)setHasEastLngE7:(bool)arg1;
- (void)setHasNorthLatE7:(bool)arg1;
- (void)setHasSouthLatE7:(bool)arg1;
- (void)setHasWestLngE7:(bool)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNorthLatE7:(int)arg1;
- (void)setSouthLatE7:(int)arg1;
- (void)setVertexE7s:(id)arg1;
- (void)setWestLngE7:(int)arg1;
- (int)southLatE7;
- (int)spanLatE7;
- (int)spanLngE7;
- (id)unknownFields;
- (id)vertexE7AtIndex:(unsigned long long)arg1;
- (id)vertexE7s;
- (unsigned long long)vertexE7sCount;
- (int)westLngE7;
- (void)writeTo:(id)arg1;

@end
