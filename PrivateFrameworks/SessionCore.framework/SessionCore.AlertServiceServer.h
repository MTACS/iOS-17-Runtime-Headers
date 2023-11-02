
@interface SessionCore.AlertServiceServer : NSObject <ACAlertXPCClient, BSServiceConnectionListenerDelegate> {
    void _lock_clients;
    void delegate;
    void listener;
    void lock;
    void queue;
}

- (void).cxx_destruct;
- (void)dismissAlertWithActivityIdentifier:(id)arg1;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)presentAlertWithActivityIdentifier:(id)arg1 payload:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;

@end
