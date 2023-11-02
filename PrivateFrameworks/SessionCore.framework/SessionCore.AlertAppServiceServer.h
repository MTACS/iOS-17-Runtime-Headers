
@interface SessionCore.AlertAppServiceServer : NSObject <BSServiceConnectionListenerDelegate> {
    void _lock_clients;
    void delegate;
    void listener;
    void lock;
    void queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
