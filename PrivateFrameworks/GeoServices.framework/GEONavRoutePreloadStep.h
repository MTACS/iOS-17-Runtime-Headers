
@interface GEONavRoutePreloadStep : NSObject {
    GEOMapAssetMetadataFetcher * _assetMetadataFetcher;
    GEOApplicationAuditToken * _auditToken;
    unsigned int  _errorCount;
    unsigned int  _lifetimeErrorCount;
    unsigned char  _metrosSupported;
    unsigned long long  _parentSignpostID;
    unsigned long long  _signpostID;
    GEOSPRMetroAvailabilityFetcher * _sprMetrosAvailabilityFetcher;
    GEOTileKeyList * assetMetadataTiles;
    unsigned int  bytesLoadedFromNetwork;
    int  cellularCoverage;
    struct { 
        double latitude; 
        double longitude; 
    }  coord;
    double  endTime;
    unsigned int  generation;
    unsigned int  loaded;
    unsigned int  loading;
    unsigned int  nearManeuver;
    double  routeIdx;
    double  startTime;
    NSMutableDictionary * wantedTiles;
}

@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasLifetimeError;

- (void).cxx_destruct;
- (void)_loadAssetMetadataRequireWiFi:(bool)arg1 unsuccessfulKeysAccumulator:(id)arg2 errorsAccumulator:(id)arg3 queue:(id)arg4 willLoadHandler:(id /* block */)arg5 progressHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)_loadTiles:(id)arg1 requireWiFi:(bool)arg2 unsuccessfulKeysAccumulator:(id)arg3 errorsAccumulator:(id)arg4 queue:(id)arg5 group:(id)arg6 willLoadHandler:(id /* block */)arg7 progressHandler:(id /* block */)arg8;
- (void)cancel;
- (id)description;
- (void)encounteredErrors:(id)arg1;
- (bool)hasError;
- (bool)hasLifetimeError;
- (id)init;
- (id)initWithAuditToken:(id)arg1 highZoomMetrosAvailabilityFetcher:(id)arg2 assetMetadataFetcher:(id)arg3 preloaderSignpostID:(unsigned long long)arg4;
- (void)loadWithCallbackQueue:(id)arg1 requireWiFi:(bool)arg2 willLoadHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4 finishedHandler:(id /* block */)arg5 errorHandler:(id /* block */)arg6;
- (double)networkDataRateKB;
- (bool)okToLoad;
- (void)resetErrors;

@end
