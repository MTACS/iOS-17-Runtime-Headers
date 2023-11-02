
@interface WiFi3BarsSource : NSObject <WiFiAvailabilitySource> {
    unsigned long long  _cacheExpirationInDays;
    NSMutableDictionary * _networks;
    NSObject<OS_dispatch_queue> * _queue;
    TBDataSourceMediator * _sourceMediator;
    NSURL * _storeURL;
    WiFi3BarsTileFetcher * _tileFetcher;
    id /* block */  changeHandler;
    id /* block */  relevancyHandler;
}

@property (nonatomic) unsigned long long cacheExpirationInDays;
@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *networks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ relevancyHandler;
@property (nonatomic, retain) TBDataSourceMediator *sourceMediator;
@property (nonatomic, copy) NSURL *storeURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) WiFi3BarsTileFetcher *tileFetcher;

- (void).cxx_destruct;
- (id)_descriptorForType:(unsigned long long)arg1;
- (void)_handleRemoteFetchResponse:(id)arg1;
- (id)_matchSearchBSSIDs:(id)arg1 toResponse:(id)arg2;
- (unsigned long long)cacheExpirationInDays;
- (id /* block */)changeHandler;
- (void)fetch3BarsNetworksFor:(id)arg1;
- (void)fetch3BarsNetworksForLocation:(id)arg1 forceRemote:(bool)arg2 trigger:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetch3BarsNetworksPredictedForLocation:(id)arg1 duration:(double)arg2 maxLocations:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchCandidateNetworksMatchingBSSIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceFetch3BarsNetworkMatchingBSSID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithChangeHandler:(id /* block */)arg1 localStoreType:(unsigned long long)arg2;
- (id)networks;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (id /* block */)relevancyHandler;
- (id)relevantNetworks;
- (void)setCacheExpirationInDays:(unsigned long long)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setNetworks:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRelevancyHandler:(id /* block */)arg1;
- (void)setSourceMediator:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setTileFetcher:(id)arg1;
- (id)sourceMediator;
- (id)storeURL;
- (void)submitCacheAnalyticsEvent;
- (id)tileFetcher;

@end
