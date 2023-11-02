
@interface GEOMapRegion : PBCodable <NSCopying> {
    double  _eastLng;
    struct { 
        unsigned int has_eastLng : 1; 
        unsigned int has_northLat : 1; 
        unsigned int has_southLat : 1; 
        unsigned int has_westLng : 1; 
        unsigned int has_mapRegionSourceType : 1; 
    }  _flags;
    int  _mapRegionSourceType;
    double  _northLat;
    double  _southLat;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _vertexs;
    double  _westLng;
}

@property (nonatomic, readonly) double centerLat;
@property (nonatomic, readonly) double centerLng;
@property (nonatomic) double eastLng;
@property (nonatomic) bool hasEastLng;
@property (nonatomic) bool hasMapRegionSourceType;
@property (nonatomic) bool hasNorthLat;
@property (nonatomic, readonly) bool hasRectangleVertices;
@property (nonatomic) bool hasSouthLat;
@property (nonatomic) bool hasWestLng;
@property (nonatomic) int mapRegionSourceType;
@property (nonatomic) double northLat;
@property (nonatomic) double southLat;
@property (nonatomic, readonly) double spanLat;
@property (nonatomic, readonly) double spanLng;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *vertexs;
@property (nonatomic) double westLng;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_mapRegionForGEOCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)isValid:(id)arg1;
+ (Class)vertexType;

- (void).cxx_destruct;
- (int)StringAsMapRegionSourceType:(id)arg1;
- (void)addVertex:(id)arg1;
- (double)centerLat;
- (double)centerLng;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearVertexs;
- (bool)containsCoordinate:(struct { double x1; double x2; })arg1;
- (bool)containsCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)containsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)containsRegion:(id)arg1;
- (id)coordinates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eastLng;
- (bool)hasEastLng;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMapRegionSourceType;
- (bool)hasNorthLat;
- (bool)hasRectangleVertices;
- (bool)hasSouthLat;
- (bool)hasWestLng;
- (unsigned long long)hash;
- (id)initWithCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRadialPlace:(id)arg1;
- (id)intersectionsOnPolyline:(id)arg1;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)intersectsRegion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)jsonRepresentation;
- (int)mapRegionSourceType;
- (id)mapRegionSourceTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (double)northLat;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEastLng:(double)arg1;
- (void)setHasEastLng:(bool)arg1;
- (void)setHasMapRegionSourceType:(bool)arg1;
- (void)setHasNorthLat:(bool)arg1;
- (void)setHasSouthLat:(bool)arg1;
- (void)setHasWestLng:(bool)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapRegionSourceType:(int)arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setVertexs:(id)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)spanLat;
- (double)spanLng;
- (id)unknownFields;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (id)vertexs;
- (unsigned long long)vertexsCount;
- (double)westLng;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)_initWithCircularRegion:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)arg1;
+ (id)_mapkit_mapRegionForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_mapkit_mapRegionForLatitude:(double)arg1 longitude:(double)arg2 latSpan:(double)arg3 longSpan:(double)arg4;

@end
