
@interface GEOMapFeatureTransitAccessPoint : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    void * _feature;
    struct shared_ptr<geo::codec::VectorTile> { 
        struct VectorTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _retainedTile;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) void*feature;
@property (nonatomic, readonly) bool isEntrance;
@property (nonatomic, readonly) bool isExit;
@property (nonatomic, readonly) double radiusMeters;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (void*)feature;
- (id)initWithFeature:(void*)arg1;
- (bool)isEntrance;
- (bool)isExit;
- (double)radiusMeters;

@end
