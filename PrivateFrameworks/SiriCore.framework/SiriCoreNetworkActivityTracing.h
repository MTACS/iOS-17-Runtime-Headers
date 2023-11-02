
@interface SiriCoreNetworkActivityTracing : NSObject {
    NSMutableDictionary * _activities;
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedNetworkActivityTracing;

- (void).cxx_destruct;
- (void)_networkActivityActivate:(long long)arg1;
- (void)_networkActivityAddNWConnection:(id)arg1;
- (void)_networkActivityRemoveNWConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)_networkActivityStart:(long long)arg1 activate:(bool)arg2;
- (void)_networkActivityStop:(long long)arg1 withReason:(long long)arg2 andError:(id)arg3;
- (void)_networkActivityTracingCancel;
- (void)currentNetworkActivityTokenWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)networkActivityActivate:(long long)arg1;
- (void)networkActivityAddNWConnection:(id)arg1;
- (void)networkActivityRemoveNWConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)networkActivityStart:(long long)arg1 activate:(bool)arg2;
- (void)networkActivityStop:(long long)arg1 withReason:(long long)arg2 andError:(id)arg3;
- (void)networkActivityTracingCancel;

@end
