
@interface HMDHAPAccessoryRemoteReadWithLocalFallbackTask : HMDHAPAccessoryRemoteOperationWithLocalFallbackTask

- (id)_makeLocalTaskWithRequests:(id)arg1 completion:(id /* block */)arg2;
- (id)_makeRemoteTaskWithRequests:(id)arg1 delegateDevice:(id)arg2 completion:(id /* block */)arg3;

@end
