
@interface GEOPathMatcher : NSObject {
    GEOApplicationAuditToken * _auditToken;
    struct vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> { 
        struct GEOPolylineCoordinateRange {} *__begin_; 
        struct GEOPolylineCoordinateRange {} *__end_; 
        struct __compressed_pair<GEOPolylineCoordinateRange *, std::allocator<GEOPolylineCoordinateRange>> { 
            struct GEOPolylineCoordinateRange {} *__value_; 
        } __end_cap_; 
    }  _failedRanges;
    bool  _forceSync;
    NSArray * _internalInfos;
    geo_isolater * _internalInfosIsolater;
    NSString * _loggingIdentifier;
    NSArray * _matchedSegments;
    geo_isolater * _matchedSegmentsIsolater;
    double  _preloadDistance;
    NSObject<OS_dispatch_queue> * _queue;
    GEOComposedRoute * _route;
    bool  _shouldDropDivergingSegments;
    bool  _shouldSaveInternalInfo;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic) bool forceSync;
@property (nonatomic) double preloadDistance;
@property (nonatomic) bool shouldDropDivergingSegments;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addCoordinatesFromRoad:(id)arg1 routeCoordinates:(id)arg2 offsetFromStartOfPath:(double)arg3 errorScale:(double)arg4 offsetFromPathToCurrentPoint:(double*)arg5 outCoordinates:(void*)arg6;
- (id)_cachedSegments;
- (void)_callbackWithMatchedSegments:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2 handler:(id /* block */)arg3 callbackQueue:(id)arg4;
- (void)_clearZilchSnappedPathsForRoute:(id)arg1;
- (struct RoadNetworkPath<GEOPathMatcherRoadKey> { double x1; double x2; struct vector<GEOPathMatcherRoadKey, std::allocator<GEOPathMatcherRoadKey>> { struct GEOPathMatcherRoadKey {} *x_3_1_1; struct GEOPathMatcherRoadKey {} *x_3_1_2; struct __compressed_pair<GEOPathMatcherRoadKey *, std::allocator<GEOPathMatcherRoadKey>> { struct GEOPathMatcherRoadKey {} *x_3_2_1; } x_3_1_3; } x3; })_decodePathForRoute:(id)arg1 supportPoints:(id)arg2 roadNetwork:(const void*)arg3 internalInfo:(id)arg4;
- (bool)_isFailedRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (bool)_isRangeValid:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_matchRouteOnQueueForRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1 finishedHandler:(id /* block */)arg2 callbackQueue:(id)arg3;
- (id)_matchedPathSegmentsForPath:(const void*)arg1 routeCoordinates:(id)arg2 start:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 end:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4 roadLookup:(id)arg5;
- (id)_matchedSegmentsInRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1 ofMatchedSegments:(id)arg2;
- (id)_roadLookupForRoadNetwork:(const void*)arg1;
- (id)_supportPointForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 isRangeStart:(bool)arg2;
- (id)_supportPointsForRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })_uncachedCoordinateRangeForStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 end:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (id)_updateCacheWithNewSegments:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_updateSupportPointsForNoMatchRanges:(id)arg1 decodeRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })_validateInputRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1 finishedHandler:(id /* block */)arg2 callbackQueue:(id)arg3;
- (bool)_verifySegmentDistanceFromRoute:(id)arg1 segmentIndex:(long long)arg2 requestedPathRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)_zilchMatchedSegmentsForRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_zilchMatchedSegmentsForRoute:(id)arg1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg2 handler:(id /* block */)arg3;
- (id)auditToken;
- (void)dealloc;
- (bool)forceSync;
- (id)initForTesting;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2 loggingIdentifier:(id)arg3;
- (id)internalInfos;
- (void)matchRouteFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 finishedHandler:(id /* block */)arg3;
- (void)matchRouteFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 finishedHandler:(id /* block */)arg3 callbackQueue:(id)arg4;
- (id)matchedSegmentsFromStart:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toEnd:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (double)preloadDistance;
- (void)setForceSync:(bool)arg1;
- (void)setInternalInfos:(id)arg1;
- (void)setPreloadDistance:(double)arg1;
- (void)setShouldDropDivergingSegments:(bool)arg1;
- (void)setShouldSaveInternalInfo:(bool)arg1;
- (bool)shouldDropDivergingSegments;
- (bool)shouldSaveInternalInfo;

@end
