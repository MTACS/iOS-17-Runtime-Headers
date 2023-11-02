
@interface VKNavContext : NSObject {
    struct vector<AdditionalRouteInfo, std::allocator<AdditionalRouteInfo>> { 
        struct AdditionalRouteInfo {} *__begin_; 
        struct AdditionalRouteInfo {} *__end_; 
        struct __compressed_pair<AdditionalRouteInfo *, std::allocator<AdditionalRouteInfo>> { 
            struct AdditionalRouteInfo {} *__value_; 
        } __end_cap_; 
    }  _additionalRoutesToFrame;
    unsigned long long  _currentStepIndex;
    NSArray * _groupedManeuverCounts;
    unsigned long long  _navCameraHeadingOverride;
    unsigned long long  _navigationCameraHeadingOverride;
    NSHashTable * _observers;
    struct vector<AdditionalPointInfo, std::allocator<AdditionalPointInfo>> { 
        struct AdditionalPointInfo {} *__begin_; 
        struct AdditionalPointInfo {} *__end_; 
        struct __compressed_pair<AdditionalPointInfo *, std::allocator<AdditionalPointInfo>> { 
            struct AdditionalPointInfo {} *__value_; 
        } __end_cap_; 
    }  _pointsToFrame;
    GEOComposedRoute * _route;
    GEORouteMatch * _routeMatch;
}

@property (nonatomic) unsigned long long currentStepIndex;
@property (nonatomic, readonly) unsigned long long groupedManeuverCount;
@property (nonatomic, copy) NSArray *groupedManeuverCounts;
@property (nonatomic) unsigned long long navigationCameraHeadingOverride;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, retain) GEORouteMatch *routeMatch;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_notifyObserversStateChanged;
- (void)addObserver:(id)arg1;
- (void)addPointToFrame:(struct { double x1; double x2; double x3; })arg1 ofType:(unsigned long long)arg2;
- (void)addRouteToFrame:(id)arg1 divergenceCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 convergenceCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3;
- (void)clearAdditionalRoutesToFrame;
- (void)clearPointsToFrame;
- (void)clearPointsToFrameOfType:(unsigned long long)arg1;
- (unsigned long long)currentStepIndex;
- (void)enumerateAdditionalRoutesToFrameUsingBlock:(id /* block */)arg1;
- (void)enumeratePointsToFrameOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePointsToFrameUsingBlock:(id /* block */)arg1;
- (unsigned long long)groupedManeuverCount;
- (id)groupedManeuverCounts;
- (id)init;
- (unsigned long long)navigationCameraHeadingOverride;
- (void)removeObserver:(id)arg1;
- (id)route;
- (id)routeMatch;
- (void)setCurrentStepIndex:(unsigned long long)arg1;
- (void)setGroupedManeuverCounts:(id)arg1;
- (void)setNavigationCameraHeadingOverride:(unsigned long long)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)updateWithNewRoute:(id)arg1 currentStepIndex:(unsigned long long)arg2;

@end
