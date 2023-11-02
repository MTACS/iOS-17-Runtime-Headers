
@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties> {
    CLLocation * _lastLocationUpdate;
}

@property (nonatomic, readonly) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_wantsSeperateRelevanceQueue;

- (void).cxx_destruct;
- (void)_queue_loadLocation:(id)arg1;
- (id)currentLocation;
- (void)locationManagerDidUpdateLocation:(id)arg1;
- (void)pause;
- (void)resume;

@end
