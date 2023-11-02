
@interface SessionCore.OutputServer : NSObject <BSServiceConnectionListenerDelegate> {
    void _lock_activities;
    void _lock_clients;
    void listener;
    void lock;
    void processManager;
    void requestProcessingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
