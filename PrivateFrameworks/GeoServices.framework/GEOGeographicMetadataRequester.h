
@interface GEOGeographicMetadataRequester : NSObject {
    <GEOGeographicMetadataFetcher> * _fetcher;
    NSError * _lastError;
    GEOLocation * _location;
    id /* block */  _processBlock;
    unsigned long long  _type;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) id /* block */ processBlock;

+ (void)_fetchDataForLocation:(id)arg1 type:(unsigned long long)arg2 mcc:(unsigned short)arg3 mnc:(unsigned short)arg4 retryCount:(unsigned long long)arg5 responseQueue:(id)arg6 responseBlock:(id /* block */)arg7;
+ (void)_fetchPossibleTerritoriesForLocation:(id)arg1 retryCount:(unsigned long long)arg2 responseQueue:(id)arg3 responseBlock:(id /* block */)arg4;
+ (void)fetchDataForLocation:(id)arg1 type:(unsigned long long)arg2 responseQueue:(id)arg3 responseBlock:(id /* block */)arg4;
+ (void)fetchPossibleTerritoriesForLocation:(id)arg1 responseQueue:(id)arg2 responseBlock:(id /* block */)arg3;
+ (void)fetchSmartDataModeDataForLocation:(id)arg1 mcc:(unsigned short)arg2 mnc:(unsigned short)arg3 responseQueue:(id)arg4 responseBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_doSimpleLookup:(id)arg1 rootQuadKey:(unsigned long long)arg2 error:(id*)arg3;
- (id)_doTerritoryRegulatoryLookup:(id)arg1 error:(id*)arg2;
- (void)_fetch;
- (void)_start;
- (id)initWithLocation:(id)arg1 type:(unsigned long long)arg2 mcc:(unsigned short)arg3 mnc:(unsigned short)arg4;
- (id /* block */)processBlock;
- (void)reportCorrupt:(id)arg1;
- (void)setProcessBlock:(id /* block */)arg1;

@end
