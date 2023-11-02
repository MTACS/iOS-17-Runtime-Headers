
@interface HMDHAPAccessoryRemoteOperationWithLocalFallbackTask : HMDHAPAccessoryTask {
    <HMDHAPAccessoryTask> * _fallbackLocalTask;
    <HMDHAPAccessoryTask> * _localTask;
    <HMDHAPAccessoryTask> * _remoteTask;
    HMDDevice * _remoteTaskDelegateDevice;
}

@property (retain) <HMDHAPAccessoryTask> *fallbackLocalTask;
@property (retain) <HMDHAPAccessoryTask> *localTask;
@property (retain) <HMDHAPAccessoryTask> *remoteTask;
@property (readonly) HMDDevice *remoteTaskDelegateDevice;

- (void).cxx_destruct;
- (id)_makeLocalTaskWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (id)_makeRemoteTaskWithRequests:(id)arg1 delegateDevice:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)_remoteTaskCompletionHandler;
- (bool)_shouldFallbackLocallyWithError:(id)arg1 accessory:(id)arg2;
- (void)_startScanningForSuspendedAccessoriesWithRequests:(id)arg1;
- (id /* block */)completion;
- (void)execute;
- (id)fallbackLocalTask;
- (id)initWithContext:(id)arg1 requests:(id)arg2 delegateDevice:(id)arg3 completion:(id /* block */)arg4;
- (id)localTask;
- (id)remoteTask;
- (id)remoteTaskDelegateDevice;
- (void)setFallbackLocalTask:(id)arg1;
- (void)setLocalTask:(id)arg1;
- (void)setRemoteTask:(id)arg1;

@end
