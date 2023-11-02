
@interface HDHeartbeatSeriesFeatureStatusManagerServer : HDStandardTaskServer <HDHeartbeatSeriesFeatureStatusManagerDelegate, HKHeartbeatSeriesFeatureStatusManagerServer> {
    HDHeartbeatSeriesFeatureStatusManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_clientRemoteObjectProxy;
- (id)exportedInterface;
- (void)heartbeatSeriesFeatureStatusManager:(id)arg1 didFailToUpdateWithError:(id)arg2;
- (void)heartbeatSeriesFeatureStatusManager:(id)arg1 didUpdatePredominantFeature:(long long)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)arg1;
- (void)remote_stopObservingChanges;
- (void)remote_updateAndNotifyAllObservers;

@end
