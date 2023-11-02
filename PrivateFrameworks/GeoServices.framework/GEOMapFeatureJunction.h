
@interface GEOMapFeatureJunction : NSObject <NSCopying> {
    struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; } * _connectivityJunction;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    bool  _isOnTileBorder;
    GEOVectorTile * _tile;
    struct { 
        float x; 
        float y; 
    }  _tilePoint;
}

@property (nonatomic, readonly) struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*connectivityJunction;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) bool isOnTileBorder;
@property (nonatomic, readonly) unsigned long long junctionIndex;
@property (nonatomic, readonly) unsigned long long primaryID;
@property (nonatomic, readonly) unsigned long long secondaryID;
@property (nonatomic, readonly) GEOVectorTile *tile;
@property (nonatomic, readonly) struct { float x1; float x2; } tilePoint;

+ (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)connectivityJunctionForRoadFeature:(id)arg1 startJunction:(bool)arg2 outError:(out id*)arg3;
+ (bool)isPointOnTileBorder:(struct GeoCodecsVectorTilePoint { float x1; float x2; }*)arg1;
+ (id)junctionForRoadFeature:(id)arg1 startJunction:(bool)arg2;

- (void).cxx_destruct;
- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)connectivityJunction;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isOnTileBorder;
- (unsigned long long)junctionIndex;
- (unsigned long long)primaryID;
- (unsigned long long)secondaryID;
- (id)tile;
- (struct { float x1; float x2; })tilePoint;

@end
