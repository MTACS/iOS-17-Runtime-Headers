
@interface NRDeviceManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)copySharedDeviceManager;

- (void).cxx_destruct;
- (id)copyDeviceListString;
- (id)copyIDSDeviceID;
- (void)disableDevice:(id)arg1;
- (void)disableDevice:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)enableDevice:(id)arg1;
- (void)enableDevice:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)registerDevice:(id)arg1 properties:(id)arg2 operationalproperties:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)registerDevice:(id)arg1 properties:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)unregisterAllDevicesWithQueue:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)unregisterDevice:(id)arg1;
- (void)unregisterDevice:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;

@end
