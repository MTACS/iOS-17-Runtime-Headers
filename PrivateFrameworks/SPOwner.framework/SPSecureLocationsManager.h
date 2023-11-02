
@interface SPSecureLocationsManager : NSObject <SPSecureLocationsClientXPCProtocol> {
    id /* block */  _clearCacheUpdates;
    long long  _lastUpdatedStewieState;
    id /* block */  _locationUpdates;
    <SPSecureLocationsXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    unsigned long long  _stewieRetryCount;
    id /* block */  _stewieUpdateBlock;
}

@property (nonatomic, copy) id /* block */ clearCacheUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastUpdatedStewieState;
@property (nonatomic, copy) id /* block */ locationUpdates;
@property (nonatomic, retain) <SPSecureLocationsXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic) unsigned long long stewieRetryCount;
@property (nonatomic, copy) id /* block */ stewieUpdateBlock;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)arg1;
- (id /* block */)clearCacheUpdates;
- (void)clearLocationsForFailedSubscriptions:(id)arg1;
- (void)currentStewieStateWithCompletion:(id /* block */)arg1;
- (void)fetchConfigFromServerWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)interruptionHandler:(id)arg1;
- (void)invalidationHandler:(id)arg1;
- (void)isLocationPublishingDeviceWithCompletion:(id /* block */)arg1;
- (long long)lastUpdatedStewieState;
- (void)latestLocationFromCacheForId:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)locationUpdates;
- (void)performKeyRollWithCompletion:(id /* block */)arg1;
- (id)proxy;
- (void)publishCurrentLocationToStewieWithReason:(long long)arg1 completion:(id /* block */)arg2;
- (void)publishLocation:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)receivedLocationCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)receivedLocationPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)receivedUpdatedLocations:(id)arg1;
- (id)serviceDescription;
- (id)session;
- (void)setClearCacheUpdates:(id /* block */)arg1;
- (void)setLastUpdatedStewieState:(long long)arg1;
- (void)setLocationUpdateBlock:(id /* block */)arg1;
- (void)setLocationUpdates:(id /* block */)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStewieRetryCount:(unsigned long long)arg1;
- (void)setStewieUpdateBlock:(id /* block */)arg1;
- (void)shareCurrentKeyWithId:(id)arg1 completion:(id /* block */)arg2;
- (void)shareCurrentKeyWithId:(id)arg1 idsHandles:(id)arg2 completion:(id /* block */)arg3;
- (void)shouldStartLocationMonitorWithCompletion:(id /* block */)arg1;
- (void)simulateFeatureDisabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)startMonitoringFailedSubscriptions:(id /* block */)arg1;
- (void)startMonitoringStewieStateWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)stewiePublishStateWithCompletion:(id /* block */)arg1;
- (unsigned long long)stewieRetryCount;
- (void)stewieServiceStateChanged:(long long)arg1;
- (id /* block */)stewieUpdateBlock;
- (void)stopMonitoringStewieStateWithCompletion:(id /* block */)arg1;
- (void)subscribeAndFetchLocationForIds:(id)arg1 clientApp:(id)arg2 completion:(id /* block */)arg3;
- (void)subscribeAndFetchLocationForIds:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)triggerStewieProactiveNotification;
- (void)unsubscribeForId:(id)arg1 clientApp:(id)arg2 completion:(id /* block */)arg3;
- (void)unsubscribeForIds:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)updateLocationCacheWith:(id)arg1 completion:(id /* block */)arg2;

@end
