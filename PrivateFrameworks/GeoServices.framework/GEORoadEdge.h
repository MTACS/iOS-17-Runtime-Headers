
@interface GEORoadEdge : NSObject <NSCopying> {
    struct GeoCodecsRoadEdge { 
        struct GeoCodecsMultiSectionFeature {} *road; 
        unsigned long long vertexIndexA; 
        unsigned long long vertexIndexB; 
        unsigned long long junctionIndexA; 
        unsigned long long junctionIndexB; 
        struct GeoCodecsConnectivityJunction {} *junctionA; 
        struct GeoCodecsConnectivityJunction {} *junctionB; 
    }  _edge;
    GEOMultiSectionFeature * _feature;
}

@property (nonatomic, readonly) struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*junctionA;
@property (nonatomic, readonly) struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*junctionB;
@property (nonatomic, readonly) unsigned long long junctionIndexA;
@property (nonatomic, readonly) unsigned long long junctionIndexB;
@property (nonatomic, readonly) GEOMultiSectionFeature *road;
@property (nonatomic, readonly) unsigned long long vertexIndexA;
@property (nonatomic, readonly) unsigned long long vertexIndexB;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct GeoCodecsConnectivityJunction {} *x6; struct GeoCodecsConnectivityJunction {} *x7; }*)get;
- (id)init:(struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature {} *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct GeoCodecsConnectivityJunction {} *x6; struct GeoCodecsConnectivityJunction {} *x7; }*)arg1 withMultiSectionFeatureInterface:(id)arg2;
- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)junctionA;
- (struct GeoCodecsConnectivityJunction { unsigned int x1; unsigned int x2; struct GeoCodecsPointFeature {} *x3; unsigned long long x4; unsigned long long x5; }*)junctionB;
- (unsigned long long)junctionIndexA;
- (unsigned long long)junctionIndexB;
- (id)road;
- (void)setMultiSectionFeature:(id)arg1;
- (unsigned long long)vertexIndexA;
- (unsigned long long)vertexIndexB;

@end
