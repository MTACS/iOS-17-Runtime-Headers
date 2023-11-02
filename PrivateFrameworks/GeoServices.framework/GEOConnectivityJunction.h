
@interface GEOConnectivityJunction : NSObject {
    struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; } * _junction;
}

@property (nonatomic, readonly) unsigned int pointsOnRoadCount;
@property (nonatomic, readonly) unsigned int pointsOnRoadIndex;

- (id)init:(struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)arg1;
- (unsigned int)pointsOnRoadCount;
- (unsigned int)pointsOnRoadIndex;

@end
