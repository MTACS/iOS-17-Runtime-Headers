
@interface DTXPCServiceController : NSObject {
    NSObject<OS_dispatch_queue> * _execMonitorQueue;
    NSObject<OS_dispatch_queue> * _guard;
    NSMutableDictionary * _registrationDictsByPid;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)_configureInstance:(id)arg1 identifier:(id)arg2 servicePid:(int)arg3 environment:(id)arg4 arguments:(id)arg5 options:(id)arg6;
- (void)_matchRemove:(id /* block */)arg1;
- (void)_registryModify:(bool)arg1 identifier:(id)arg2 parent:(int)arg3 client:(id)arg4 block:(id /* block */)arg5;
- (id)init;
- (void)registerClient:(id)arg1 forXPCService:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5 handler:(id /* block */)arg6;
- (void)releaseAssertionsMadeByClient:(id)arg1;
- (void)requestDebugLaunchOfDaemonWithSpecifier:(id)arg1 programPath:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5 handler:(id /* block */)arg6;
- (void)unregisterClient:(id)arg1 withIdentifier:(id)arg2 parent:(int)arg3;

@end
