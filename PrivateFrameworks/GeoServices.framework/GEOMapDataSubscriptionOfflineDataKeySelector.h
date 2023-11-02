
@interface GEOMapDataSubscriptionOfflineDataKeySelector : NSObject <GEOMapDataSubscriptionOfflineKeySelector> {
    GEOOfflineDataKeysServiceRequester * _dataKeyRequester;
    NSError * _keysLoadError;
    GEOPBOfflineDataBatchesResponse * _keysToLoad;
    unsigned long long  _layerIndex;
    unsigned long long  _layerOffset;
    NSDictionary * _layerVersions;
    NSObject<OS_os_log> * _log;
    NSString * _logPrefix;
    NSObject<OS_dispatch_group> * _preparationGroup;
    unsigned long long  _requestOptions;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _startedPreparing;
    GEOMapDataSubscription * _subscription;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *layerVersions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)determineNextRequestsWithMaximumCount:(unsigned long long)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)determineTotalCountWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithSubscription:(id)arg1 requestOptions:(unsigned long long)arg2 log:(id)arg3 logPrefix:(id)arg4;
- (id)layerVersions;

@end
