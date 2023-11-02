
@interface SBAVSystemControllerCache : NSObject {
    NSObject<OS_dispatch_workloop> * _avscOperationsWorkloop;
    NSObject<OS_dispatch_queue> * _backgroundQueryQueue;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    id /* block */  _dataProviderInitializer;
    NSNotificationCenter * _notificationCenter;
    NSMutableDictionary * _notificationToBackgroundQueryCancellationSignalMap;
    NSMutableDictionary * _notificationToHandlerMap;
    bool  _outputContextSupportsMultipleOutputDevices;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _queue_activeAudioRoute;
    NSDictionary * _queue_activeAudioRouteInfo;
    NSString * _queue_activeCategoryName;
    NSArray * _queue_activeOutputDevices;
    bool  _queue_airplayDisplayActive;
    bool  _queue_audioSessionPlaying;
    <SBAVSystemControllerDataProviding> * _queue_dataProvider;
    bool  _queue_fullyMuted;
    bool  _queue_initialized;
    NSHashTable * _queue_observers;
    AVOutputContext * _queue_outputContext;
    NSArray * _queue_pickableRoutes;
    bool  _queue_ringerMuted;
    BSAtomicSignal * _queue_serverDeathSignal;
}

@property (nonatomic, readonly, copy) NSString *activeAudioRoute;
@property (nonatomic, readonly, copy) NSDictionary *activeAudioRouteInfo;
@property (nonatomic, readonly, copy) NSString *activeCategoryName;
@property (nonatomic, readonly, copy) NSArray *activeOutputDevices;
@property (getter=isAirplayDisplayActive, nonatomic, readonly) bool airplayDisplayActive;
@property (getter=isAudioSessionPlaying, nonatomic, readonly) bool audioSessionPlaying;
@property (nonatomic, readonly) NSObject<OS_dispatch_workloop> *avscOperationsWorkloop;
@property (getter=isFullyMuted, nonatomic, readonly) bool fullyMuted;
@property (nonatomic, readonly, copy) NSArray *pickableRoutes;
@property (getter=isRingerMuted, nonatomic, readonly) bool ringerMuted;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_backgroundQueryQueue_rebuildDataProvider;
- (id)_queryActiveOutputDevicesFromContext:(id)arg1;
- (id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)arg1;
- (void)_queue_finishRebuildingCacheWithDataProvider:(id)arg1 serverDeathSignal:(id)arg2;
- (void)_queue_notifyObserversWithBlock:(id /* block */)arg1;
- (void)_queue_rebuildCache;
- (void)_queue_signalBackgroundQueryCancellationForNotification:(id)arg1;
- (void)_queue_updateActiveAudioRouteFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_updateActiveCategoryNameFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_updateActiveOutputDevicesFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_updateAirplayDisplayActiveFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_updateAudioSessionPlayingFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_updateFullyMutedFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_updatePickableRoutesFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_updateRingerMutedFromNotification:(id)arg1 allowingBackgroundQueries:(bool)arg2 backgroundQueriesCancelledBlock:(id /* block */)arg3 cancelBackgroundQueriesBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_receiveUpdatedValueFromNotification:(id)arg1;
- (void)_serverDied:(id)arg1;
- (id)activeAudioRoute;
- (id)activeAudioRouteInfo;
- (id)activeCategoryName;
- (id)activeOutputDevices;
- (void)addObserver:(id)arg1;
- (id)avscOperationsWorkloop;
- (void)dealloc;
- (void)fetchPickableRoutesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCallOutQueue:(id)arg1 notificationCenter:(id)arg2 dataProviderInitializer:(id /* block */)arg3;
- (bool)isAirplayDisplayActive;
- (bool)isAudioSessionPlaying;
- (bool)isFullyMuted;
- (bool)isRingerMuted;
- (id)pickableRoutes;

@end
