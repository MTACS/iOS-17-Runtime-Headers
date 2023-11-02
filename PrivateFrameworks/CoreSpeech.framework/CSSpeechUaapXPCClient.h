
@interface CSSpeechUaapXPCClient : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleConnectionError:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)queue;
- (void)registerDatapackUpdate;
- (void)registerMultilingualUaapApp:(id)arg1 withAssetFiles:(id)arg2 completion:(id /* block */)arg3;
- (void)registerUaapApp:(id)arg1 forLocale:(id)arg2 withAssetFiles:(id)arg3 completion:(id /* block */)arg4;
- (void)registerUaapApp:(id)arg1 withAssetFiles:(id)arg2 completion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
