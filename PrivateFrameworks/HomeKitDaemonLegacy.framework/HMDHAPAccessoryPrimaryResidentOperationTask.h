
@interface HMDHAPAccessoryPrimaryResidentOperationTask : HMDHAPAccessoryTask {
    <HMDHAPAccessoryTask> * _localTask;
    NSMutableArray * _remoteFallbackTasks;
}

@property (nonatomic, retain) <HMDHAPAccessoryTask> *localTask;
@property (nonatomic, retain) NSMutableArray *remoteFallbackTasks;

+ (void)filterAccessoriesByDevicesFromMap:(id)arg1 currentDeviceAccessories:(id)arg2 otherDeviceAccessories:(id)arg3;

- (void).cxx_destruct;
- (id)_fallbackTaskForDevice:(id)arg1;
- (void)_fanOutRemoteRequests:(id)arg1 residentToAccessoriesMap:(id)arg2 responseWaitGroup:(id)arg3;
- (id)_makeLocalTaskWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (id)_makeRemoteWithFallbackTaskWithRequests:(id)arg1 delegateDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)_processLocalRequests:(id)arg1 responseWaitGroup:(id)arg2;
- (void)execute;
- (id)initWithContext:(id)arg1 requests:(id)arg2 completion:(id /* block */)arg3;
- (id)localTask;
- (id)remoteFallbackTasks;
- (void)setLocalTask:(id)arg1;
- (void)setRemoteFallbackTasks:(id)arg1;

@end
