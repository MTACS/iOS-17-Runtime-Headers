
@interface HMDHAPAccessoryRemoteReadTask : HMDHAPAccessoryRemoteOperationTask

- (bool)_appendServiceListWithRequest:(id)arg1 serviceList:(id)arg2;
- (id)initWithContext:(id)arg1 requests:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithContext:(id)arg1 requests:(id)arg2 delegateDevice:(id)arg3 completion:(id /* block */)arg4;

@end
