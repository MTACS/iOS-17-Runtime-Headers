
@interface _PXDefaultCloudCapabilitiesProvider : PXObservable <PXChangeObserver, PXCloudCapabilitiesProvider, PXSettingsKeyObserver> {
    PXUpdater * _mainQueue_updater;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSNumber * _stateQueue_cloudServiceCapability;
    NSError * _stateQueue_error;
    NSMutableArray * _stateQueue_loadHandlers;
    NSObject<OS_dispatch_queue> * _workQueue;
    SKCloudServiceController * _workQueue_storeKitController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXUpdater *mainQueue_updater;
@property (nonatomic, readonly) PXObservable *observable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic, retain) NSNumber *stateQueue_cloudServiceCapability;
@property (nonatomic, retain) NSError *stateQueue_error;
@property (nonatomic, readonly) NSMutableArray *stateQueue_loadHandlers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) SKCloudServiceController *workQueue_storeKitController;

- (void).cxx_destruct;
- (void)_handleCloudServiceCapabilityResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_handleSKCloudServiceCapabilitiesDidChangeNotification:(id)arg1;
- (void)_invalidateCloudServiceCapabilities;
- (void)_setNeedsUpdate;
- (void)_stateQueue_setCloudServiceCapability:(unsigned long long)arg1 error:(id)arg2;
- (long long)_stateQueue_statusForCapability:(id)arg1;
- (void)_updateCloudServiceCapabilities;
- (void)_workQueue_startGatheringCapabilityStatusesIfNeeded;
- (void)_workQueue_updateCloudServiceCapabilities;
- (id)error;
- (id)init;
- (id)mainQueue_updater;
- (id)observable;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)requestStatusForCapability:(id)arg1 handler:(id /* block */)arg2;
- (void)setStateQueue_cloudServiceCapability:(id)arg1;
- (void)setStateQueue_error:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)startGatheringCapabilityStatuses;
- (id)stateQueue;
- (id)stateQueue_cloudServiceCapability;
- (id)stateQueue_error;
- (id)stateQueue_loadHandlers;
- (long long)statusForCapability:(id)arg1;
- (id)workQueue;
- (id)workQueue_storeKitController;

@end
