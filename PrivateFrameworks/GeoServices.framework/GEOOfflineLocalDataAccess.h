
@interface GEOOfflineLocalDataAccess : NSObject <GEOOfflineDataAccessor> {
    GEOOfflineDataConfiguration * _configuration;
    GEOTileDB * _diskCache;
    NSArray * _testBundles;
    geo_isolater * _testBundlesIsolation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (void)getAvailableKeysForLayer:(unsigned int)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getOfflineVersionMetadataWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)hasDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (bool)hasDataForKey:(id)arg1 error:(id*)arg2;
- (id)initWithDiskCache:(id)arg1 configuration:(id)arg2;
- (id)offlineTileMetadataWithError:(id*)arg1;

@end
