
@interface PKMobileAssetManager : NSObject <PDScheduledActivityClient> {
    PKDynamicAssetIndex * _dynamicAssetsIndex;
    NSBundle * _dynamicStringsBundle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedAssetWithQuery:(id)arg1;
- (id)_compatibleVersionsWithMinimumVersion:(unsigned long long)arg1 maximumVersion:(unsigned long long)arg2;
- (void)_downloadAllPrefetchableAssets:(id /* block */)arg1;
- (void)_downloadAsset:(id)arg1 userInitiated:(bool)arg2 timeout:(long long)arg3 completion:(id /* block */)arg4;
- (void)_downloadAssetCatalogIfExpired:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)_downloadOptionsWithUserInitiation:(bool)arg1 timeout:(long long)arg2;
- (void)_purgeAssets:(id)arg1;
- (id)_queryForCityCodeStationProvider:(id)arg1;
- (id)_queryForDynamicAssetsWithParameters:(id)arg1;
- (id)_queryForMarketNotificationIdentifier:(id)arg1;
- (id)_queryForStationCodeData:(id)arg1;
- (void)_retrieveAssetWithQuery:(id)arg1 maxCompatibleVersion:(unsigned long long)arg2 userInitiated:(bool)arg3 sortDescriptors:(id)arg4 timeout:(unsigned long long)arg5 catalogExpirationDays:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (id)cachedDynamicAssetWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)cachedDynamicAssetsIndex;
- (id)cachedDynamicStringWithIdentifier:(id)arg1;
- (void)dynamicAssetWithIdentifier:(id)arg1 mappedIdentifierPrefix:(id)arg2 parameters:(id)arg3 timeout:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)dynamicAssetWithIdentifier:(id)arg1 parameters:(id)arg2 timeout:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)dynamicAssetsIndex:(id /* block */)arg1;
- (void)dynamicStringWithIdentifier:(id)arg1 timeout:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMarketNotificationAssetsForIdentifier:(id)arg1 userInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchRPIdentifierMappingUserInitiated:(bool)arg1 localOnly:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;
- (void)prefetchDynamicAssets:(id /* block */)arg1;
- (void)schedulePrefetchDynamicAssetsWithInterval:(double)arg1 queue:(id)arg2;
- (id)sortDescriptorsForLatestContentVersion;
- (id)sortDescriptorsForMarkets;
- (void)stationCodeDataForStationCodeProvider:(id)arg1 userInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
