
@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad> {
    struct shared_ptr<geo::MapEdgeRoad> { 
        struct MapEdgeRoad {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _roadEdge;
    unsigned long long  _roadID;
}

@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int formOfWay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *internalRoadName;
@property (nonatomic, readonly) bool isBridge;
@property (nonatomic, readonly) bool isRail;
@property (nonatomic, readonly) bool isTunnel;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) int rampType;
@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) unsigned long long roadID;
@property (nonatomic, readonly) double roadWidth;
@property (nonatomic, readonly) unsigned long long speedLimit;
@property (nonatomic, readonly) bool speedLimitIsMPH;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int travelDirection;

+ (double)estimatedWidthForRoad:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)findRoadsFrom:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findRoadsFromNextIntersection:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findRoadsFromPreviousIntersection:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findRoadsToNextIntersection:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findRoadsToPreviousIntersection:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (int)formOfWay;
- (id)initWithMap:(id)arg1 roadEdge:(struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)internalRoadName;
- (bool)isBridge;
- (bool)isRail;
- (bool)isTunnel;
- (int)rampType;
- (int)roadClass;
- (void)roadEdgesWithHandler:(id /* block */)arg1;
- (void)roadFeaturesWithHandler:(id /* block */)arg1;
- (unsigned long long)roadID;
- (double)roadWidth;
- (unsigned long long)speedLimit;
- (bool)speedLimitIsMPH;
- (id)tileKeys;
- (int)travelDirection;

@end
