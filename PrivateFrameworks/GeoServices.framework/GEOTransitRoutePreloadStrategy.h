
@interface GEOTransitRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {
    double  _currentRoutePosition;
    int  _downloadState;
    bool  _enabled;
    double  _endRoutePosition;
    NSObject<OS_dispatch_source> * _geodCrashTimer;
    unsigned long long  _indexOfLastStepWithPreparedBatch;
    GEORoutePreloader * _preloader;
    double  _radialDistanceToImplicateTilesMeters;
    _GEOTransitRoutePreloaderData * _reserved;
    GEOComposedRoute * _route;
    bool  _shouldPreloadEntireRoute;
    double  _stepSizeInMeters;
    GEOTransitSuggestedRoute * _suggestedRoute;
    NSMutableDictionary * _tileSetStyles;
    long long  _tilesRequested;
    GEOMapServiceTraits * _traits;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) GEORoutePreloader *preloader;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAllBatches;
- (void)_geodCrashed;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1;
- (void)_loadPlacecardsForBatch:(id)arg1;
- (void)_loadTilesForBatch:(id)arg1;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)arg1;
- (void)_makeBatchesForSteps:(id)arg1;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1;
- (void)_makePreloadBatchForSteps:(id)arg1;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned int)arg2;
- (void)_performNextRequests;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_polylineCoordinateForDouble:(double)arg1;
- (void)_processBatches;
- (void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2;
- (void)_resetErrorCounts;
- (void)_retryFailuresWithErrorsReset:(bool)arg1;
- (void)_start;
- (void)_stop;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (id)init;
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)performTearDown;
- (id)preloader;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (id)route;
- (void)setPreloader:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setShouldPreloadEntireRoute:(bool)arg1;
- (void)setTraits:(id)arg1;
- (void)start;
- (void)stop;
- (long long)tilesRequested;
- (void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
- (void)updateWithRouteMatch:(id)arg1;

@end
