
@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy> {
    bool  _anyErrors;
    GEOMapAssetMetadataFetcher * _assetMetadataFetcher;
    double  _beginTime;
    <GEORoutePreloadCamera> * _camera;
    long long  _currentLoadingSteps;
    double  _currentRoutePosition;
    int  _downloadState;
    bool  _enabled;
    bool  _finished;
    bool  _forceDisableMetros;
    NSObject<OS_dispatch_source> * _geodCrashTimer;
    bool  _hadEnoughTilesToDisableNetworking;
    double  _maneuverSizeInMeters;
    double  _mostRecentErrorTime;
    GEORoutePreloader * _preloader;
    GEOComposedRoute * _route;
    bool  _shouldLoadAssets;
    unsigned long long  _signpostID;
    GEOSPRMetroAvailabilityFetcher * _sprAvailabilityFetcher;
    unsigned int  _stepGeneration;
    double  _stepSizeInMeters;
    NSMutableArray * _steps;
    NSMutableDictionary * _tileSetStyles;
    unsigned long long  _tilesLoadedFromNetwork;
    GEOTileKeyList * _tilesLoadingOrLoaded;
    GEOTileKeyList * _tilesReceived;
    bool  _useCellularCoverage;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) <GEORoutePreloadCamera> *camera;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceDisableMetros;
@property (readonly) unsigned long long hash;
@property (nonatomic) GEORoutePreloader *preloader;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic) bool shouldLoadAssets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accumulateSteps;
- (void)_cancelAllSteps;
- (void)_cancelRequestsBehindCurrentPosition;
- (void)_cancelStep:(id)arg1;
- (void)_geodCrashed;
- (void)_loadStep:(id)arg1 requireWiFi:(bool)arg2;
- (void)_performNextRequests;
- (void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)arg1 firstErrorStepIndex:(long long)arg2 firstLoadStepIndex:(long long)arg3 loadStepsAhead:(long long)arg4 loadStepsAheadIfNoWiFi:(long long)arg5;
- (void)_resetErrCounts;
- (void)_retryFailuresWithErrorsReset:(bool)arg1;
- (void)_start;
- (void)_stop;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3 restrictions:(unsigned long long)arg4;
- (id)camera;
- (bool)forceDisableMetros;
- (id)init;
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)performTearDown;
- (id)preloader;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (id)route;
- (void)setCamera:(id)arg1;
- (void)setForceDisableMetros:(bool)arg1;
- (void)setPreloader:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setShouldLoadAssets:(bool)arg1;
- (bool)shouldLoadAssets;
- (void)start;
- (void)stop;
- (void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
- (void)updateWithRouteMatch:(id)arg1;

@end
