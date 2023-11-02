
@interface GEOOfflineDataAccess : NSObject {
    <GEOOfflineDataAccessor> * _accessor;
    NSArray * _fullyDownloadedRegions;
    int  _fullyDownloadedSubscriptionsChangedToken;
    geo_isolater * _isolation;
}

+ (void)_setSharedInstanceUseLocalPersistence:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_resetFullyDownloadedRegions;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)getAvailableKeysForLayer:(unsigned int)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getFullyDownloadedRegionsWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)getOfflineVersionMetadataWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)hasDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (bool)hasDataForKey:(id)arg1 error:(id*)arg2;
- (id)initWithAccessor:(id)arg1;
- (id)offlineTileMetadataWithError:(id*)arg1;

@end
