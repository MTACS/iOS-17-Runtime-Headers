
@interface HMDHAPAccessoryRemoteWriteTask : HMDHAPAccessoryRemoteOperationTask

- (bool)_appendServiceListWithRequest:(id)arg1 serviceList:(id)arg2;
- (id)initWithContext:(id)arg1 requests:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithContext:(id)arg1 requests:(id)arg2 delegateDevice:(id)arg3 timeout:(double)arg4 completion:(id /* block */)arg5;
- (id)initWithContext:(id)arg1 requests:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;

@end
