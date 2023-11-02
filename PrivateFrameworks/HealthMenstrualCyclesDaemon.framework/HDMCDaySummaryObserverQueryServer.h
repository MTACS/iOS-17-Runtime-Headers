
@interface HDMCDaySummaryObserverQueryServer : HDQueryServer <HDDataObserver> {
    HDMCProfileExtension * _profileExtension;
    bool  _requiresUpdate;
    _HKDelayedOperation * _updateOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_queue_deliverUpdate;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 profileExtension:(id)arg5;
- (id)objectTypes;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
