
@interface GEOTransitLink : NSObject {
    GEOVectorTile * _containingTile;
    void * _transitLink;
}

@property (nonatomic, readonly) struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*collapsedNodesIDRange;
@property (nonatomic, readonly) struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*collapsedNodesIndexRange;
@property (nonatomic, readonly) GEOVectorTile *containingTile;
@property (nonatomic, readonly) struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*fromJunction;
@property (nonatomic, readonly) unsigned long long fromNodeID;
@property (nonatomic, readonly) struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*originalNodeIDPointerIndexRange;
@property (nonatomic, readonly) unsigned int sectionCount;
@property (nonatomic, readonly) unsigned int sectionOffset;
@property (nonatomic, readonly) struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*shieldIndexRange;
@property (nonatomic, readonly) struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*toJunction;
@property (nonatomic, readonly) unsigned long long toNodeID;
@property (nonatomic, readonly) struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*transitIndexRange;
@property (nonatomic, readonly) struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*travelTimeIndexRange;

- (void).cxx_destruct;
- (struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*)collapsedNodesIDRange;
- (struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*)collapsedNodesIndexRange;
- (id)containingTile;
- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)fromJunction;
- (unsigned long long)fromNodeID;
- (void*)get;
- (id)init:(void*)arg1 withVectorTile:(id)arg2;
- (struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*)originalNodeIDPointerIndexRange;
- (unsigned int)sectionCount;
- (unsigned int)sectionOffset;
- (struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*)shieldIndexRange;
- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)toJunction;
- (unsigned long long)toNodeID;
- (struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*)transitIndexRange;
- (struct GeoCodecsRange { unsigned long long x1; unsigned long long x2; }*)travelTimeIndexRange;

@end
